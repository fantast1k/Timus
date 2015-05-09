//
//  main.cpp
//  1197. Один в поле воин
//
//  Created by Dmitry Fantastik on 5/9/15.
//  Copyright (c) 2015 Fun Life. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

typedef struct {
    int x;
    int y;
} ChessPosition;

static inline int isPositionValid(int x, int y)
{
    return (x >= 1 && x <= 8 && y >= 1 && y <= 8) ? 1 : 0;
}

int getNumOfPossiblePositions(ChessPosition &cp)
{
    int n = 0;
    n += isPositionValid(cp.x + 2, cp.y + 1);
    n += isPositionValid(cp.x + 2, cp.y - 1);
    n += isPositionValid(cp.x - 2, cp.y + 1);
    n += isPositionValid(cp.x - 2, cp.y - 1);
    n += isPositionValid(cp.x - 1, cp.y + 2);
    n += isPositionValid(cp.x + 1, cp.y + 2);
    n += isPositionValid(cp.x - 1, cp.y - 2);
    n += isPositionValid(cp.x + 1, cp.y - 2);
    return n;
}

int main(int argc, const char * argv[])
{
    unsigned N;
    cin >> N;
    vector<ChessPosition> v(N);

    for (int i = 0; i < N; ++i) {
        string t;
        cin >> t;
        ChessPosition cp = {*(t.c_str()) - 'a' + 1, stoi(t.substr(1, 1))};
        v[i] = cp;
    }

    for (auto &cp : v) {
        cout << getNumOfPossiblePositions(cp) << endl;
    }

    return 0;
}
