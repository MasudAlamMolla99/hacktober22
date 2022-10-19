#include <stdio.h>

int main()
{
    float cp,sp;
    printf("cost price=");
    scanf("%f", &cp);
    printf("selling price=");
    scanf("%f", &sp);
    
    if(sp>cp)
    printf("profit Rs %f", sp-cp);
    {
	if(cp>sp)
    printf("loss Rs %f", cp-sp);
    else
    printf("no profit or loss");
}


    return 0;
}

