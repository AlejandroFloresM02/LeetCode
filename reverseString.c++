#include <iostream>
#include <vector>
#include <string>

void reverseString(std::vector<char>& str){
    int left = 0;
    int right = str.size()-1;

    while (left < right){
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left ++;
        right --;
    }
}

int main(){
    std::vector<char> str = {'h','e','l','l','o'};
     
    std::cout << "Original string: ";
    for (char c : str) {
        std::cout << c;
    }
    std::cout << std::endl;

    reverseString(str);
    
    std::cout << "Reversed string: ";
    for (char c : str) {
        std::cout << c;
    }
    std::cout << std::endl;

}
