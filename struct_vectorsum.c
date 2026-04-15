//WAP TO GET THE VECTOR SUM OF TWO VECTORS 
#include<stdio.h>
struct vector{
    int x;
    int y;
};
void calc(struct vector v1,struct vector v2,struct vector *sum);
int main(){
    struct vector v1={5,6};
    struct vector v2={11,45};
    struct vector sum={0};
    calc(v1,v2,&sum);
    return 0;
}
void calc(struct vector v1,struct vector v2,struct vector *sum){
        sum->x=v1.x+v2.x;
        sum->y=v1.y+v2.y;
        printf("the sum of x component is:%d\n",sum->x);
        printf("the sum of y part of vector is:%d",sum->y);
        
    }