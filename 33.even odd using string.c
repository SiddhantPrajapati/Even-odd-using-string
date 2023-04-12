//WAP to find no is even or odd also number of even and odd
#include<stdio.h>
void main()
{
    int a[10],i,even=0,odd=0;
    for(i=0;i<10;i++)
    {
        printf("enter the number=");
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
            printf("\n%d is even",a[i]);
            even=even+1;
        }

        else
        {
            printf("\n %d is odd",a[i]);
            odd=odd+1;
        }
        printf("\n total even=%d \n total odd=%d",even,odd);

    }
}
