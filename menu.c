#include<stdio.h>
#include<stdlib.h>
int main()
{
    unsigned long int fact=1;
    int num,i,choice;
    while(1)
    {
        printf("\n\n1. Factorial\n2. Prime or not\n3. odd or even\n4. exit\n");
        printf("\nyour choice= ");
        scanf("%d", &choice);
        
        switch(choice)
        {
            case 1:
            printf("enter any number to find its factorial= ");
            scanf("%d",&num);
            for(i=1;i<=num;i++)
            fact=fact*i;
            printf("the factorial of %d is %lu", num,fact);
            break;
            
            case 2:
            printf("enter the number to check prime or not= ");
            scanf("%d", &num);
            if(num==1)
            printf("1 is niether prime nor composite");
            break;
            for(i=2;i<=num - 1;i++)
            {
                if(num%i==0)
                {
                    printf("not prime");
                    break;
                }
                if(num==i)
                printf("prime");
                break;
            }
            
            case 3:
            printf("enter the number to check even/odd= ");
            scanf("%d", &num);
            if(num%2==0)
            printf("even");
            else
            printf("odd");
            break;
            
            case 4:
            exit (0);
           
            
        }
    }
return 0;       
}
