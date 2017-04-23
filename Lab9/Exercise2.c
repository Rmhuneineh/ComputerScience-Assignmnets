//
//  main.c
//  Exercise 2
//
//  Created by Ragheed Ma'rouf Huneineh on 12/10/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define N 5
#define M 20

int Insertion(char warehouse[][M], float price[], int n, char newproduct[], float newprice);
void initialize(float *price, char list[][M]);
void PrintList(char warehouse[][M], float *price);

int main() {
    int choice, i=0;
    char list[N][M], NewPro[M], New[M], ret;
    float Price[N], NewPri;
    initialize(Price, list);
    while (1)
    {
        printf("\n========MENU========\n\n1- Insertion Of A New Product.\n2- Print The Current List\n3- Exit The Program\n");
        scanf("%d%c", &choice, &ret);
        switch (choice)
        {
            case 1:
                printf("Enter New Product With Price!\n");
                gets(New);
                sscanf(New,"%s %f", NewPro, &NewPri);
                if(Insertion(list, Price, N, NewPro, NewPri)==1)
                {
                    strcpy(list[i], NewPro);
                    Price[i] = NewPri;
                    i++;
                    printf("\nItem Successfully Entered!\n");
                }
                else if(Insertion(list, Price, N, NewPro, NewPri)==2)
                {
                    printf("\nThe List Is Full!\n");
                }
                else
                {
                    printf("\nThe Product Is Already In The List\n");
                }
                break;
            case 2:
                PrintList(list, Price);
                break;
            case 3:
                printf("Thank You =)\n");
                exit(2);
            default:
                printf("Invalid Choice!\n");
        }

    }
        return 0;
}

void initialize(float *price, char list[][M])
{
    int i;
    for(i=0; i<N; i++)
    {
        price[i] = -2;
        list[i][0] = '\0';
    }
}

int Insertion(char warehouse[][M], float price[], int n, char newproduct[], float newprice)
{
    int i, flag=2;
    
    for(i=0; flag==2 && i<N; i++)
    {
        if (price[i] == -2)
        {
            flag = 1;
        }
    }
    for(i=0; flag==1 && warehouse[i][0]!='\0'; i++)
    {
        if (!strcmp(warehouse[i], newproduct))
            {
                flag = 0;
            }
    }
    return flag;
}

void PrintList(char warehouse[][M], float *price)
{
    int i, flag=1;
    printf("\n======Warehouse======\n\n");
    if (warehouse[0][0]=='\0')
    {
        flag = 0;
        printf("\nList Still Empty! How About Option '1'?\n");
    }
    for(i=0; flag && warehouse[i][0]!='\0'; i++)
    {
        printf("%s\t%g\n", warehouse[i], price[i]);
    }
}
