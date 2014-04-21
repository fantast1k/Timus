//
//  main.cpp
//  1877. Велосипедные коды
//
//  Created by Dmitry Fantastik on 3/29/14.
//  Copyright (c) 2014 funlife. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    short a, b;
    cin >> a >> b;
    bool allowedToHack = ((a % 2) == 0) || ((b % 2) == 1);
    cout << ((allowedToHack) ? "yes" : "no");
    return 0;
}

