#include<stdio.h>
#include<string.h>
struct student{
    int roll;
    int admno;
    float percentage;
    char name[50];
};
int main(){
    struct student s1;
    s1.roll=1;
    s1.admno=1122;
    strcpy(s1.name,"ashutosh");
    s1.percentage=99.9;


    struct student s2;
    s2.roll=2;
    s2.admno=1123;
    strcpy(s2.name,"mahii");
    s2.percentage=100;

    struct student s3;
    s3.roll=3;
    s3.admno=1124;
    strcpy(s3.name,"ambar");
    s3.percentage=100;

    printf("student:%s \n",s1.name);
    printf("roll no:%d\n",s1.roll);
    printf("admno :%d\n",s1.admno);
    printf("percentage:%f\n",s1.percentage);
    
    printf("student:%s \n",s2.name);
    printf("roll no:%d\n",s2.roll);
    printf("admno :%d\n",s2.admno);
    printf("percentage:%f\n",s2.percentage);

    printf("student:%s \n",s3.name);
    printf("roll no:%d\n",s3.roll);
    printf("admno :%d\n",s3.admno);
    printf("percentage:%f\n",s3.percentage);
    return 0;
    
}