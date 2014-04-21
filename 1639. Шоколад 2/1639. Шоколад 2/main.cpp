//
//  main.cpp
//  1639. Шоколад 2
//
//  Created by Dmitry Fantastik on 4/20/14.
//  Copyright (c) 2014 funlife. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    short m, n;
    cin >> m >> n;
    
    short c = m * n - 1;
    cout << ((c % 2 == 0) ? "[second]=:]" : "[:=[first]");
    
    return 0;
}

