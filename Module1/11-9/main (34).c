#include<stdio.h>
#include<conio.h>
int main()
{
    int num,sum=0;
    
    printf("Enter Num: ");
    scanf("%d",&num);//1234
    
    while(num>0)
    {
        int rem = num % 10;
        sum+=rem;//sum=sum+rem
        num=num/10; 
        
    }
    printf("Sum of all digits : %d",sum);

    


    return 0;
}
