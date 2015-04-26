//
//  main.cpp
//  1820. Уральские бифштексы
//
//  Created by Dmitry Fantastik on 4/26/15.
//  Copyright (c) 2015 Fun Life. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[])
{
    unsigned int n, k;
    cin >> n >> k;
    if (k > n) k = n;
    cout << static_cast<unsigned int>(ceil(n * 2.0 / k));
    return 0;
}
