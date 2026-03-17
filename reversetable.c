//WAP TO PRINT THE REVERSE TABLE OF THE NUMBER 
#include<stdio.h>
int main(){
    int n,i,tab;
    printf("eneter the number of which the reverse table to printed ");
    scanf("%d",&n);
    for(i=10;i>=1;i--){
        tab=n*i;
        printf("%d \n",tab);

    }
    return 0;
    
           
}
