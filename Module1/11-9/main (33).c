#include<stdio.h>
#include<conio.h>
int main()
{
    int num,max=0;
    
    printf("Enter Num: ");
    scanf("%d",&num);//5879
    
    while(num>0)
    {
        int rem = num % 10;//9//7//8
        if(rem>max)
        {
            max = rem;
        }
        num=num/10; //587//58//5//0
        
    }
    printf("Biggest digit is : %d",max);

    


    return 0;
}
