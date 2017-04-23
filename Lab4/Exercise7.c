//
//  main.c
//  Exercise 7
//
//  Created by Ragheed Ma'rouf Huneineh on 11/5/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main() {
    int value=1;
    unsigned int val = 1;
    while(value>=0)
    {
        value++;
    }
    while (val > 0)
    {
        val++;
    }
    printf("The maximum number expressed by int = %d\nThe maximum number expressed by unsigned int = %d\n", value-1, val-1);
    return 0;
}
