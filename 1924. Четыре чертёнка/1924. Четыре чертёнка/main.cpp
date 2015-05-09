//
//  main.cpp
//  1924. Четыре чертёнка
//
//  Created by Dmitry Fantastik on 5/9/15.
//  Copyright (c) 2015 Fun Life. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    unsigned n;
    cin >> n;
    if (n % 2) ++n;
    bool areGrimmyWin = ((n / 2) % 2) == 1;
    cout << (areGrimmyWin ? "grimy" : "black");
    return 0;
}
