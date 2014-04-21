//
//  main.cpp
//  1313. К вопросу о спорте
//
//  Created by Dmitry Fantastik on 3/22/14.
//  Copyright (c) 2014 funlinfe. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    short matr[100][100];
    int count;
    cin >> count;
    
    for (int i = 0; i < count; i++) {
        for (int j = 0; j < count; j++) {
            cin >> matr[i][j];
        }
    }
    
    int row, column;
    for (int j = 0, end = (count << 1), up = count - 1; j < end; j++) {
        row = min(j, up);
        column = max(0, j - up);
        for (; row >= 0 && column < count; column++, row--) {
            cout << matr[row][column] << " ";
        }
    }
    
    return 0;
}

