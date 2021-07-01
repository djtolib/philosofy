/**
 * Copyright (c) 01.07.2021, 15:59.
 * Created by Tolibjon
 **/

#include<bits/stdc++.h>

using namespace std;
struct workshop{
    int start_time, duration, end_time;

    workshop(int start_time, int duration):
            start_time(start_time),
            duration(duration),
            end_time(start_time + duration){}

    bool operator< (workshop & x){
        return this->end_time < x.end_time;
        }
};
struct Available_Workshops{
    int n;
    vector<workshop> arr;
};
Available_Workshops* initialize(int start_time[], int duration[], int n){

    Available_Workshops *res = new Available_Workshops;
    res->n = n;
    for(int i = 0; i<n; i++){
        ;
        res->arr.push_back({start_time[i], duration[i]});
    }
    sort(res->arr.begin(), res->arr.end());

    return res;

}

int CalculateMaxWorkshops(Available_Workshops* ptr){
    int res = 0, end_time = 0;
    for(int i = 0; i < ptr->n; i++)
        ptr->arr[i].start_time >= end_time ?
        res++, end_time = ptr->arr[i].end_time
                                           : 0;
    return res;
}

int main(int argc, char *argv[]) {
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];

    for(int i=0; i < n; i++){
        cin >> start_time[i];
    }
    for(int i = 0; i < n; i++){
        cin >> duration[i];
    }

    Available_Workshops * ptr;
    ptr = initialize(start_time,duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}
