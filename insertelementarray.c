#include <stdio.h>
 
int main()
{
  int Array[10], Position, i, numEl, newElement;
 
  printf("\nPlease Enter Number of elements in an array\n");
  scanf("%d", &numEl);
 
  printf("\nPlease Enter %d elements of an Array \n", numEl);
  for (i = 0; i < numEl; i++)
   {
     scanf("%d", &Array[i]);
   }     
   // filling up array with elements ^
   // enter new element and position
 
  printf("\nPlease Enter the location of a Element you want to insert\n");
  scanf("%d", &Position);
 
  printf("\nPlease Enter the value of an Array Element to insert\n");
  scanf("%d", &newElement);
  
  //// this is the magic below. 
 
  for (i = numEl - 1; i >= Position - 1; i--)
   {
	     Array[i+1] = Array[i];
   }
  Array[Position-1] = newElement;
  
  ///  ^^^^^^^^^
  
 printf("\n Final Array after Inserting an element is:\n");
 for (i = 0; i <= numEl; i++)
  {
 	printf("%d\n", Array[i]);
  }     
 
 return 0;
}