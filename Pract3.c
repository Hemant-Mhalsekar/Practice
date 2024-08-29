# include <stdio.h>
int main()
{
    int x=0, y=0;
    if (x++ == y++)
    printf("%d %d", x--, y--);
    else 
    printf("%d %d", x, y);
     
    return 0;
}