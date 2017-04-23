//
//  main.c
//  Exercise 3
//
//  Created by Ragheed Ma'rouf Huneineh on 11/19/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>
#define N 5

int main() {
    
    int v[N], rep[N], flag, k, counter, i, j;
    
    printf("Enter %d numbers!\n", N);
    
    for(i=0; i<N; i++)
    {
        printf("%d: ", i+1);
        scanf("%d", &v[i]);
    }
    k=0;
   for(i=0; i<N-1; i++)
    {
        flag = 0;
        counter = 1;
        for(j=0; j<k; j++)
        {
            if (v[i] == rep[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            for(j=i+1; j<N; j++)
            {
                if (v[i] == v[j])
                {
                    counter++;
                }
            }
        }
        if (counter > 1)
        {
            printf("%d repeated %d times\n", v[i], counter);
            rep[k] = v[i];
            k++;
        }
    }
    
    return 0;
}
