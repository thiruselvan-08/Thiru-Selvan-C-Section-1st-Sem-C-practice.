#include<stdio.h>
int main()
{
    char ch;

    printf("Enter a character:");
    scanf("%c",&ch);

    switch(ch)
    {
        case'T':printf("trinity");break;
        case'H':printf("honest");break;
        case'I':printf("introvert");break;
        case'R':printf("rage");break;
        case'U':printf("unique");break;
        case'S':printf("sane");break;
        case'E':printf("erupt");break;
        case'L':printf("luck");break;
        case'V':printf("victory");break;
        case'A':printf("aura");break;
        case'N':printf("naan");break;
        default:
            {   printf("not thiru");
            } 
    }
    return 0;
}

