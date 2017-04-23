//
//  main.c
//  Exercise 5
//
//  Created by Ragheed Ma'rouf Huneineh on 12/3/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define N 1024
#define PRO 3

char sep[PRO][N];

int test(char *n, int pricen, int* p, int quantity);

int main() {
    char product[PRO][N], new[N], new2[N];
    int price[PRO], quantity=0, pricen;;
    printf("Enter %d products and their corresponding price (product price)\n", PRO);
    int t;
    for(t=0; t<PRO; t++)
    {
        printf("%d: ", t+1);
        gets(product[t]);
        sscanf(product[t],"%s %d", sep[t], &price[t]);
    }
    printf("Enter your product and quantity(product quantity)\n");
    gets(new);
    sscanf(new, "%s %d", new2, &quantity);
    while(!test(new2, pricen, price, quantity))
    {
        printf("Invalid product! Enter another one:\n");
        gets(new);
        sscanf(new, "%s %d", new2, &quantity);
    }
    return 0;
}

int test(char *n, int pricen, int *p, int quantity)
{
    int t, flag=1;
    for(t=0; t<PRO; t++)
    {
        int j;
        flag = 1;
        for(j=0; sep[t][j]!='\0' && n[j]!='\0'; j++)
        {
            if(toupper(sep[t][j]) != toupper(n[j]))
            {
                flag = 0;
            }
        }
        if (flag)
        {
            pricen = p[t]*quantity;
            printf("Total price = %d\n", pricen);
            exit(0);
        }
    }
    return flag;
}
