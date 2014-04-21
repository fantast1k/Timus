//
//  main.cpp
//  2001. Математики и ягоды
//
//  Created by Dmitry Fantastik on 4/20/14.
//  Copyright (c) 2014 funlife. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[])
{
    vector<int> v(6);
    
    for (int i = 0; i < 6; ++i) {
        cin >> v[i];
    }
    
    cout << (v[0] - v[4]) << " " << (v[1] - v[3]);
    
    return 0;
}

