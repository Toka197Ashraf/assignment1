#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y=1;
    printf("Please enter num");
    scanf("%i",&x);
    for( int i=x;i>=1;i--){
        y=y*x;
 printf("%i \t",y);
    }
    return 0;
}
