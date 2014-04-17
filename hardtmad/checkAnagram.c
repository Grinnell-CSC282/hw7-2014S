/*
 * checkAnagram function
 

 // Citation: http://www.programmingsimplified.com/c/source-code/c-anagram-program */

/*#include "header.h"*/
#include <stdio.h>

int isAnagram(char a[], char b[])
{
  printf("Start method\n");
   int first[26] = {0}, second[26] = {0}, c = 0;
 
   while (a[c] != '\0')
   {
      first[a[c]-'a']++;
      c++;
   }
 
   c = 0;
 
   while (b[c] != '\0')
   {
      second[b[c]-'a']++;
      c++;
   }
 
   for (c = 0; c < 26; c++)
   {
      if (first[c] != second[c])
         return 0;
   }
 
   return 1;
}
