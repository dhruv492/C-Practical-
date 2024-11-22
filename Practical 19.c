//In This Practical We are going to Develop a C program to manage a simple text-based note-taking application.

#include <stdio.h>
void main()
{
    char str1[40],str2[40],str3[40],str4[40],k;
    int i,j,l=0,l1=0,f=0;
    printf("Enter First String:");
    gets(str1);
    printf("\nEnter Second String:");
    gets(str2);

    for(i=0;str1[i]!='\0';i++)
    {
        l++;
    }

     for(i=0;str2[i]!='\0';i++)
    {
        l1++;
    }
    printf("\nLength of String 1 : %d",l);
    printf("\nLength of String 2 : %d\n",l1);

   for(i=0;str1[i]!='\0' || str2[i]!='\0';i++)
    {
        if(str1[i]!=str2[i] || str1[i]!='\0' || str2[i]!='\0')
        {
            f=1;
            break;
        }
    }
    if(f==0)
    {
        printf("\n-->BOTH ARE SAME<--\n");
    }
    else
    {
        printf("\n-->BOTH STRINGS ARE NOT SAME<--\n");
    }

    for(i=0;str1[i]!='\0';i++)
    {
        str3[i]=str1[i];
    }
    for(i=0;str2[i]!='\0';i++)
    {
        str4[i]=str2[i];
    }
    printf("\nCOPY STRING 1 :");
    puts(str3);
    printf("COPY STRING 2 :");
    puts(str4);
    // reversing string 1
    for(i=0,j=l-1;j>=i;i++,j--){
        k=str3[i];
        str3[i]=str3[j];
        str3[j]=k;
    }
    // reversing string 2
     for(i=0,j=l1-1;j>=i;i++,j--){
        k=str4[i];
        str4[i]=str4[j];
        str4[j]=k;
    }
    printf("\nREVERSE STRING 1 : ");
    puts(str3);
    printf("REVERSE STRING 2 : ");
    puts(str4);
}

