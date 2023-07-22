//Mohamed seif
#include <stdio.h>

static int r ,g ,b ,o ,w ,y ;

/**
 * Function name: get_face
 *
 * Description: This function get 2D-array elements and ensure that all inputs are valid
 *
 * Arguments: char 2D-array
 *
 * Return: void (nothing)
*/

void get_face(char face[][3])
{
    for (size_t i = 0 ; i < 3 ;i++)
        for (size_t j = 0 ; j < 3 ;j++)
            {
                D :
                scanf(" %c",&face[i][j]);
                if (face[i][j] != 'r' && face[i][j] != 'g' && face[i][j] != 'b' && face[i][j] != 'y' && face[i][j] != 'o' && face[i][j] != 'w' )
                    {
                        printf("This is invalid color choose from (r,g,b,o,w,y)\n");
                        goto D;
                    }

            }
}

/**
 * Function name:
 *
 * Description: This function find number of colors in each face
 *
 * Arguments: char 2D-array
 *
 * Return: void (nothing)
*/

void FreqColor(char element[][3])
{
        r = 0 ; g = 0 ; b = 0 ;
        y = 0 ; w = 0 ; o = 0 ;

    for (size_t i = 0 ; i < 3 ;i++)
        for (size_t j = 0 ; j < 3 ;j++)
            {
                switch (element[i][j])
                {
                    case 'r':
                        r++;
                        continue;
                    case 'g':
                        g++;
                        continue;
                    case 'b':
                        b++;
                        continue;
                    case 'w':
                        w++;
                        continue;
                    case 'o':
                        o++;
                        continue;
                    case 'y':
                        y++;
                        continue;
                }
            }
}

/**
 * Function name: Print face colors
 *
 * Description: This function prints colors in one face
 *
 * Arguments: Nothing
 *
 * Return: void (nothing)
*/

void print_face()
{
    printf( "r : %d\n"
            "g : %d \n"
            "w : %d \n"
            "o : %d \n"
            "b : %d \n"
            "y : %d \n",r,g,w,o,b,y);
}


/**
 * Function name:Main
 *
 * Description: This is a main function
 *
 * Arguments: void (nothing)
 *
 * Return: Always 0 (if success)
*/

int main(void)
{
    char face1[3][3], face2[3][3], face3[3][3],
         face4[3][3], face5[3][3], face6[3][3];
    int faceNum;

    for (size_t i = 0 ; i <6  ;i++)
        {
            switch (i)
            {
                case 0 :
                    printf("Enter face-1 colours\n");
                    get_face(face1);
                    continue ;

                case 1 :
                    printf("Enter face-2 colours\n");
                    get_face(face2);
                    continue ;
                case 2 :
                    printf("Enter face-3 colours\n");
                    get_face(face3);
                    continue ;
                case 3 :
                    printf("Enter face-4 colours\n");
                    get_face(face4);
                    continue ;
                case 4 :
                    printf("Enter face-5 colours\n");
                    get_face(face5);
                    continue ;
                case 5 :
                    printf("Enter face-6 colours\n");
                    get_face(face6);
                    continue ;

            }


        }
        int x = 1 ;
        char q ;
        while (x)
        {
            printf("\nChoose face number to see it's information");
            printf("(1 , 2 , 3 , 4 , 5 , 6)\n");
            scanf("%d",&faceNum);
            switch (faceNum)
                {
                case 1 :
                    FreqColor(face1);
                    print_face();
                    break;
                case 2 :
                    FreqColor(face2);
                    print_face();
                    break;
                case 3 :
                    FreqColor(face3);
                    print_face();
                    break;
                case 4 :
                    FreqColor(face4);
                    print_face();
                    break;
                case 5 :
                    FreqColor(face5);
                    print_face();
                    break;
                case 6 :
                    FreqColor(face6);
                    print_face();
                    break;
                }
                printf("Would you see another face? (y/n)\n");
                scanf(" %c",&q);
                if (q == 'y' || q == 'Y')
                {
                    x = 1 ;
                }
                else if (q == 'n' || q == 'N')
                    x = 0 ;
                else
                    printf("\nInvalid choise");

        }

    return (0);

}
