//
//  main.cpp
//  1567. SMS-спам
//
//  Created by Dmitry Fantastik on 4/20/14.
//  Copyright (c) 2014 funlife. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[])
{
    string s;
    getline(cin, s);
    
    int sum = 0;
    for (auto & c : s) {
        if (c == ' ' || c == '.')
            sum += 1;
        else if (c == ',')
            sum += 2;
        else if (c == '!')
            sum += 3;
        else
            sum += ((c - 'a') % 3) + 1;
    }
    
    cout << sum;
    
    return 0;
}

