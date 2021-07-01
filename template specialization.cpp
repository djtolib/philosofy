/**
 * Copyright (c) 01.07.2021, 15:50.
 * Created by Tolibjon
 **/
#include <iostream>
using namespace std;
enum class Fruit { apple, orange, pear };
enum class Color { red, green, orange };

template <typename T> struct Traits;

template <>
struct Traits<Fruit>{
    static string name(int index){
        int max_index = static_cast<int>(Fruit::pear),
                min_index = static_cast<int>(Fruit::apple);
        if(index >= min_index && index <= max_index){
            switch (static_cast<Fruit>(index)) {
                case Fruit::apple:
                    return "apple";
                case Fruit::orange:
                    return "orange";
                default:
                    return "pear";
            }
        }
        return "unknown";
    }
};

template <>
struct Traits<Color>{
    static string name(int index){
        int max_index = static_cast<int>(Color::orange),
                min_index = static_cast<int>(Color::red);
        if(index >= min_index && index <= max_index){
            switch (static_cast<Color>(index)) {
                case Color::red:
                    return "red";
                case Color::green:
                    return "green";
                default:
                    return "orange";
            }
        }
        return "unknown";
    }
};

int main()
{
    int t = 0; std::cin >> t;

    for (int i=0; i!=t; ++i) {
        int index1; std::cin >> index1;
        int index2; std::cin >> index2;
        cout << Traits<Color>::name(index1) << " ";
        cout << Traits<Fruit>::name(index2) << "\n";
    }
}


