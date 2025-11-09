#include<stdio.h>

int amt;
int num[99];
int total=0;
float average;

int main(){

    printf("PLease enter the amount of numbers you want to give\n");
    scanf("%d",&amt);
    
    printf("please enter the numbers:\n");
    for(int i=0 ; i<amt; ++i){
        printf("Number %d: ",i+1);
        scanf("%d",&num[i]);
        total+=num[i];
    }
    
    average = (float)total / amt;
    printf("The average is: %.2f",average);
    return 0;
}
