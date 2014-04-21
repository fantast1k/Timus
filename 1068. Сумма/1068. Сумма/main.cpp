//
//  main.cpp
//  1068. Сумма
//
//  Created by Dmitry Fantastik on 3/22/14.
//  Copyright (c) 2014 funlinfe. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, const char * argv[])
{
    int border;
    int n;
    cin >> border;
    
    n = max(1, border) - min(border, 1);
    cout << setiosflags(ios_base::fixed) << setprecision(0) << ((border + 1) / 2.0) * ++n << endl;
    
    return 0;
}

