//
//  main.c
//  Exercise 6
//
//  Created by Ragheed Ma'rouf Huneineh on 23/04/2017.
//  Copyright © 2017 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>

int main() {
    int a, b, x;
    
    printf("a*x + b = 0\n");
    
    printf("a: ");
    scanf("%d", &a);
    
    printf("b: ");
    scanf("%d", &b);
    
    if(a==0){
        if(b==0){
            printf("Infinite number of solutions!\n");
        } else {
            printf("It's impossible to find a solution\n");
        }
    } else {
        x = -b/a;
        printf("The value of x = %d\n", x);
    }
    
    return 0;
}
