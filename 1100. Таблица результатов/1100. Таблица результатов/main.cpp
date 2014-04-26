//
//  main.cpp
//  1100. Таблица результатов
//
//  Created by Dmitry Fantastik on 4/26/14.
//  Copyright (c) 2014 funlife. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Team {
    unsigned int id;
    short solved;
};

bool cmp (const Team &a, const Team &b)
{
    return a.solved > b.solved;
}

int main(int argc, const char * argv[])
{
    int N;
    cin >> N;
    
    vector<Team> teams{};
    for (int i = 0; i < N; ++i) {
        Team t{};
        cin >> t.id >> t.solved;
        teams.push_back(t);
    }
    
    stable_sort(teams.begin(), teams.end(), cmp);
    
    for(auto &x : teams) {
        cout << x.id << " " << x.solved << endl;
    }
    
    return 0;
}

