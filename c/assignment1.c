// This is quesion no.1 of assignment
// submited by Priyanshu Rajput roll no. 20bcs014 
#include<stdio.h>
int main(){
    int num,sum=0;
    printf("enter the length of the array : ");
    scanf("%d",&num);
    int ar[num],avr=0;
    for(int i=0; i <num; i++){
        printf("enter the value at index %d :",i);
        scanf("%d",&ar[i]);
        
    }
    for (int j = 0;j<num;j++){
        sum += ar[j];
    }    
    
    avr = sum/num;
    printf("The average of the given array is %d",avr);
    return 0;
}
