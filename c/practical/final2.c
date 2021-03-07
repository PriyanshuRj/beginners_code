// Name : Priyanshu Rajput
// Roll. No. : 20BCS014
// External practical  
// Question : Write a program to sum the series -----1/1!+4/2!+27/3!+----------.

#include<stdio.h>
long exponential(int i);

long factorial(int n);
int main(){
    int N;
    float sum = 0.0;
    
    
    //inpot for the value of N
    printf("Enter the value of N : ");
    scanf("%d",&N);
    
    for(int i = 1;i<=N;i++ ){
        double  expo ;
        expo = exponential(i);
        double  fact = factorial(i);
        
        sum = sum + (expo/fact);
        
    


        
    }
    printf("%f \n",sum);

}
// function to calculate the exponential value for the series
long exponential(int i){
    double exp=1;

    for(int j = 0;j<i ;j++){
        exp = exp*i;
    }
    return exp;

}
// function to calculate gactorial
long factorial(int n)  
{  
  if (n == 0)  
    return 1;  
  else  
    return(n * factorial(n-1));  
}  
// End of program