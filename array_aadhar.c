//WRITE THE PROGRAM TO INTPUT THE ADDHAR OF 4 PEOPLE WITH THE HELP OF POINTER:
#include<stdio.h>
int main(){
    int aadhar[4];
    int *ptr=&aadhar[0];
    //INPUT OF AADHAR NO:
    for(int i=0;i<4;i++){
        printf("index:%d \n",i);
        scanf("%d",(ptr+i));

    }
     
    //OUTPUT OF THE ARRAY ELEMENT:
for(int i=0;i<4;i++){
    printf("%d index no:%d \n",i,*(ptr+i));
}
return 0;

}