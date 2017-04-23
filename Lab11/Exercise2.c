//
//  main.c
//  Exercise 2
//
//  Created by Ragheed Ma'rouf Huneineh on 1/7/16.
//  Copyright © 2016 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 100
#define L 20

typedef struct _contact
{
    char name[L];
    char surname[L];
    char number[L];
    char mobile[L];
} contact;

contact Book[N];
int Check[N];

void Display(void);
int CheckList(char *name, char *sname);
void AddContact ();
int Add(char *n, char *s);
void DisplayBook();

int main(int argc, const char * argv[]) {
    int flag = 1, choice;
    char ret;
    
    while (flag)
    {
        Display();
        scanf("%d%c", &choice, &ret);
        switch (choice) {
            case 1:
                AddContact();
                break;
                
            case 2:
                DisplayBook();
                break;
                
            case 3:
                printf("\nThank You =)\n");
                flag = 0;
                break;
                
            default:
                fprintf(stderr, "\nInvalid Choice! Try Again\n");
                break;
        }
    }
    return 0;
}

void Display(void)
{
    printf("\n1- Add New Contact.\n2- Display Book.\n3- Exit.\nChoice: ");
}

void AddContact ()
{
    char tempN[L], tempS[L], choice = 'D', ret;
    printf("\n===Name===\n");
    fgets(tempN, L, stdin);
    printf("\n===Surname===\n");
    fgets(tempS, L, stdin);
    if (CheckList(tempN, tempS)) {
        printf("\nWARNING CONTACT ALREADY EXISTS! If You Want To Duplicate, Press 'D'. If No, Press 'N'.\n");
        scanf("%c%c", &choice, &ret);
    }
    switch (choice) {
        case 'D':
            if(Add(tempN, tempS))
            {
                printf("\nEntry Succeeded!\n");
            }
            break;
        case 'N':
            break;
        default:
            fprintf(stderr, "Invalid Choice!\n");
            break;
    }
    
}

int CheckList(char *name, char *sname)
{
    int flag = 0, i;
    for(i=0; Check[i] != 0; i++)
    {
        if(!strcmp(name, Book[i].name) && !strcmp(sname, Book[i].surname))
        {
            flag = 1;
        }
    }
    return flag;
}

int Add(char *n, char *s)
{
    int i, flag = 0, pos=0;
    for (i=0; i<N && flag == 0; i++) {
        if (Check[i] == 0) {
            strcpy(Book[i].name, n);
            strcpy(Book[i].surname, s);
            pos = i;
            flag = 1;
        }
    }
    if (i == N && !flag) {
        printf("List is Full!\n");
    }
    else
    {
        printf("\n===Phone Number===\n");
        fgets(Book[pos].number, L, stdin);
        printf("\n===Mobile Number===\n");
        fgets(Book[pos].mobile, L, stdin);
        Check[pos] = 1;
    }
    return flag;
}

void DisplayBook()
{
    if (Check[0]!=0) {
        int i;
        for(i=0; Check[i]!=0; i++)
        {
            printf("\nName: %sSurname: %sMobile: %sPhone: %s", Book[i].name, Book[i].surname, Book[i].mobile, Book[i].number);
        }
    }
    else
    {
        printf("\nList Still Empty! How About Choice '1'?\n");
    }
}