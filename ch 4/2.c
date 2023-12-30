#include <stdio.h>
int main() {
    char letter;
    scanf("%c",&letter);
    if(letter >= 65 && letter <=90){
        printf("Capital letter: %c", letter);
    }
    else if(letter >= 97 && letter <= 122){
        printf("Small letter: %c", letter);   
    }
    else if(letter >= 48 && letter <= 57){
        printf("numbers: %c", letter);   
    }
    else if(letter >= 0 && letter <= 47 || letter >= 58 && letter <= 64 || letter >= 91 && letter <= 96 || letter >= 123 && letter <= 127){
        printf("symbols: %c", letter);   
    }
    return 0;
}