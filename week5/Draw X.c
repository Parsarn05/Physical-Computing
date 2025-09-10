#include <stdio.h>

int main()
{
    int line;
    scanf("%d", &line);
    for (int i=0;i<line/2;i++)//Top
    {
        for (int x=0;x<line;x++)
        {
            if (x==i||x==line-i-1)
            {
                printf("-");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }
    for (int j=line/2;j>=0;j--)//buttom
    {
        for (int k=0;k<line;k++)
        {
            if (j==k||k==line-j-1)
            {
                printf("-");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }

    return 0;
}