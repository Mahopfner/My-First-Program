/************************************************
*  THIS IS MY FIRST CODE EVER!!!                *
*                    O                          *
*                   /|\                         *
*                    |                          *
*                   / \                         *
*                                               *
************************************************/
#include <stdio.h> /*This statement signals C that we are going to use the standard I/O package.
This is a standard Data Declaration (print f is what comes from this package). The #word is a preprocessor command.*/

int main() /*in is a reserved word. "int main" opens up your code/entry point. Code starts running from main down.
Int is the C variable type that tells C the variable has an integer value.*/
 { /*These braces open and close a "scope" for you. Scopes can have sub-scopes. These are the bounds of the function. Things in a
stay in a scope.*/


    int term = 3 * 5; //this is a variable assignment, the "=" sign is used for assignment in the C operator. "term" is the variable.
    int term_2 = 2 * term;
    int term_3 = 3 * term;
    float pi = 3.141592; /*float is used for values that are not integers. C identifies these by the decimal point. This C compiler
goes to six digits after the decimal point, so I expressed six digits of pi to exemplify this.*/

    printf("twice %d is %d\n", term, term_2);       //%d is the integer conversion specification. when printf encounters %d, it prints
    printf("thrice %d is %d\n", term, term_3);      //the value of the next expression in the following format string. Parameter list.
    printf("the first 6 digits of pi include %f\n", pi); //float variables use %f instead of %d.
    system("pause"); // Waits for the user to press a key to continue.

    print_little_guys();

    return (0); // 0 means no errors, 1 or higher means error, the higher the number, the more serious the error
}

void print_little_guys() /*Void name_here is a function outside of your main code that I have used here to make my main code more readable. */
{
    print_guy_trio();
    // print_tall_guy();
    //print_short_guy();
    // print_tall_guy();

    printf("Cordially, the Little Guy Committee (LGC).\n"); //printf is an executable statement instructing C to print the message "whatever you type"
    //printf(" O\n/|\\\n |\n/ \\\n");
    //printf(" O"    "\n");                          // /n indicates end of line!
    //printf("/|\\"  "\n");
    //printf(" |"    "\n");                          //two different ways to draw a little stick man
    //printf("/ \\"  "\n");
}

void print_tall_guy()
{
    printf(" O"    "\n");
    printf("/|\\"  "\n");
    printf(" |"    "\n");
    printf("/ \\"  "\n");
}
void print_short_guy()
{
    printf(" O"    "\n");
    printf("/|\\"  "\n");
    printf("/ \\"  "\n");
}
void print_guy_trio ()
{
    printf(" O       O" "\n");
    printf("/|\\  O  /|\\" "\n");
    printf(" |  /|\\  | "  "\n");
    printf("/ \\ / \\ / \\" "\n");
}
