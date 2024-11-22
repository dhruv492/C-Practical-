//In this Practical we are going to Write a program to help a teacher to analyse student performance in CCP Subject..

#include<stdio.h>
int total (int b[50],int n)
{
    int i,sum=0;
    printf("Enter CCP marks of students : \n");
    for( i=0;i<n;i++)
    {
        int f=i+1;
        printf("Student %d : ",f);
        scanf("%d",&b[i]);
    }

    for ( i=0;i<n;i++)
    {
        sum += b[i];
    }
    return sum;
}

float average(int c[50],int n)
{
    int i,sum=0;

    for (i=0;i<n;i++)
    {
        sum += c[i];
    }
    return (float)sum/n;
}

int highest (int d[50],int n)
{
    int i,h=d[0];

    for (i=0;i<n;i++)
    {
        if (d[i]>h)
        {
            h = d[i];
        }
    }
    return h;
}

int lowest (int e[50],int n)
{
    int i,l=e[0];

    for (i=0;i<n;i++)
    {
        if (e[i]<l)
        {
            l = e[i];
        }
    }
    return l;
}

int main()
{
    int n,a[50],t,av,h,l;
    printf("Enter number of students : ");
    scanf("%d",&n);

    t = total(a,n);
    printf("Total marks %d\n",t);

    av= average(a,n);
    printf("Average marks %d\n",av);

    h = highest(a,n);
    printf("Highest marks %d\n",h);

    l = lowest(a,n);
    printf("Lowest marks %d\n",l);
}

