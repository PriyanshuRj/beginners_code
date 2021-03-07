// Name : Priyanshu Rajput
// Roll. No. : 20BCS014
// Internal practical  
// Question : Write a program in C to count a total number of duplicate elements in an array.
#include<stdio.h>
// starting of main function
int main(){
    int len=0,dupl=0;
    printf("Enter the length of the array :");
    scanf("%d",&len);
    // deffing the array
    int arr[len];
    for(int i=0;i<len;i++){
        printf("Enter the element at the index %d :",i);
        scanf("%d",&arr[i]);
    }
    
    // this loop contains the code to calculate the number of duplicate eliments in an arry
    for(int i = 0 ; i < len ; i++){
        for(int j = i +1 ; j < len ; j++){
            if(arr[i] == arr[j]){
                dupl ++;
                break;
            }
        }
    }
    
    printf("The number of duplicate elements in the array is : %d",dupl);
    

}
