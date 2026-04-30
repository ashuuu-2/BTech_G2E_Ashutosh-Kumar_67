#include<stdio.h>
#include<string.h>
int main(){
    char adj1[50]="";
    char adj2[50]="";
    char name[50]="";
    char verb[50]="";
    printf("enter the name:\n");
    fgets(name,sizeof(name),stdin);
    name[strlen(name)-1]='\0';
    printf("enter the verb :\n");
    fgets(verb,sizeof(verb),stdin);
    verb[strlen(verb)-1]='\0';
    printf("enter the adj1:\n");
    fgets(adj1,sizeof(adj1),stdin);
    adj1[strlen(adj1)-1]='\0';
    printf("enter the adj2:\n");
    fgets(adj2,sizeof(adj2),stdin);
    adj2[strlen(adj2)-1]='\0';
    printf("%s\n",name);
    printf("%s\n",verb);
    printf("%s\n",adj1);
    printf("%s\n",adj2);
    printf("My name is %s\n",name);
    printf("He is %s %s in his work.\n ",adj1,verb);
    printf("He is %s to his work.",adj2);

    
    
    return 0;
    
}