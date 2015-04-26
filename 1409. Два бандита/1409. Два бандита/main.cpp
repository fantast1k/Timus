//
//  main.cpp
//  1409. Два бандита
//
//  Created by Dmitry Fantastik on 4/26/15.
//  Copyright (c) 2015 Fun Life. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    unsigned int A, B;
    cin >> A >> B;
    unsigned int s = A + B -1;
    cout << s - A << " " << s - B;
    return 0;
}
