// Generating array of random numbers
#include<stdlib.h>
int main() {
    int num;
    printf("Enter the length of the array :");
    scanf("%d",&num);

    int ar[num];
    for (int i = 0; i < num ; i++)
    {
        ar[i] = rand() % 100;
    }
    printf("The array genrated by random function under 100 is given bellow :\n");
    for (int i = 0; i < num; i++)
    {
        printf("%d ", ar[i]);

    }
    return 0;




}
