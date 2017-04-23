//
//  main.c
//  Exercise 2
//
//  Created by Ragheed Ma'rouf Huneineh on 11/25/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>

#define N 5

void multiplication(double *v, double multiplier);

int main() {
    double vect[N], x;
    int i;
    printf("Enterr %d numbers!\n", N);
    for(i=0; i<N; i++)
    {
        scanf("%lf", &vect[i]);
    }
    printf("Enter multiplier: ");
    scanf("%lf", &x);
    multiplication(vect, x);
    for(i=0; i<N; i++)
    {
        printf("%g ", vect[i]);
    }
    printf("\n");
    return 0;
}

void multiplication(double *v, double multiplier)
{
    int i;
    for(i=0; i<N; i++)
    {
        v[i] *= multiplier;
    }
}
