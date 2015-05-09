//
//  main.cpp
//  1910. Руины титанов: сокрытый вход
//
//  Created by Dmitry Fantastik on 5/9/15.
//  Copyright (c) 2015 Fun Life. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[])
{
    unsigned int n;
    cin >> n;

    unsigned a1, a2, a3 = a2 = a1 = 0;
    unsigned mx, pos = mx = 0;
    for (int i = 0; i < n; i++) {
        a1 = a2;
        a2 = a3;
        cin >> a3;

        if (a1 + a2 + a3 > mx) {
            mx = a1 + a2 + a3;
            pos = i;
        }
    }

    cout << mx << " " << pos << endl;

    return 0;
}
