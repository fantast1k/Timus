//
//  main.cpp
//  1877. Велосипедные коды
//
//  Created by Dmitry Fantastik on 4/24/15.
//  Copyright (c) 2015 Fun Life. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    unsigned int A, B;
    cin >> A >> B;

    string answer = ((A + 1) % 2 || B % 2) ? "yes" : "no";
    cout << answer;
    return 0;
}
