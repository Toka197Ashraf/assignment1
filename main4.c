#include <stdio.h>
#include <stdlib.h>

int main()
{
int x,z=0;
printf("Please enter num");
scanf("%i",&x);
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
    return 0;
}
