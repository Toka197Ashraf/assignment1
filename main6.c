#include <stdio.h>
#include <stdlib.h>
int x,y,n;
void divvremain(){

    n=x;
    for(x=1;x<=n;x++){
        if(x%y!=0){
            printf("%i \t",x);

        }
    }
}
int main()
{

    printf("please enter num1");
    scanf("%i",&x);
     printf("please enter num2");
    scanf("%i",&y);
    divvremain();

    return 0;
}
