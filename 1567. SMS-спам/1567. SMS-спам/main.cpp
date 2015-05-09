//
//  main.cpp
//  1567. SMS-спам
//
//  Created by Dmitry Fantastik on 5/9/15.
//  Copyright (c) 2015 Fun Life. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    string s;
    getline(cin, s);

    unsigned sum = 0;
    for (auto &c : s) {
        if (c == ' ' || c == '.'){
            sum += 1;
        }
        else if (c == ',') {
            sum += 2;
        }
        else if (c == '!') {
            sum += 3;
        }
        else
            sum += ((c - 'a') % 3) + 1;
    }

    cout << sum;

    return 0;
}
