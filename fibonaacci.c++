#include <iostream>

int req(int num){
    if(num <= 1){
        return num;
    }
    else{
        int oneBack = req(num-1);
        int twoBack = req(num-2);
        int sum = oneBack + twoBack;
        return sum;
    }
}

int main(){
    int fibnNum = 4;
    std::cout << req(fibnNum) << std::endl; 
}