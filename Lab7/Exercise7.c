//
//  main.c
//  Exercise 7
//
//  Created by Ragheed Ma'rouf Huneineh on 11/26/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
#define N 1024

int main() {
    char text[N][N] = {"a"};
    int i=0, j, k, t, counter = 0, length, sum_length=0;
    float average;
    printf("Enter text\n");
    for(t=1; text[t-2][0] != '\0'; t++)
    {
        gets(text[t-1]);
    }
    while (i<t-1)
    {
        length = 0;
        j=0;
        while(text[i][j] != '\0')
        {
            if (isalpha(text[i][j]) != 0)
            {
                length++;
                counter++;
                k=j+1;
                while (isalpha(text[i][k]) != 0)
                {
                    length++;
                    k++;
                }
                j=k+1;
            }
            else
            {
                j++;
            }
        }
        sum_length += length;
        i++;
    }
    average = (float) sum_length/ counter;
    printf("Number of lines: %d\nNumber of words: %d\nAverage length of a word: %g\n", t-2, counter, average);
    return 0;
}
