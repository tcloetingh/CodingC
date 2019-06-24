/* #include <stdio.h>
#include <string.h>

int main () {
   char str1[15];
   char str2[15];
   int ret;


   strcpy(str1, "abcdef");
   strcpy(str2, "ABCDEF");

   ret = strcmp(str1, str2);

   if(ret < 0) {
      printf("str1 is less than str2\n");
   } else if(ret > 0) {
      printf("str2 is less than str1\n");
   } else {
      printf("str1 is equal to str2\n");
   }
   
   return(0);
} */


// C program to illustrate 
// strcmp() function 
#include<stdio.h> 
#include<string.h> 
  
int main() 
{  
      
    char leftStr[] = "g f g"; 
    char rightStr[] = "g w g"; 
      
    // Using strcmp() 
    int res = strcmp(leftStr, rightStr); 
      
    if (res==0) 
        printf("Strings are equal"); 
    else 
        printf("Strings are unequal"); 
      
    printf("\nValue returned by strcmp() is:  %d\n" , res); 
    return 0; 
} 