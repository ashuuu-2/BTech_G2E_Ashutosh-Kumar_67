#include<stdio.h>
float temp( float c);
int main(){
    float c;
    printf("enter the temp in celcius:\n");
    scanf("%f",&c);
    float ftemp=temp(c);
    printf("temperature in fareheint is:%f \n ",ftemp);
    return 0;

}
float temp(float c){
    float ftemp= (c*9/5)+32;
    return ftemp;
}