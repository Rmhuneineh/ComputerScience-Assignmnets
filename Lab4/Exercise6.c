//
//  main.c
//  Exercise 6
//
//  Created by Ragheed Ma'rouf Huneineh on 11/5/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int main() {
    double N, avg = 0;
    int num, sum = 0, counter=0, i;
    printf("Enter N: ");
    scanf("%lf", &N);
    for(i=1; avg < N; i++)
    {
        while (counter<i*10)
        {
            scanf("%d", &num);
            sum += num;
            counter++;
            avg = (double)sum/counter;
            if(avg > N && counter > 10) break;
        }
    }
    printf("The total average = %g\nThe amount of entered numbers: %d\n", avg, counter);
    return 0;
}
