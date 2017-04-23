//
//  main.m
//  Exercise 3
//
//  Created by Ragheed Ma'rouf Huneineh on 10/16/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#import <Foundation/Foundation.h>

int main() {
    @autoreleasepool {
        // insert code here...
        int x;
        printf("Insert a number: ");
        scanf("%d", &x);
        if (x>0) printf("%d is positive\n", x);
        else printf("%d is negative or equals to zero\n", x);
    }
    return 0;
}
