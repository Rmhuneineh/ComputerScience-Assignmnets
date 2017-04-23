//
//  main.c
//  Exercise 3
//
//  Created by Ragheed Ma'rouf Huneineh on 11/5/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>

int main() {
    int value;
    
    printf("Keep on entering integers. Enter 0 to end\n");
    
    do {
        scanf("%d", &value);
    } while (value != 0);
    
    /*
     * Further Insight
    int sum=0, value;
    printf("Enter numbers\n");
    do
    {
        scanf("%d", &value);
        sum += value;
    } while(value != 0);
    printf("The sum of the numbers you entered = %d\n", sum); */
        
        
    return 0;
}
