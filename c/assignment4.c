// This is quesion no.1 of assignment
// submited by Priyanshu Rajput roll no. 20bcs014 
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the length of array :");
    scanf("%d", &num);
    int ar[num];
    int arr2[num];
    for (int i = 0; i < num; i++)
    {
        printf("enter the value at index %d :",i);
        scanf("%d", &ar[i]);
        arr2[i]= ar[i];
    }
    printf("The copied array is as given below :--\n");
      for (int i = 0; i < num; i++)
    {
        printf("%d ", arr2[i]);
    }
    return 0;
}