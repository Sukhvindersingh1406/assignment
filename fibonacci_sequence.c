//fibonacci sequence
#include<stdio.h>
int main()
{
    int num1=0,num2=1,i,n;//n is for no. of iterations
    printf("Enter the number of iterations \n");
    scanf("%d",&n);
   

    for(i=0;i<=n;i++)
    {
        
        printf(" %d\n",num1);
        int sum=num1+num2;//sum of 0 + 1
        num1=num2;//assigning num2 value(1) to num1 value(1)
        num2=sum;//and sum value (0+1) to num2 
        
    }
    
    return 0;
}