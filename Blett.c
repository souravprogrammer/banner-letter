/*  
This program that creates large characters out of ordinary
screen characters.

    for now it ony print a numeric input.
    it can only print up to 10 digits
    ---------------------------
    version release 1.0.0 
    ---------------------------
    internet <souravsh1234567@gmail.com>

 */
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
/*Blett ( banner letters ) */
/* function to recive string to creat large character */
void banner (char *) ;

int main ()
{
    char num[15] ;
    printf("enter a numer >> "); 
    scanf("%s",num) ; // reaciving a string by user 
    system("clear"); // it will clear the terminal 
    banner(num); 
    /*  it will prit the large charracter of characters out of ordinary screen characters.*/

    return 0 ;
}

void banner (char num [])
{
    int i ,a, raw ;
    // 'i' is a subscrip of string "num".
    // 'a' is a subscrip of 2D arry's zero,one ,two ..... written just below.
    // 'raw' will controll the row of the arry's 
    char zero[7][10] ={" ##### ",
                      " #   # ", 
                      " #   # ", 
                      " #   # ", 
                      " #   # ", 
                      " #   # ", 
                      " ##### "

    },
    one[7][10]={     "   #   ", 
                    "  ##   ", 
                    "   #   ", 
                    "   #   ", 
                    "   #   ", 
                    "   #   ", 
                    " ##### "
    },
    two [7][10] = {  " ##### ", 
                    "     # ", 
                    "     # ", 
                    " ##### ", 
                    " #     ", 
                    " #     ", 
                    " ##### "

    },
    three [7][10] = {  " ##### ", 
                      "     # ", 
                      "     # ", 
                      " ##### ", 
                      "     # ", 
                      "     # ", 
                      " ##### "

    },
    four [7] [10] = {" #   # ", 
                     " #   # ", 
                     " #   # ", 
                     " ##### ", 
                     "     # ", 
                     "     # ", 
                     "     # "

    },
    five [7][10] = {  " ##### ", 
                     " #     ", 
                     " #     ", 
                     " ##### ", 
                     "     # ", 
                     "     # ", 
                     " ##### "
    },
    six [7][10] ={  " ##### ", 
                    " #     ", 
                    " #     ", 
                    " ##### ", 
                    " #   # ", 
                    " #   # ", 
                    " ##### "

    },
    seven[7][10] = {  " ##### ", 
                      "     # ", 
                      "     # ", 
                      "     # ", 
                      "     # ", 
                      "     # ", 
                      "     # "},
    eight[7][10] = {  " ##### ", 
                      " #   # ", 
                      " #   # ", 
                      " ##### ", 
                      " #   # ", 
                      " #   # ", 
                      " ##### "},
    nine[7][10] = {  " ##### ", 
                     " #   # ", 
                     " #   # ", 
                     " ##### ", 
                     "     # ", 
                     "     # ", 
                     "     # "} ,
     subtract[7][10] = {"       ",
                        "       " ,
                        "       ",
                        " ##### ",
                        "       ",
                        "       ",
                        "       "


     } ,  
     equal[7][10] = {"       ",
                     "       ",
                     "       ",
                     " ##### ",
                     " ##### ",
                     "       ",
                     "       "
     } ,
     attherate[7][10] = {" ##### ",
                         "#     #",
                         "# ### #",
                         "# ### #",
                         "# ###  ",
                         "#      ",
                         " ##### "

     } ,
     dot[7][10] = {"       ",
                   "       ",
                   "       ",
                   "       ",
                   "       ",
                   "  ###  ",
                   "  ###  "

     }   ;
    if (strlen (num) < 11 ) 
    /*  
    if the length of the 'num' string is less then 11 then the it will enter in..*/
    {
        raw = 0 ;
        a = 0 ;
        while (raw<7)
        {
            for (i = 0 ; i<strlen(num); i++)
            {
                /* 'i' is controlling the column by using as a subscrip Variable 
                it will print the first first column for every element you entered   */
            if (num[i] == '0')
            printf("%s",zero[a]) ;
            else if (num[i]== '1')
            printf("%s",one[a]);
            else if (num[i]== '2')
            printf("%s",two[a]);
            else if(num[i]== '3')
            printf("%s",three[a]);
            else if (num[i]== '4')
            printf("%s",four[a]);
            else if (num[i]=='5')
            printf("%s",five[a]);
            else if (num[i]=='6')
            printf("%s",six[a]);
            else if (num[i]=='7')
            printf("%s",seven[a]);
            else if (num[i]=='8')
            printf("%s",eight[a]);
            else if (num[i]=='9')
            printf("%s",nine[a]);
            else if (num[i]== '-')
            printf("%s",subtract[a]) ;
            else if (num[i]== '=')
            printf("%s",equal[a]) ;
            else if (num[i]== '@')
            printf("%s",attherate[a]) ;
            else if (num [i]=='.')
            printf("%s",dot[a]) ;
            /*here the loop ends and it enter in the outer loop */
            }
            printf("\n"); // it tell the cursor to get to the new line.
            raw++ ;
            a++ ;

        }
        
    
    }

}
