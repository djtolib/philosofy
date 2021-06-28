/**
 * Copyright (c) 28.06.2021, 12:45.
 * Created by Tolibjon
 **/

/**
 * Copyright (c) 25.06.2021, 14:00.
 * Created by Tolibjon
 **/

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv)
{
    int n = 5;
    int len = 2*n-1, i, j, m;
    for(i=0;i<len;i++)
        for(j=0;j<len;j++)
        {
            m = min(i, j);
            m = min(m, len - i - 1);
            m = min(m, len - j - 1);
            cout<<n-m<<" \n"[j == len -1];
        }

}


