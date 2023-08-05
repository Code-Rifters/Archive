// Amira Hassan
#include<stdio.h>
#include<string.h>
char *toUpperCase(char words[] , int size)
{
    for(int i=0; i<size; i++){
        if( (words[i] > 96) && (words[i] < 123) ){
                words[i] -= 32;
        }
    }
    return words;
}
int main()
{
    char words[100] , *upper;
    gets(words);
    upper = toUpperCase(words , strlen(words));
    puts(upper);
    return 0;
}
