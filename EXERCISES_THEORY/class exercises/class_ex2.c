//determine if a character is uppercase,lowercase,digit,or spl characters
#include <stdio.h>
int main()
{
    char character;
    printf("Enter a:"); scanf("%c",&character);
    if (character>='a'&&character<='z') printf("lowercase");
    else if (character>='A' && character<='Z') printf("Uppercase");
    else if (character>='0' && character<='9') printf("Digit");
    else printf("Special character");
}
