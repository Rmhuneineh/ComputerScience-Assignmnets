//
//  main.m
//  Exercise 1
//
//  Created by Ragheed Ma'rouf Huneineh on 10/16/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#import <Foundation/Foundation.h>

int main() {
    @autoreleasepool {
        // insert code here...
        int x ,y ,z;
        printf("Enter an integer: ");
        scanf("%d", &x);
        y = 3;
        z = x/y;
        printf("%d/%d = %d\n", x ,y, z);
    }
    return 0;
}
