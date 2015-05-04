//
//  main.cpp
//  2001. Математики и ягоды
//
//  Created by Dmitry Fantastik on 5/5/15.
//  Copyright (c) 2015 Fun Life. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    unsigned int a1, a2, a3, b1, b2, b3;
    cin >> a1 >> b1;
    cin >> a2 >> b2;
    cin >> a3 >> b3;
    cout << (a1 - a3) << " " << (b1 - b2);
    return 0;
}
