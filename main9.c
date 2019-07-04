#include <stdio.h>
#include <stdlib.h>
int up;
int x,y,n;
 int x,y=1;
 int x,z=0;
void robot(){
     int userpick;
    printf("please enter num of userpick");
    scanf("%i",&userpick);
    if(userpick==1){
        printf("Machine is ON");
    }
     else if(userpick==2){
        printf("Machine is OFF");
    }
     else if(userpick==3){
        printf("Machine is Working");
    }
     else if(userpick==4){
        printf("Robot is Moving");
    }
     else if(userpick==5){
        printf("Robot Stopped");
    }
     else if(userpick==6){
        printf("Connection Error");
    }
     else if(userpick==7){
        printf("Connection Returned");
    }
     else if(userpick==8){
        printf("Power Low");
    }
     else if(userpick==9){
        printf("Power Charging");
    }
}
void divvremain(){
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
}
void power(){
    printf("Please enter num");
    scanf("%i",&x);
    for( int i=x;i>=1;i--){
        y=y*x;
 printf("%i \t",y);
    }
}
void hnum(){
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
}
int main()
{
  printf("please enter up num");
    scanf("%i",&up);
if(up==1){
    robot();
}
if(up==2){
    divvremain();
}
if(up==3){
    power();
}
if(up==4){
  hnum();
}
    return 0;
}
