#include<stdio.h>
#define MAX 10
int main()
{
   int binary[MAX],i,top=-1,decimal;
   printf("Enter a decimal value:");
   scanf("%d",&decimal);
   if(decimal==0)
   {
    printf("Binary No. : 0\n");
    return 0;
   }
   while(decimal>0)
{
    top++;
    binary[top]=decimal%2;
    decimal=decimal/2;
}
printf("Binary No. : ");
for(i=top;i>=0;i--)
{
    printf("%d",binary[i]);
}
printf("\n");
return 0;
}

