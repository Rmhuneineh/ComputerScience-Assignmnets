//
//  main.c
//  Exercise 4
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
int Update(char warehouse[][M], float *price, char newproduct[], float newprice);
int RemovePro(char warehouse[][M], char *Pro, float *price);

int i;
int main() {
    int choice;
    char list[N][M], NewPro[M], New[M], ret;
    float Price[N], NewPri;
    initialize(Price, list);
    i=0;
    while (1)
    {
        printf("\n1- Insertion Of A New Product\n2- Print The Current List\n3- Update the price of a product\n4- Remove a product\n5- Exit Program\nChoice: ");
        scanf("%d%c", &choice, &ret);
        switch (choice)
        {
            case 1:
                printf("\nEnter New Product With Price!\n");
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
                    printf("\nThe Product Is Already In The List! Option '3' Helps You Modify The Price!\n");
                }
                break;
            case 2:
                printf("\n");
                PrintList(list, Price);
                break;
            case 3:
                printf("\nEnter Product's Name And New Price\n");
                gets(New);
                sscanf(New,"%s %f", NewPro, &NewPri);
                if(Update(list, Price, NewPro, NewPri))
                {
                    printf("\nUpdate Successful!\n");
                }
                else
                {
                    printf("\nProduct Not On List(Check Option '2') Or Invalid Price!\n");
                }
                break;
            case 4:
                printf("\nEnter Product's Name!\n");
                gets(New);
                if(RemovePro(list, New, Price))
                {
                    printf("\nItem Successfully Removed!\n");
                }
                else
                {
                    printf("\nInvalid Item! Consider Option '2'!\n");
                }
                break;
            case 5:
                printf("Thank You =)\n");
                return 0;
            default:
                printf("Invalid Choice!\n");
        }
        
    }
    return 0;
}

int RemovePro(char warehouse[][M], char *Pro, float *price)
{
    int k, j, flag = 0;
    for(k=0; flag==0 && warehouse[k][0] != '\0'; k++)
    {
        if(!strcmp(warehouse[k], Pro))
        {
            i--;
            flag = 1;
            for(j=k; warehouse[j][0]!='\0'; j++)
            {
                strcpy(warehouse[j], warehouse[j+1]);
                price[j] = price[j+1];
            }
            warehouse[j-1][0] = '\0';
            price[j-1] = -2;
        }
    }
    return flag;
}

int Update(char warehouse[][M], float *price, char newproduct[], float newprice)
{
    int k, flag=0;
    for(k=0; newprice>0 && warehouse[k][0]!='\0'; k++)
    {
        if (!strcmp(warehouse[k], newproduct))
        {
            price[k] = newprice;
            flag = 1;
        }
    }
    return flag;
}

void initialize(float *price, char list[][M])
{
    int k;
    for(k=0; k<N; k++)
    {
        price[k] = -2;
        list[k][0] = '\0';
    }
}

int Insertion(char warehouse[][M], float price[], int n, char newproduct[], float newprice)
{
    int k, flag=2;
    
    for(k=0; flag==2 && k<N; k++)
    {
        if (price[k] == -2)
        {
            flag = 1;
        }
    }
    for(k=0; flag==1 && warehouse[k][0]!='\0'; k++)
    {
        if (!strcmp(warehouse[k], newproduct))
        {
            flag = 0;
        }
    }
    return flag;
}

void PrintList(char warehouse[][M], float *price)
{
    int k, flag=1;
    if (warehouse[0][0]=='\0')
    {
        flag = 0;
        printf("\nList Still Empty! How About Option '1'?\n");
    }
    for(k=0; flag && warehouse[k][0]!='\0'; k++)
    {
        printf("%s\t%g\n", warehouse[k], price[k]);
    }
}
