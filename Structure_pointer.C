#include<stdio.h>
struct student {
    int roll;
    int score;
};
void studentinfo(struct student s1);
int main(){
    struct student s1={1,92};
    struct student *ptr=&s1;
    printf("roll no of the studeent:%d\n",(*ptr).roll);
    struct student s2={2,100};
    struct student *pt=&s2;
    printf("roll no of the student :%d\n",pt->roll);
    struct student s3={3,101};
    struct student *st3=&s3;
    printf("third student score is :%d\n",st3->score);

    //CALLING BY THE FUNCTION
    studentinfo(s2);
    studentinfo(s1);

    return 0;
 
    
}
void studentinfo(struct student s1){
    printf("printing the detail of the student's\n");
    printf("student roll no:%d\n",s1.roll);
    printf("student score:%d\n",s1.score);

}

    
    