//
//  main.cpp
//  1263. Выборы
//
//  Created by Dmitry Fantastik on 4/21/14.
//  Copyright (c) 2014 funlife. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[])
{
    short N, M;
    cin >> N >> M;
    
    vector<short> v(N);
    short n;
    for (short i = 0; i < M; ++i) {
        cin >> n;
        ++v[--n];
    }
    
    cout.precision(2);
    for (auto& x : v) {
        cout << fixed << (static_cast<double>(x) / static_cast<double>(M)) * 100 << "%" << endl;
    }
    
    return 0;
}

