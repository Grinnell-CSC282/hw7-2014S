/* Main

Citation: http://www.programmingsimplified.com/c/source-code/c-anagram-program
Citation: http://www.cs.cf.ac.uk/Dave/C/node35.html*/

/*#include "header.h"*/
#include <stdio.h>

int main()
{
   char a[100], b[100];
   int flag;

   printf("Enter first string\n");
   gets(a);
 
   printf("Enter second string\n");
   gets(b);
 
   flag = isAnagram(a, b);
 
   if (flag == 1)
      printf("\"%s\" and \"%s\" are anagrams.\n", a, b);
   else
      printf("\"%s\" and \"%s\" are not anagrams.\n", a, b);
 
   return 0;
}
