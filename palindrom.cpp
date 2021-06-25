#include <iostream>
#include <string>

bool isLetter(const char& x)
{
    if ((x >= 'A' && x<='Z') || (x>='a' && x<='z'))
        return true;
    return false;
}
bool isPalindrome(const std::string& line){
    int  left = 0, right = line.length() - 1;
    while(left < right)
    {
        if(isLetter(line[left]) && isLetter(line[right]))
        {
            if(line[left] != line[right])
                return false;
            else
                left++, right--;
        }

        if(!isLetter(line[left]))
            left++;
        if(!isLetter(line[right]))
            right--;

    }
    return true;
}
int main(){
    std::string str;
    getline(std::cin, str);
    bool result = isPalindrome(str);
    std::cout<<(result?"true":"false");
}
