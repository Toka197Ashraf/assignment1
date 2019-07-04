#include <stdio.h>
#include <stdlib.h>
int x,z=0;
void hnum(){
    for(int i=0;i<(x/2);i++){
        z++;
printf("%i \t",z);
}
printf("%i \t",x);
for(int j=((x/2)+1);j<=(x-1);j++){
        z++;
printf("%i \t",z);
}
printf("%i \t",x*2);
}
int main()
{
    printf("Please enter num");
scanf("%i",&x);
hnum();
    return 0;
}
