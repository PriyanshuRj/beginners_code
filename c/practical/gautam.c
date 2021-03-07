#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i=1,f=1;

     
    printf("\n Enter The Number:");
    scanf("%d",&n);
     
    //DO WHILE LOOP TO CALCULATE FACTORIAL OF A NUMBER
    //STARTING OF LOOP
    do{
        f=f*i;
        i++;
    }while(i<=n); //END OF LOOP
    // PRINTING THE VALUE
    printf("\n The Factorial of %d is %d",n,f);
    getch(); // USED GETCH TO SEE THE OUTPUT IN TERMINAL
    return 0;
}