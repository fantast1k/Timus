//
//  main.cpp
//  1585. Пингвины
//
//  Created by Dmitry Fantastik on 4/22/14.
//  Copyright (c) 2014 funlife. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    short N;
    short val[3] {};
    cin >> N;
    
    for (string s; getline(cin, s);) {
        if (s == "Emperor Penguin") {
            ++val[0];
        }
        else if (s == "Little Penguin") {
            ++val[1];
        }
        else if (s == "Macaroni Penguin") {
            ++val[2];
        }
    }
    
    
    string s = (val[0] > val[1] && val[0] > val[2]) ? "Emperor Penguin" :
               (val[1] > val[0] && val[1] > val[2]) ? "Little Penguin" : "Macaroni Penguin";
    
    cout << s;
    
    return 0;
}

