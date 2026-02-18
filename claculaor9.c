#include <stdio.h>
#include<math.h>
int main() 
{
    int a,b;
    char op;
    printf("enter two operands");
    scanf("%d%d",&a,&b);
    printf("enter the operator(+,-,*,/)");
    scanf(" %c",&op);
    switch(op)
    {
        case '+':
        printf("adiition=%d",a+b);
        break;
        case'-':
        printf("subtraction=%d",a-b);
        break ;
        case'*':
        printf("multiplication=/d",a*b);
        break;
        case'/':
        if (b<=0)
        printf("division cannot be performed");
        else
        printf("division=%f",(float)a/b);
        
        default:
        printf("error");
    }
    return 0;
}

        
    
