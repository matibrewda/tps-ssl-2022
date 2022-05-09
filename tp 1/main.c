#include <stdio.h>
#include <ctype.h>

int main(){
    char caracter;

    while ((caracter = getchar()) != EOF)
    {
        if (isupper(caracter))
        {
            putchar(tolower(caracter));
        }
        else if (islower(caracter))
        {
            putchar(toupper(caracter));
        }
        else if (isdigit(caracter))
        {
            
        }
        else 
        {
            putchar(caracter);
        }
        
    }
    return 0;
    
}
