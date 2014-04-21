//
//  main.cpp
//  1001. Обратный корень
//
//  Created by Dmitry Fantastik on 3/22/14.
//  Copyright (c) 2014 funlinfe. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[])
{
    int count = 256 * 1024;
    int iter = -1;
    long double *arr = new long double[count];

    while (iter < count && cin >> arr[++iter] ) {

    }
    
    for (; iter > 0;) {
        cout << setiosflags(ios::fixed) << setprecision(4) << sqrtl(arr[--iter]) << endl;
    }
    delete arr;
    return 0;
}

