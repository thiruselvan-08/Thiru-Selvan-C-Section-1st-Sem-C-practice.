#include<stdio.h>
int main()
{
    char ch;

    printf("Enter a character:");
    scanf("%c",&ch);

    switch(ch)
    {
        case'a':printf("It is a vowel");break;
        case'e':printf("It is a vowel");break;
        case'i':printf("It is a vowel");break;
        case'o':printf("It is a vowel");break;
        case'u':printf("It is a vowel");break;
        case'A':printf("It is a vowel");break;
        case'E':printf("It is a vowel");break;
        case'I':printf("It is a vowel");break;
        case'O':printf("It is a vowel");break;
        case'U':printf("It is a vowel");break;
            {
        default:
            if((ch >= 'A' && ch <= 'Z')||(ch >= 'a' && ch <= 'z'))
            {
                printf("It is a consonant");
            }
            else
            {
                printf("It is not an alphabet");
            }
    }

    return 0;
}

