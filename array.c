#include<stdio.h>

int main(){
    int num [10] = {10,30,50,30,11,20,5,2,1,0};
    int min = num[0];
    int max = num[0];

    for(int i = 0; i <10; i++){

    if(num[i] < min){

      min = num[i];  
    }

    if(num[i] > max){
      max = num[i];  
    }

}

printf("min number is = %d\n",min);
printf("max number is = %d\n",max);




return 0;


    
}