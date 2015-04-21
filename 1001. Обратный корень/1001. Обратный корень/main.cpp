//
//  main.cpp
//  1001. Обратный корень
//
//  Created by Dmitry Fantastik on 6/7/14.
//  Copyright (c) 2014 funlife. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>


using namespace std;

int main(int argc, const char * argv[])
{
    vector<unsigned long long> in;
    unsigned long long tmp;
    while (cin >> tmp) {
        in.push_back(tmp);
    }
    
    cout << setprecision(4) << fixed;
    
    for (auto x: in) {
        cout << sqrt(static_cast<double>(x)) << endl;
    }
    return 0;
}

