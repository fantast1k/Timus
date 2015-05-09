//
//  main.cpp
//  1639. Шоколад 2
//
//  Created by Dmitry Fantastik on 5/9/15.
//  Copyright (c) 2015 Fun Life. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    unsigned n, m;
    cin >> n >> m;
    cout << (((n*m) % 2) ? "[second]=:]" : "[:=[first]");
    return 0;
}
