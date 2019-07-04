#include <stdio.h>
#include <stdlib.h>
 int x,y=1;
void powers(){
    for( int i=x;i>=1;i--){
        y=y*x;
printf("%i \t",y);
    }
}
int main()
{
    printf("Please enter num");
    scanf("%i",&x);
   powers();
    return 0;
}
