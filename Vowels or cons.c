//Created by Ruban on 12.10.2022
#include <stdio.h>
#include <conio.h>
void main()
{
    char v;
    printf("Enter an alphabet: ");
    scanf("%c",&v);
    if (v== 'a' || v=='e' || v=='i' ||v=='o' ||v=='u' || v=='A'|| v=='E'||v=='I'|| v=='O'|| v=='U') {
        printf("%c is a Vowel", v);
    }
    else {
        printf("%c is a consonant", v);
    }
    getch();
}
