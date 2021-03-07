// Name : Priyanshu Rajput
// Roll. No. : 20BCS014
// External practical  
// Question : Write a program to sum the series -----1/1!+4/2!+27/3!+----------.


#include<stdio.h>
    
/*function to find factorial of the number*/
long factorial(int num)
{
	int i;
	/*always assign 1, if variable multiplies with values*/
	long fact=1;
	
	/*multiply num*num-1*num-2*..1*/
	for(i=num; i>=1; i--)
		fact= fact*i;
	
	/*return factorial*/
	return fact;
}

int main()
{
	int i,N;
	float sum;
	
	/*read value of N*/
	printf("Enter the value of N: ");
	scanf("%d",&N);
	
	/*set sum by 0*/
	sum=0.0;
	
	/*calculate sum of the series*/
	for(i=1;i<=N;i++){
        int expo = i;
        for(int j = 0;j<i;j++){
            expo *= expo;
        }
		sum = sum + ( (float)(expo) / (float)(factorial(i)) );

    }

	
	/*print the sum*/
	
	printf("Sum of the series is: %f\n",sum);
	
	return 0;
}