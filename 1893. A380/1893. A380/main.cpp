//
//  main.cpp
//  1893. A380
//
//  Created by Dmitry Fantastik on 4/26/14.
//  Copyright (c) 2014 funlife. All rights reserved.
//

#include <iostream>
#include <fstream>

using namespace std;

enum PositionType {
    Window, Aisle, Neither
};

int main(int argc, const char * argv[])
{
    short row;
    char pos;
    cin >> row >> pos;
    PositionType type;
    
    if (row < 3) {
        switch (pos) {
            case 'D':
            case 'A':
                type = Window;
                break;
            default:
                type = Aisle;
                break;
        }
    }
    else if (row < 21) {
        switch (pos) {
            case 'F':
            case 'A':
                type = Window;
                break;
            default:
                type = Aisle;
                break;
        }
    }
    else {
        switch (pos) {
            case 'K':
            case 'A':
                type = Window;
                break;
            case 'C':
            case 'D':
            case 'H':
            case 'G':
                type = Aisle;
                break;
            default:
                type = Neither;
                break;
        }
    }
    
    string s = (type == Window) ? "window" : (type == Aisle) ? "aisle" : "neither";
    cout << s;
    
    return 0;
}

