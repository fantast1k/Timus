//
//  main.cpp
//  1787. Поворот на МЕГУ
//
//  Created by Dmitry Fantastik on 4/19/14.
//  Copyright (c) 2014 funlife. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int k, n;
    
    cin >> k >> n;
    
    int t, sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> t;
        sum += t - k;
        if (sum < 0) sum = 0;
    }
    
    cout << sum;
    
    return 0;
}

