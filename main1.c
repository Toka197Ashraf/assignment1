#include <stdio.h>
#include <stdlib.h>

int main()
{
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
    return 0;
}
