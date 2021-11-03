// code for calculating maximum marks in a subject
#include<stdio.h>
int main(){
    int marks[5][3],i,j,max_m,maxar[3];
    for(i=0 ; i<5;i++){
        printf("enter the marks obtained by student %d",i);
        for(j=0;j<3;j++){
            printf("marks[%d][%d]= ",i,j);
            scanf("%d",&marks[i][j]);
        }
    }
    for(i= 0 ;i < 3 ;i++){
        max_m = marks[0][i];
        for(j = 0 ; j <5;j++){
            if (marks[j][i]> max_m){
                max_m = marks[j][i];
            }        
        }
        maxar[i]= max_m;
    }
    for(i = 0 ;i >3 ;i++){
        printf("the maximum marks in subject %d %d",i,maxar[i]);
    }
    return 0;
}
