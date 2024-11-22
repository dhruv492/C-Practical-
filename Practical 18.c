//In This Practical We are going to take n number of students and arrange in ascending order.

#include <stdio.h>
#include<string.h>

void main()
{
    int n,i,j;
    char a[50][50],*t;

    printf("Enter nummber of students : ");
    scanf("%d",&n);

    printf("Enter name of %d students : \n",n);
    for (i=0;i<n;i++)
    {
        scanf("%s",&a[i]);
    }

    for (i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if (strcmp(a[i],a[j])>0)
            {
               strcpy(t,a[i]);
               strcpy(a[i],a[j]);
               strcpy(a[j],t);
            }
        }
    }
    printf("The names in the acending oder  are : \n");
   for (i=0;i<n;i++)
   {
       printf("%s\n",a[i]);
   }
}

