//Norhan_Mohamed's Code

#include <stdio.h>

int main() {
    char cube[6][3][3];
    int i, j, k; 
    char find;

/* j >> for columns
   k >> for rows
   i >> loop iteration 
*/
    for (i = 0; i < 6; i++) {          
        printf("Enter the colors for face %d:\n", i+1);
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {
                scanf(" %c", &cube[i][j][k]);
    }
    }
    }

  printf("What are u searching for?:  \n");
  scanf(" %c",&find);

  for (i = 0; i < 6; i++) {
         int counter=0;
      for (j = 0; j < 3; j++) {
          for (k = 0; k < 3; k++) {
              if(cube[i][j][k] == find){
              counter++;
      }
      }
      }
              printf(" \n %d \t",counter);
      }

return 0;
}
