//
//  main.c
//  Exercise 1
//
//  Created by Ragheed Ma'rouf Huneineh on 10/28/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>

int main() {
    int int_1, int_2; float float_1, float_2;
    scanf("%f %f %d %d", &float_1, &float_2, &int_1, &int_2);
    printf("%5d %5d\n %5.2f\n%5.3f", int_1, int_2, float_1, float_2);
    return 0;
}
