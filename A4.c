#include<stdio.h>
int main()
{
    int i, width=841, height=1189, t;
     for(i=0;i<9;i++)
     {
         printf("\n A%d: %d x %d", i, width, height);
         t = height;
         height = width;
        width = t/2;
     }
     return (0);
}