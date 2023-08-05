// Amira Hassan
#include<stdio.h>
#include<string.h>
char *alphabetsAndSpaces(char words[] , int size)
{

    for(int i=0; i<size; i++){
        if( (words[i] == ' ') || ((words[i] > 64) && (words[i] < 91)) || ((words[i] > 96) && (words[i] < 123)) ){
                continue;
        }
        else{
            for(int x=i; x<size; x++){
                words[x] = words[x+1];
            }
                i--;
                size--;
        }
    }
    return words;
}
int main()
{
    char words[100] , *alphaAndSp;
    gets(words);
    alphaAndSp = alphabetsAndSpaces(words , strlen(words));
    puts(alphaAndSp);
    return 0;
}
