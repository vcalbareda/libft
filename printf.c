#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

/* Function prototype for creating formatted string */

// recives the len, the string passed and more params
int formatStr(int len, const char *formatted_str, ...) {
   /* pointer to the variable arguments list */
   int i = 0;
   int i_char = 0;
   va_list pargs;
   
   /* Initialise pargs to point to the first optional argument */
   va_start(pargs, formatted_str);
   /* n_chars is the final length of the formatted string */
    while (formatted_str != (void *)0 && i < len){
      i_char = formatted_str[i];
      write(1, &i_char, 1);
      i++;
   }
   //int n_chars = vsprintf(dest, formatted_str, pargs);
   
   /* print the result of formatted string */
   //puts(dest);
   va_end(pargs);
   return (0);
}

int main() {
   char f_str[50];
   char name[] = "Johnson";
   int height = 170;
   formatStr(15, "Name: %s Height: %i", name, height);
}