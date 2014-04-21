//
//  main.cpp
//  1225. Флаги
//
//  Created by Dmitry Fantastik on 4/21/14.
//  Copyright (c) 2014 funlife. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[])
{
    short N;
    cin >> N;
    
    vector<unsigned long> v(N);
    v[0] = v[1] = 1;
    for (short i = 2; i < N; ++i) {
        v[i] = v[i-1] + v[i-2];
    }
    
    cout << v[N-1] * 2 << endl;
    
    return 0;
}
