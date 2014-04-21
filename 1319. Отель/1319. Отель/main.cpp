//
//  main.cpp
//  1319. Отель
//
//  Created by Dmitry Fantastik on 3/23/14.
//  Copyright (c) 2014 funlinfe. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int count = 4;
    cin >> count;
    
    for (int i = 0, diag = 0, pos; i < count; i++) {
        diag = count + i;
        pos = 0;
        for (int j = 0, val, r, l, c; j < count; j++) {
            val = 1;
            c = count;
            r = min(diag - j, count);
            l = max(0, diag - count - j);
            pos = min(i, j);
            while (l--) { val += c--;}
            while (r--) { val += r;}
            val += pos;
            cout << val << " ";
        }
        cout << endl;
    }
    
    return 0;
}

