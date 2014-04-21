//
//  main.cpp
//  1881. Длинное условие задачи
//
//  Created by Dmitry Fantastik on 4/21/14.
//  Copyright (c) 2014 funlife. All rights reserved.
//

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[])
{
    int h, w, n;
    cin >> h >> w >> n;
    
    int hCaret{1    }, wCaret{};
    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        if ((wCaret + s.size()) > w) {
            wCaret = 0;
            hCaret++;
        }
        wCaret += (s.size() + 1);
    }
    
    cout << static_cast<int>(ceil(static_cast<double>(hCaret)/ static_cast<double>(h)));
    
    return 0;
}

