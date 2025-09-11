#include<stdio.h>
#include<conio.h>
int main()
{
    int num,fdigit=0,ldigit=0;
    
    printf("Enter Num: ");
    scanf("%d",&num);//5278
    
    ldigit = num%10;
   
    while(num>0)
    {
        if(num>9)
        {
            num=num/10;
        }
        else
        {
            fdigit = num;
            num=num/10;
        }
     }
   
   int ans = fdigit+ldigit;
    
    printf("Sum of first and last digit is %d ",ans);
    
    
    


    return 0;
}
