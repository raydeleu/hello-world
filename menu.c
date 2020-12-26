/*********************************************************/
/*                                                      */
/* MENU : program which prints out a menu               */
/*                                                      */
/*********************************************************/
#include <stdio.h>
char *menutext(int n);

int main ()
{ int str_number;


    for (str_number = 0; str_number < 13; str_number++)
    {
        printf ("%s",menutext(str_number));
    }  
    return 0;
}

/*********************************************************/

char *menutext(n)
/* return n-th string ptr */
    int n;
{
static char *t[] ={"-------------------------------------- \n",
" |++ MENU ++|\n",
" |~~~~~~~~~~~~|\n",
" |(1) Create Flightplan|\n",
" |(2) List current Flightplans|\n",
" |(3) Adapt Flightplan |\n",
" |(4) Some other function|\n",
" |(q) Quit|\n",
" ||\n",
" ||\n",
" |Please Enter Choice|\n",
" ||\n",
"-------------------------------------- \n"};
return (t[n]);
}
