//
//  main.cpp
//  1880. Собственные числа Psych Up
//
//  Created by Dmitry Fantastik on 4/26/15.
//  Copyright (c) 2015 Fun Life. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

void fillupSet(set<uint64_t> &s, unsigned N)
{
    uint64_t t;
    for (unsigned i = 0; i < N; i++) {
        cin >> t;
        s.insert(t);
    }
}

int main(int argc, const char * argv[])
{
    set<uint64_t> s1, s2, intersect;
    short N;
    cin >> N;
    fillupSet(s1, N);
    cin >> N;
    fillupSet(s2, N);

    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(intersect, intersect.begin()));

    s1 = set<uint64_t>(intersect);
    s2.clear();
    intersect.clear();

    cin >> N;
    fillupSet(s2, N);

    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(intersect, intersect.begin()));

    cout << intersect.size();

    return 0;
}
