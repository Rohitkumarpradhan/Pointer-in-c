#include <stdio.h>

int main(){
    int ar[]={1,5,8,9,7,5};
    int* ptr= ar;
    int sum=0;
    for(int i =0;i<5;i++){
        sum= sum+ *(ptr+i);
        printf("the sum is :%d\n",sum);
    }
   printf("The total sum is : %d\n",sum);
return 0;
}