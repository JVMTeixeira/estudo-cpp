#include<iostream>

int main(){


    int n,primeiro, segundo;
    std::cin >> n;

    if(n<1 || n > 1000)exit(1);

    for(int i = 0; i < n ; i++){

    
    std::cin >> primeiro >> segundo;
    if(primeiro>segundo)std::cout << primeiro << " "<< segundo << std::endl;
    else std::cout << segundo << " " << primeiro << std::endl;

    }

    return 0;
}