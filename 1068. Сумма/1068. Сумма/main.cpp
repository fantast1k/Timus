//
//  main.cpp
//  1068. Сумма
//
//  Created by Dmitry Fantastik on 5/9/15.
//  Copyright (c) 2015 Fun Life. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[])
{
    int N;
    cin >> N;

    int additionalElements = 0;
    if (N == 0) additionalElements = 2;
    if (N < 0)  additionalElements = 2;

    int val = ((1 + N) / 2.0) * (abs(N) + additionalElements);
    cout << val;
    return 0;
}
