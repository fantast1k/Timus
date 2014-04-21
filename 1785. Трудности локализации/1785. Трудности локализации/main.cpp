//
//  main.cpp
//  1785. Трудности локализации
//
//  Created by Dmitry Fantastik on 3/29/14.
//  Copyright (c) 2014 funlife. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    char const itemsCount = 9;
    string localization[itemsCount] = {"few", "several", "pack", "lots", "horde", "throng", "swarm", "zounds", "legion"};
    short borders[itemsCount] = {4, 9, 19, 49, 99, 249, 499, 999, 2000};
    short c, i = -1;
    cin >> c;
    
    while (borders[++i] < c) {}
    
    cout << localization[i];
    
    return 0;
}

