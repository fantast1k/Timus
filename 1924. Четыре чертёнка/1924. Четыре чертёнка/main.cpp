//
//  main.cpp
//  1924. Четыре чертёнка
//
//  Created by Dmitry Fantastik on 4/20/14.
//  Copyright (c) 2014 funlife. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[])
{
    short n;
    cin >> n;
    int evenCount =static_cast<int>(ceil(static_cast<float>(n) / 2.0f));
    bool blackWin = (evenCount % 2) == 0;
    cout << ((blackWin) ? "black" : "grimy");
    return 0;
}

