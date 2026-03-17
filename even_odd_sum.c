//WAP TO FIND THE SUM OF EVEN NUMBER AND ODD NUMBERS UPTO N
#include<stdio.h>
int main()
{
    int n,osum=0,esum=0;
    printf("enter thew number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i=i+1){
        if(i%2==0){
            esum=esum+i;
        }
        else{
            osum=osum+i;
        }

        }
        printf("the sum of odd2 sum is  :%d \n",osum);
        printf("the sum of even sum is  :%d \n",esum);

        return 0;

        }

     
    
