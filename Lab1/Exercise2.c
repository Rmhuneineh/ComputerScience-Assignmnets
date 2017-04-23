//
//  main.m
//  Exercise 2
//
//  Created by Ragheed Ma'rouf Huneineh on 10/16/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#import <Foundation/Foundation.h>

int main() {
    @autoreleasepool {
        // insert code here...
        int x;
        printf("Enter a number: ");
        scanf("%d", &x);
        if(x>0) printf("|x| = %d", x);
        else printf("|%d| = %d\n", x, -x);
    }
    return 0;
}
