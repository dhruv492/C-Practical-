//In This Practical We are going to Create array.

#include <stdio.h>

void main()
{
    int n,p=0,ne=0,o=0,e=0;
    printf("Enter a number:");
    scanf("%d",&n);

    int a[n];

    for (int i =0;i<n;i++)
    {
        scanf("%d",&a[i]);

        if (a[i]>0)
        {
            p++;
        }
        else if (a[i]<0)
        {
            ne++;
        }
        if (a[i]%2==0)
            e++;
        else
            o++;
    }
    printf("There are %d positive numbers \n",p);
    printf("There are %d negative numbers \n",ne);
    printf("There are %d even numbers \n",e);
    printf("There are %d odd numbers \n",o);
}



