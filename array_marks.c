//WRITE THE PROGRAM TO ENTER THE MARKS OF THE STUDENT OF THE THREE SUBJECT
#include<stdio.h>
int main(){
    
    int marks[3];
    printf("enter the marks of maths:\n");
    scanf("%d",&marks[0]);
    printf("enter the marks of physics:\n");
    scanf("%d",&marks[1]);
    printf("enter the marks of chemistry:\n");
    scanf("%d",&marks[2]);
    printf("marks of maths:%d \nmarks of physics:%d \nmarks of chemisty:%d :",&marks[0],marks[1],marks[2]);
    return 0;
    
    

}