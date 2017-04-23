//
//  main.c
//  Exercise 5
//
//  Created by Ragheed Ma'rouf Huneineh on 23/04/2017.
//  Copyright © 2017 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>

int main() {
    int operand1, operand2, result;
    
    printf("Enter two integers: (1st, 2nd): ");
    scanf("%d, %d", &operand1, &operand2);
    
    result = operand1 + operand2;
    
    printf("The sum is = %d\n", result);
    
    return 0;
}
