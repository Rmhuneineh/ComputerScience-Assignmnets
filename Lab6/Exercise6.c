//
//  main.c
//  Exercise 6
//
//  Created by Ragheed Ma'rouf Huneineh on 11/19/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>
#define N 1024

int main() {
    int rem[N], n, i, l, k, r, bpal, t, numb;
    printf("Enter an integer (>2): ");
    scanf("%d", &numb);
    t = 2;
    while(t < numb)
    {
        n = numb;
        for(i=0; n != 0; i++)
        {
            rem[i] = n%t;
            n /= t;
        }
        r = i-1;
        l=0;
        bpal = 1;
        while(r > 0)
        {
            if (rem[r] != rem[l])
            {
                bpal = 0;
            }
            l++;
            r--;
        }
        if (bpal)
        {
            printf("%d Palindrome at base %d\n", numb, t);
            for(k=0; k<i; k++)
            {
                printf("%d ", rem[k]);
            }
            printf("\n");
        }
        t++;
    }
    printf("\n");
    return 0;
}
