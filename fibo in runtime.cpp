/***
 * Created by Tolibjon *
 ***/
#include "iostream"
#include <bitset>
using namespace std;
template<size_t n>
struct fibo{
    enum{value = fibo<n-1>::value + fibo<n-2>::value};
};
template<>
struct fibo<0>{
    enum{value = 0};
};
template<>
struct fibo<1>{
    enum{value = 1};
};
template<>
struct fibo<2>{
    enum{value = 1};
};


int main(){
    cout<<fibo<10>::value;
}
