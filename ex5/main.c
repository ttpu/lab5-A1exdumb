
#include <stdio.h>

int main(void)
{
    char small_letter, capital_letter;
    for (int i = 0; i < 26; i++) {
        small_letter = 'a' + i; 
        capital_letter = 'A' + i; 

        printf("%c\t\t%d\t\t%c\t\t%d\n", small_letter, small_letter, capital_letter, capital_letter);
    }
}