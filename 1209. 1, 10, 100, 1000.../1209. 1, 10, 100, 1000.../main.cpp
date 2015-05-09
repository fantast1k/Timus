//
//  main.cpp
//  1209. 1, 10, 100, 1000...
//
//  Created by Dmitry Fantastik on 5/9/15.
//  Copyright (c) 2015 Fun Life. All rights reserved.
//

#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[])
{
    unsigned N;
    cin >> N;

    vector<uint32_t> v;
    for (uint64_t i = 1, last = 1, end = numeric_limits<uint32_t>::max() / 2; last <= end; i++) {
        v.push_back(static_cast<uint32_t>(last));
        last += i;
    }

    for (int  i = 0; i < N; i++) {
        unsigned a;
        cin >> a;
        cout << (binary_search(v.begin(), v.end(), a) ? 1 : 0) << " ";
    }

    return 0;
}
