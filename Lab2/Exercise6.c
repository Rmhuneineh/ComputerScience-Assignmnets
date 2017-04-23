//
//  main.c
//  Exercise 6
//
//  Created by Ragheed Ma'rouf Huneineh on 23/04/2017.
//  Copyright © 2017 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>

int main() {
    int number;
    
    printf("Enter an integer: ");
    scanf("%d", &number);
    
    if(number<0){
        printf("The absolute value of %d is %d\n", number, -number);
    } else {
        printf("The absolute value of %d is %d\n", number, number);
    }
    return 0;
}
