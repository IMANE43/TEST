#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,res;
    char opera;
    printf("You should select a number!: \n");
    scanf("%d",&a);
    printf("You should select b number!: \n");
    scanf(" %d",&b);
    printf("You should select the operator! \n");
    scanf(" %c",&opera);
    switch(opera){
      case '+': printf("a+b=%d",a+b);
           break;
      case '-':printf("a-b=%d",a-b);
           break;
      case '*':printf("a*b=%d",a*b);
           break;
      case '/': if(b!=0)
        printf("a/b=%d",a/b);
           else
        printf("The operation is impossible with 0\n");
           break;
    default : printf("The operation is incorrect\n");
           break;
      case 'q': printf("The user has left\n");
           break;
    }
    return 0;

}
