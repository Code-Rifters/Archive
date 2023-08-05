// Amira Hassan
#include<stdio.h>
#include<string.h>
int numberOfWords(char words[] , int size)
{
    int count = 0;
    for(int i=0; i<size; i++){
        if( (words[i] == ' ' ) || (words[i] == ', ' )|| (words[i] == '!' )|| (words[i] == '.' )){
            count++;
        }
    }
    return count;
}
int main()
{
    char words[200];
    gets(words);
    int count = numberOfWords(words , strlen(words));
    printf("%d" , count);
    return 0;
}
