//In This Practical We are going to compute the total budget allocated for all even-day events.

#include <stdio.h>
void main()
{
    int n,a,b;
    printf("Enter total number of days:");
    scanf("%d",&n);
    int sum = 0;
    for (int i;i<=n;i++)
    {
        if (i%2==0)
        {
            a = sum + 200;
        }
        else
          sum = a;
    }
       printf("%d",sum);
}
