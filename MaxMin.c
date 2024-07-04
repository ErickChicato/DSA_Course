#include <stdio.h>


int main(){


    int Arr[5]={0,1,2,3,4};
    int Max = Arr[0];
    int Min = Arr[0];
    //For the Max
    for(int i=0;i<=5;i++){
        printf(Arr[i]);

        if(Arr[i]>Max){
            Max = Arr[i];
        }
    }
    //For the Min
    for(int i=0;i<5;i++){
        if(Arr[i]<=Min){
          min = Arr[i];
        }
    }





    return 0;
}