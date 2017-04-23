//
//  main.c
//  Exercise 7
//
//  Created by Ragheed Ma'rouf Huneineh on 11/19/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, i, x;
    printf("Enter [a, b] and step c(a, b, c): ");
    scanf("%lf, %lf, %lf", &a, &b, &c);
    x = a;
    i=0;
    while(x < b)
    {
        x = a + i*c;
        printf("%lf\n", 360*asin(x)/M_PI); // Multiply by 360 and divide by pi to change from radians to degrees!
        i++;
    }
    return 0;
}
