//In This Practical We are going to create appropriate nested loops to draw some patterns:

#include <stdio.h>
void main()
{
    int x,i,j,k;
    printf("Enter No.:");
    scanf("%d",&x);

    for(i=1;i<=x;i++)
    {
        for(j=x;j>=i;j--)
        {
            printf(" ");
        }

        int v=65;

        for(k=1;k<=(i*2)-1;k=k+1)
        {
            printf("%c",v);
            v=v+1;
        }
        printf("\n\n");
    }
}

