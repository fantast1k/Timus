//
//  main.cpp
//  1581. Работа в команде
//
//  Created by Dmitry Fantastik on 4/21/14.
//  Copyright (c) 2014 funlife. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    short n, c;
    cin >> n;
    
    short inc = 1;
    cin >> c;
    
    for (short i = 1, tmp; i < n; ++i) {
        cin >> tmp;
        if (tmp == c) {
            ++inc;
        }
        else {
            cout << inc << " " << c << " ";
            c = tmp;
            inc = 1;
        }
    }
    
    cout << inc << " " << c;
    
    return 0;
}

