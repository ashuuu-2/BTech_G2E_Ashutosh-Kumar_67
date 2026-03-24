//WAP TO COUnT EVEN ODDD NUMNER IN THE ARRAY
#include<stdio.h>
int main(){
    int a[4];
    int i,j,count=0,odd=0;
    printf("enter trhe element of the array");
    for(int i=0;i<4;i++){
        scanf("%d",&a[i]);}
    for(int i=0;i<4;i++){
        if(a[i]%2==0){
            count=count+1;


            
        }
    }
    for(int i=0;i<4;i++){
        if(a[i]%2!=0){
         
            odd=odd+1;
        }}
       

    printf("the even nos are:%d \n",count);
    printf("no of odd numbers are:%d ",odd);
    return 0;

}