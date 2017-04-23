//
//  main.c
//  Exercise 6
//
//  Created by Ragheed Ma'rouf Huneineh on 10/28/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>

int main() {
    int a, b, sum; double average;
    printf("Enter two integers as follow (1st, 2nd): ");
    scanf("%d, %d", &a, &b);
    sum = a + b;
    average = (double) sum/2;
    printf("The average of the two numbers you entered = %g\n", average);
    return 0;
}
