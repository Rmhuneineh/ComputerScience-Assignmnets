//
//  main.m
//  Exercise 4
//
//  Created by Ragheed Ma'rouf Huneineh on 10/16/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#import <Foundation/Foundation.h>

int main() {
        // insert code here...
        int x, divisors = 0, counter = 2;
        printf("Enter an integer: ");
        scanf("%d", &x);
        while (divisors == 0 && counter<x)
        {
            if (x%counter == 0) divisors++;
            else counter++;
        }
        if(divisors == 0) printf("%d is prime!\n", x);
        else printf("%d is not prime!\n", x);
    return 0;
}
