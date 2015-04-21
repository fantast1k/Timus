//
//  main.cpp
//  1785. Трудности локализации
//
//  Created by Dmitry Fantastik on 4/21/15.
//  Copyright (c) 2015 Fun Life. All rights reserved.
//

#include <iostream>
#include <limits>
#include <map>

using namespace std;

int main(int argc, const char * argv[])
{
    map<unsigned int, string> m = {
        {5, "few"},
        {10, "several"},
        {20, "pack"},
        {50, "lots"},
        {100, "horde"},
        {250, "throng"},
        {500, "swarm"},
        {1000, "zounds"},
        {numeric_limits<unsigned int>::max(), "legion"}
    };

    unsigned int N;
    cin >> N;

    string val;
    for (auto& kv : m) {
        if (kv.first > N) {
            val = kv.second;
            break;
        }
    }

    cout << val << endl;

    return 0;
}
