//
//  main.cpp
//  1409. Два бандита
//
//  Created by Dmitry Fantastik on 3/22/14.
//  Copyright (c) 2014 funlinfe. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    unsigned a, b, s;
    cin >> a >> b;
    s = a + b - 1;
    cout << s - a << " " << s - b;
    return 0;
}

