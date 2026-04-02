//CREATE A 2D ARRAY ,STORYING THE TABLE OF 2 AND 3
#include<stdio.h>
void table(int tab[][10],int n,int m,int number);
int main(){
    int tab[2][10];
    table(tab,0,10,2);
    printf("\n");
    table(tab,1,10,3);
    return 0;
}
void table(int tab[][10],int n,int m,int number){
    for(int j=0; j<m ;j++){
        printf("%d\t",tab[n][j]=number*(j+1));
    }
}