#include<stdio.h>
int sump(int x , int y);
int main(){
    int x,y,sum;
    printf("enter the numbers of what u want the sum");
    scanf("%d %d",&x,&y);
    int s= sump(x,y);
    printf("sum is :%d",s);
    return 0;
}
int sump(int x, int y){
    
    
    return x+y;
    }