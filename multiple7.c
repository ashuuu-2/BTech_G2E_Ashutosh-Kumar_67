//WAP FOR TAKING NUMBERS INPUT FROM USER UNTIL USER ENTERS A NUMBER OF MULTIPLE OF 7
#include<stdio.h>
int main()
{
    int n;
    do{
        printf("enter the number :");
        scanf("%d",&n);
        
        if(n%7 ==0){
            break;
        }
        printf("%d \n",n);
    }while(1);
    return 0;
    
}