//
//  main.c
//  Exercise 3
//
//  Created by Ragheed Ma'rouf Huneineh on 10/22/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>

int main() {
    float l, w;
    printf("Enter length: ");
    scanf("%f", &l);
    printf("Enter width: ");
    scanf("%f", &w);
    printf("The perimeter = %f\nThe are = %f\n", 2*(l+w), l*w);
    return 0;
}
