#include<iostream>

void reset(int array[], int n){
    for(int i = 0; i < n+1 ; i++){
        array[i]=0;
    }
}

int main(){


    int n, p;
    
    while(std::cin >> n >> p && n != -1 && p != -1){
        int array[n+1], temp, contador = 0;
        reset(array,n);
        for(int i = 0; i < p ; i++){
            std::cin >> temp;
            if(array[temp] == 0){
                array[temp] = 1;
            }else if(array[temp] == 1){
                contador++;
                array[temp] = 2;
            }
        }
        std::cout << contador << std::endl;
    }
    
    return 0;
}