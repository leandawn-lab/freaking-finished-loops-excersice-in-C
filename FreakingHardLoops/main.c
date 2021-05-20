#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void combinations(){
    double arrayX[90][3];

    int index = 0;
    for (int i = 1; i <= 6; i++){
        for(int j = 0; j < 15; j++){
            arrayX[index+j][1] = i;
        }
        index +=15;
    }

    int a = 0;
    while(a < 90){
        double stepUp = 5.5;
        while (stepUp < 13){
            arrayX[a][2] = stepUp;
            stepUp += 0.5;
            a++;
        }

    }
    for (int k = 0; k < 90; k++){
        arrayX[k][0] = 2 + (arrayX[k][1] + (0.5 *arrayX[k][2]));
    }
        printf("i\ty\tx\n");
        for (int i = 0; i < 90; i++){
            printf("%.2f\t%.2f\t%.2f\n", arrayX[i][0], arrayX[i][1], arrayX[i][2]);

    }
//
//
////    printf("%i", arrayi);
}

int main()
{
    combinations();
    return 0;
}
