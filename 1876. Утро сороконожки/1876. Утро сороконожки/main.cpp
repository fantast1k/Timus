//
//  main.cpp
//  1876. Утро сороконожки
//
//  Created by Dmitry Fantastik on 4/25/14.
//  Copyright (c) 2014 funlife. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    short a, b, tries{0};
    cin >> a >> b;

    tries += (39 * 2); // right
    tries += 39; // left
    tries += max((a - 40) * 2 + 1, (b - 39) * 2) + 1;
    
    cout << tries;
    
    return 0;
}

