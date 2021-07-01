/*
 * Copyright (c) 01.07.2021, 15:54.
 * Created by Tolibjon
 **/

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;
bool is_power_of_two(int x)
{
    return x && (!(x&(x-1)));
}
int sign_digit(long long x)
{
    double log = log10(x);
    log -=  floor(log);
    return (int)pow(10, log);
}
int main() {
    vector<int> v(10);
    generate(v.begin(),v.end(), rand);
    for(auto &x : v)
        cout<<x<<" ";
}
