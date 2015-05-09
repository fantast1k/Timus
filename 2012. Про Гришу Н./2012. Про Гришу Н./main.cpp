//
//  main.cpp
//  2012. Про Гришу Н.
//
//  Created by Dmitry Fantastik on 5/9/15.
//  Copyright (c) 2015 Fun Life. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int f;
    cin >> f;
    int rest = 12 - f;
    cout << (((4*60 - rest * 45) > 0) ? "YES" : "NO");
    return 0;
}
