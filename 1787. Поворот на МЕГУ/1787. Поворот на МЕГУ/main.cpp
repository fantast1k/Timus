//
//  main.cpp
//  1787. Поворот на МЕГУ
//
//  Created by Dmitry Fantastik on 4/26/15.
//  Copyright (c) 2015 Fun Life. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    unsigned int k, n;
    int t;

    int c = 0;
    cin >> k >> n;
    for (int i = 0; i < n; i++) {
        cin >> t;
        c += (t - k);
        if (c < 0)
            c = 0;
    }
    cout << c;
    return 0;
}
