#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,n;
    printf("please enter num1");
    scanf("%i",&x);
     printf("please enter num2");
    scanf("%i",&y);
    n=x;
    for(x=1;x<=n;x++){
        if(x%y!=0){
            printf("%i \t",x);
        }
    }
    return 0;
}
