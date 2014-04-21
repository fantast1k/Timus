//
//  main.cpp
//  1209. 1, 10, 100, 1000...
//
//  Created by Dmitry Fantastik on 3/22/14.
//  Copyright (c) 2014 funlinfe. All rights reserved.
//

#include <iostream>
#include <limits>

using namespace std;

int main(int argc, const char * argv[])
{
    unsigned long long pos = 0, degree = 0;
    unsigned long long cells[65535];
    int ones[65536];
    int count = 0;
    cin >> count;
    
    for (int i = 0; i < count; i++) {
        cin >> cells[i];
    }
    
    for (int i = 0; pos < 2147483647; i++) {
        ones[i] = ((pos += ++degree) - i);
    }
    
    for (int i = 0, imax, imin, mid; i < count; i++) {
        imax = 65535, imin = 0, mid = 0;
        unsigned long long val = cells[i];
        int found = 0;
        while (imin <= imax) {
            mid = (imax + imin) / 2;
            if (val == ones[mid]) {
                found = 1;
                break;
            }
            else if (val > ones[mid]) {
                imin = mid + 1;
            }
            else {
                imax = mid - 1;
            }
        }
        cout << found << " ";
    }
    
    return 0;
}

