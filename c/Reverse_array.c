// Code for array reversal
#include<stdio.h>
int main(){
    int num;
    printf("Enter the length of array :");
    scanf("%d",&num);
    int ar[num];
    for(int i=0; i <num; i++){
        printf("enter the value at index %d :",i);
        scanf("%d",&ar[i]);
        
    }
    printf("The array in reverse order is \n");
    for (int j = num-1 ; j >= 0; j--){
        printf("%d ",ar[j]);

    }
    return 0;
}
