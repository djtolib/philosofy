#include <iostream>
#define HUMAN

bool god_exists = true;
int MAX_AGE = 100;

int main() {
    int years = 0;
    bool life = true;
    bool god_exists = false;
    while (life) {
        if (!god_exists) {
            std::cout << "Living, living and living!";
        }
        years++;
        #ifdef HUMAN
        if (years == MAX_AGE)
            break;
        #endif
    }
    std::cout << std::boolalpha << std::endl << god_exists;
}
