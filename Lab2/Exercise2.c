//
//  main.c
//  Exercise 2
//
//  Created by Ragheed Ma'rouf Huneineh on 10/22/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>

int main() {
    int val1, val2 , aux;
    printf("Enter 1st integer: ");
    scanf("%d", &val1);
    printf("Enter 2nd integer: ");
    scanf("%d", &val2);
    printf("Before swapping, 1st integer = %d and 2nd integer = %d", val1, val2);
    aux = val1;
    val1 = val2;
    val2 = aux;
    printf("\nAfter swapping, 1st integer = %d and 2nd integer = %d\n", val1, val2);
    return 0;
}
