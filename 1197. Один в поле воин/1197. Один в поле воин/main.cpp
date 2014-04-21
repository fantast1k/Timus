//
//  main.cpp
//  1197. Один в поле воин
//
//  Created by Dmitry Fantastik on 3/22/14.
//  Copyright (c) 2014 funlife. All rights reserved.
//

#include <iostream>

using namespace std;

inline int possibleSteps(short& v, short &c)
{
    short max = 8;
    short a = (v == 0 || v == 7) ? 0 : (v == 1 || v == 6) ? 1 : v;
    short b = (c == 0 || c == 7) ? 0 : (c == 1 || c == 6) ? 1 : c;

    if (a == 0 || b == 0 || (a+b) == 2)
    {
        max -= 4;
        if (!(a + b))
            max -= 2;
        else if ((a+b) == 1)
            max -= 1;
    }
    else if (a == 1 || b == 1) {
        max -= 2;
    }
    
    return max;
}

int main(int argc, const char * argv[])
{
    short count;
    char c; short v, h;
    cin >> count;
    
    for (int i = 0; i < count; i++) {
        cin >> c >> v;
        v--;
        h = c - 'a';
        cout << possibleSteps(h, v) << endl;
    }
    
    return 0;
}

