//
//  main.cpp
//  1581. Работа в команде
//
//  Created by Dmitry Fantastik on 5/10/15.
//  Copyright (c) 2015 Fun Life. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    unsigned N;
    cin >> N;

    short val, a;
    unsigned quantity = 1;

    cin >> val;
    for (int i = 1; i < N; i++) {
        cin >> a;
        if (a == val) {
            quantity ++;
        }
        else {
            cout << quantity << " " << val << " ";
            val = a;
            quantity = 1;
        }
    }

    cout << quantity << " " << val;

    return 0;
}
