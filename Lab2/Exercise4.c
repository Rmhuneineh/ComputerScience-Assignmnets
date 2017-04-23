//
//  main.c
//  Exercise 4
//
//  Created by Ragheed Ma'rouf Huneineh on 10/22/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter 1st integer: ");
    scanf("%d", &a);
    printf("Enter 2nd integer: ");
    scanf("%d", &b);
    printf("Before swapping, 1st integer is %d and 2nd integer is %d", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nAfter swapping, 1st integer is %d and 2nd integer is %d\n", a, b);
    return 0;
}
