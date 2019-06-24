#include<stdio.h>
int myFunc( int count);
int main()
{
    int j;
    j = myFunc(3);
    printf("%d\n",j);
    return 0;
}
int myFunc(int count) 
{
    int x=0;
    for (int i = 0; i < count; i++) 
    {
        x = x + count;
    }
    return x;
}