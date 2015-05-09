//
//  main.cpp
//  1313. К вопросу о спорте
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
    vector<vector<short>> v(N);
    for (int i = 0; i < N; i++) {
        v[i] = vector<short>(N);
        for (int j = 0; j < N; j++) {
            cin >> v[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            cout << v[i - j][i - (i-j)] << " ";
        }
    }
    for (int i = 1; i < N; i++) {
        for (int j = 0, end = N - i; j < end; j++) {
            cout << v[N - 1 - j][i + j] << " ";
        }
    }

    return 0;
}
