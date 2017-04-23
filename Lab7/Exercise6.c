//
//  main.c
//  Exercise 6
//
//  Created by Ragheed Ma'rouf Huneineh on 11/26/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
#define N 1024

int main() {
    char text[N][N] = {"a"};
    int i=0, j, k, t;
    printf("Enter text\n");
    t=0;
    do
    {
        gets(text[t]);
        t++;
    } while (text[t-1][0] != '\0');
    
    while (i<t-1)
    {
        j=0;
        while(text[i][j] != '\0')
        {
            if (isalpha(text[i][j]) != 0)
            {
                text[i][j] = toupper(text[i][j]);
                k=j+1;
                while (isalpha(text[i][k]) != 0)
                {
                    k++;
                }
            j=k+1;
            }
            else
            {
                j++;
            }
        }
        
        i++;
    }
    for(i=0; text[i][0] != '\0'; i++)
    {
            printf("%s\n", text[i]);
    }
    return 0;
}
