#include<stdio.h>
int main()
{
    int n , i,isprime=1;
    printf("enter the number :");
    scanf("%d",&n);

    for(i=2;i<n;i++){
        if(n%i==0){
            isprime=0;
            break;
        }
    }
if(isprime){
    printf("number is prime");

}
else{
    printf("number is not prime");
    
}
}