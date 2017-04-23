//
//  main.c
//  Exercise 1
//
//  Created by Ragheed Ma'rouf Huneineh on 11/25/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>

#define N 5

double power(double base, double exponent);

int main() {
    double base[N], exponent[N], result[N];
    int i;
    printf("Enter %d bases!\n", N);
    for(i=0; i<N; i++)
    {
        scanf("%lf", &base[i]);
    }
    printf("Enter %d exponents!\n", N);
    for(i=0; i<N; i++)
    {
        scanf("%lf", &exponent[i]);
    }
    for(i=0; i<N; i++)
    {
        result[i] = power(base[i], exponent[i]);
    }
    for(i=0; i<N; i++)
    {
        printf("%3g ", result[i]);
    }
    printf("\n");
    return 0;
}

double power(double base, double exponent)
{
    double p = 1;
    for(int i = 0; i<exponent; i++)
    {
        p *= base;
    }
    return p;
}
