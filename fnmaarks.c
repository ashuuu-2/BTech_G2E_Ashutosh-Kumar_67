#include<stdio.h>
float percentage(float x,float y,float z);
int main(){
    float x, y , z;
    printf("enter the marks of maths:\n");
    scanf("%f",&x);
    printf("enter the marks of physics:\n");
    scanf("%f",&y);
    printf("enter the marks of chemistry:\n");
    scanf("%f",&z);
    printf("PERCENTAGE OF THE TREE SUBJECT IS :%f ",percentage(x,y,z));
    return 0;
}
float percentage(float x, float y,float z){
    int t=300;
    float sum=x+y+z; 
    float perc=(sum/t)*100;
    return perc;

}