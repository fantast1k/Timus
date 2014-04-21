//
//  main.cpp
//  1910. Руины титанов: сокрытый вход
//
//  Created by Dmitry Fantastik on 4/20/14.
//  Copyright (c) 2014 funlife. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[])
{
    short n;
    cin >> n;
    
    vector<int> v(n);
    
    for (short i = 0; i < n; ++i) {
        cin >> v[i];
    }
    
    int max = 0;
    short pos = 0;
    for (short i = 1, end = n - 1; i < end; ++i) {
        int temp = v[i-1] + v[i] + v[i+1];
        if (temp > max) {
            max = temp;
            pos = i;
        }
    }
    
    cout << max << " " << ++pos;
    
    return 0;
}

