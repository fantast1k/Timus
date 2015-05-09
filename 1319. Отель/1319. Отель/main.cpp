//
//  main.cpp
//  1319. Отель
//
//  Created by Dmitry Fantastik on 5/9/15.
//  Copyright (c) 2015 Fun Life. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[])
{
    unsigned N;
    cin >> N;
    vector<vector<unsigned>> v(N);

    unsigned a = 0;

    for (int i = 0; i < N; i++) {
        v[i] = vector<unsigned>(N);
    }

    for (size_t i = v.size(); --i;) {
        for (size_t j = 0, end = v.size() - i; j < end ; j++) {
            v[j][i + j] = ++a;
        }
    }

    for (size_t i = 0, end = v.size(); i < end; i++) {
        for (size_t j = 0, e = end - i; j < e; j++) {
            v[i + j][j] = ++a;
        }
    }

    for (auto &r : v) {
        for (auto &val : r)
            cout << val << " ";
        cout << endl;
    }

    return 0;
}
