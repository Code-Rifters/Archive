#include<stdio.h>
int main() {
   char cube[6][9];
   for(int i = 0; i < 6; i++) {
       for(int j = 0; j < 9; j++) {
           scanf(" %c", &cube[i][j]);
       }
   }
   char color;
   scanf(" %c", &color);
   for(int i = 0; i < 6; i++) {
       int count = 0;
       for(int j = 0; j < 9; j++) {
           if(cube[i][j] == color) {
               count++;
           }
       }
       printf("%d %d\n", i+1, count);
   }
   return 0;
}