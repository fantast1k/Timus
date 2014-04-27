//
//  main.cpp
//  1327. Предохранители
//
//  Created by Dmitry Fantastik on 4/27/14.
//  Copyright (c) 2014 funlife. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int A, B, rez{};
    cin >> A >> B;
    rez = (B - A) / 2;
    if ((A % 2) || (B % 2))
        ++rez;
    cout << rez;
    return 0;
}

