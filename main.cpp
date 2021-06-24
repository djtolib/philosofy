#include <iostream>
#define HUMAN

bool godExists = true;
int MAX_AGE = 100;

int main() {
    int years = 0;
    bool life = true;
    while (life) {
        bool godExists = false;
        if (!godExists) {
            std::cout << "Living, living and living!";
        }
        years++;
        #ifdef HUMAN
        if (years == MAX_AGE)
            break;
        #endif
    }
    std::cout << std::boolalpha << std::endl << godExists;
}
