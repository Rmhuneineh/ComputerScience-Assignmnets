//
//  main.c
//  Exercise 3
//
//  Created by Ragheed Ma'rouf Huneineh on 12/2/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define N 10

int main() {
    char clock1[N], clock2[N], sep;
    int hr1, min1, hr2, min2, c1, c2, c, hr, min;
    printf("Enter first hour(hh:mm): ");
    scanf("%s", clock1);
    sscanf(clock1, "%d%c%d", &hr1, &sep, &min1);
    if (sep != ':')
    {
        fprintf(stderr, "Invalid input!\n");
        exit(0);
    }
    printf("Enter second hour(hh:mm): ");
    scanf("%s", clock2);
    sscanf(clock2, "%d%c%d", &hr2, &sep, &min2);
    if (sep != ':')
    {
        fprintf(stderr, "Invalid input!\n");
        exit(0);
    }
    if(hr1>hr2 || (hr1==hr2 && min1>min2))
    {
        c1 = (hr1*60) + min1;
        c2 = (hr2*60) + min2;
        c = c1 + c2;
        hr = c/60;
        min = c%60;
        printf("Distance from 00:00 = %d:%d\n", hr, min);
        printf("%d minutes\n", c1 - c2);
    }
    return 0;
}
