//WAP TO TAKE TWO MATRIX FROM THE USER AND ADD THEM 
#include<stdio.h>
int main(){
    int a[3][3],b[3][3],c[3][3];
    printf("enter the matrix elements:");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enterfor the seconnd matrix elements:");
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&b[i][j]);}
    }
    //ADDITION OF THE MATRIX
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            c[i][j]=a[i][j]+b[i][j];

        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf(" %d",c[i][j]);

        }printf("\n");
    }
    return 0;
}