#include<stdio.h>
int main()
{
    int a,n;
    scanf("%d",n);
    double ar[n];
    for(int i=0;i<n;i++){
        scanf("%d", &ar[i]);


    }
    double ar2[n];
    int x = n-1;
    for(int j =0 ; j<n;j++){
        ar2[j] = ar[x-j];
    }
    for(int k = 0;k<n;k++){
        printf("%d", ar2[k]);
    }
}
