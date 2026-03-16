#include<stdio.h>
int main(){
    int i,n;
    for(i; ;i++){
        printf("enter the even numbers:");
        scanf("%d",&n);
        printf("%d \n",&i);
        if(n%2!=0){
            printf("incorrect input");
            break;
            
        }
    } 
return 0;    
}