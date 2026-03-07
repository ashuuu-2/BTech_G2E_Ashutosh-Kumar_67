//WAP TO FIND WHETHER THE CHARACTER ENTERED BY THE USER IS IN UPPERCASE OR NOT:
#include<stdio.h>
int main()
{
    char ch;
    printf("enter the character :");
    scanf("%c",&ch);
    if (ch>='A' && ch<='Z'){
        printf("entered character is in uppercase");
    }else if(ch>='a' && ch<='z'){
        printf("entered character is in lowercase");
    }
    else{
        printf("enetered chracter is not of english ");

    }
    return 0;
}
