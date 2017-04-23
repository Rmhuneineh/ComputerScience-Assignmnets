//
//  main.c
//  Exercise 5
//
//  Created by Ragheed Ma'rouf Huneineh on 11/19/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>

int power(int b, int e);
int main() {
    int base, exponent;
    printf("Enter base and exponent(b, e): ");
    scanf("%d, %d", &base, &exponent);
    printf("%d^%d = %d\n", base, exponent, power(base, exponent));
    return 0;
}
int power(int b, int e)
{
    int i, p=1;
    for(i=0; i<e; i++)
    {
        p *= b;
    }
    return p;
}
