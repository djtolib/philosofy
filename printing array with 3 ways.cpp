
/**
 * Copyright (c) 25.06.2021, 14:00.
 * Created by Tolibjon
 **/

#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char** argv)
{
    int a[]{2,4,1,44,11,3,7,2};

    int len = sizeof a / sizeof a[0];

    for(int i = 0; i < len; i++)
    {
        cout<<a[i]<<" "<<" \n"[i == len-1];
    }

    for(auto &x: a)
        cout<<x<<"  ";
    cout<<endl;

    for_each(a, a + len, [](auto &x){cout<<x<<"  ";});
}
