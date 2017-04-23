//
//  main.c
//  Exercise 7
//
//  Created by Ragheed Ma'rouf Huneineh on 10/22/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>

int main() {
    float Vout, temperature;
    printf("Enter value of Vout: ");
    scanf("%f", &Vout);
    if (Vout <0) printf("Invalid!\n");
    else if (Vout>=0 && Vout<15)
    {
        temperature = 20*Vout/15;
        printf("Temperature = %f\n", temperature);
    }
    else if (Vout>=15 && Vout<27)
    {
        temperature = 35*Vout/12 - 23.75;
        printf("Temperature = %f\n", temperature);
    }
    else if (Vout>=27 && Vout<=35)
    {
        temperature = 45*Vout/8 - 96.875;
        printf("Temperature = %f\n", temperature);
    }
    else printf("Value not available!\n");
    return 0;
}
