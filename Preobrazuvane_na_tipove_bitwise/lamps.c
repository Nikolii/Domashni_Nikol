#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

    if(argc < 2 || atoi(argv[1]) > 8 || atoi(argv[1]) < 1) printf("\nError!");

    else{
        
        printf("\nSwitch lights - type 1 \nPrint states - type 2 \nExit the programme - 3");
        unsigned char lights = 1;
        int isLightOn = (lights & (lights << (atoi(argv[1]) - 1))) == lights << (atoi(argv[1]) - 1);
        
        while(1){
            int option;
            printf("\nEnter your option here: ");
            scanf("%d", &option);

            if(option == 1){
                if(isLightOn == 1){
                    lights = lights & (~(lights << (atoi(argv[1]) - 1)));
                    printf("\nThe lamp turned off!");
                }
                else{
                    lights = lights | (lights << (atoi(argv[1]) - 1));
                    printf("\nThe lamp turned on!");
                }
            }

            else if(option == 2){
                int n;
                for (int i = 7; i >= 0; i--) {
                    n = ((lights >> i) & 1);
                    if(n == 1) printf("\nThe lights in room %d is on!", i + 1);
                }
            }

            else break;
        }
    }
    return 0;
}

