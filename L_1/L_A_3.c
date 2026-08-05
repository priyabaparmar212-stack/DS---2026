#include<stdio.h>
void main(){
    char ch;

    printf("Enter The Char :");
    scanf("%c",&ch);

    if(ch == 'A'||ch == 'E'||ch == 'I'||ch == 'O'||ch == 'U'||
        ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u')
        {
            printf("vowel");
        }
    else
    {
        printf("Not vowel");
    }
}
//output

// Enter The Char :B
// Not vowel

// Enter The Char :a
// vowel
 
// Enter The Char :A
// vowel