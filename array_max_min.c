//WAP TO FIND THE MAXIMUN AND MINIMUM VALUES OF THE ARRAY
#include<stdio.h>
int main(){
    int n;
    printf("enter the number of element in the array u want:");
    scanf("%d",&n);
    int a[n];
   
    for(int i=0;i<n;i++){
        printf("enter %d element:",i+1);
        scanf("%d",&a[i]);
    }
    int min=a[0];
    int max=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }}
        
    printf("max value:%d",max);
    printf("minimum value:%d",min);
    return 0;
        
   
}