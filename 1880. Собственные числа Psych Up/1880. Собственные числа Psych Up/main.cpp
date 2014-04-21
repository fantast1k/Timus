//
//  main.cpp
//  1880. Собственные числа Psych Up
//
//  Created by Dmitry Fantastik on 4/20/14.
//  Copyright (c) 2014 funlife. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

template <typename T>
void fillupVector(vector<T>& v, short n)
{
    T t = 0;
    for (short i = 0; i < n; ++i) {
        cin >> t;
        v.push_back(t);
    }
}

int main(int argc, const char * argv[])
{
    vector<uint64_t> v1{}, v2{}, intersect{};
    short n;
    
    cin >> n;
    fillupVector(v1, n);
    cin >> n;
    fillupVector(v2, n);
    
    set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), back_inserter(intersect));
    
    v1 = intersect;
    intersect.clear();
    v2.clear();
    
    cin >> n;
    fillupVector(v2, n);
    
    set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), back_inserter(intersect));
    
    cout << intersect.size();
    
    return 0;
}

