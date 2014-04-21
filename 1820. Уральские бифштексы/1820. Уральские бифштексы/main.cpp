//
//  main.cpp
//  1820. Уральские бифштексы
//
//  Created by Dmitry Fantastik on 3/29/14.
//  Copyright (c) 2014 funlife. All rights reserved.
//

#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[])
{
    int n, k;
    cin >> n >> k;
    int m = max(static_cast<int>(ceil((n << 1) / static_cast<double>(k))), 2);
    
    cout << m;
    return 0;
}

