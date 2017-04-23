//
//  main.c
//  Exercise 3
//
//  Created by Ragheed Ma'rouf Huneineh on 1/7/16.
//  Copyright © 2016 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 80
#define L 21
#define SIZE 130
#define PERIOD 4

typedef struct _row
{
    char subject[L];
    char pname[L];
    char psname[L];
    int period;
    int credits;
    double prate;
}row;

row file[N];

void SMAXCRED(int count);
void SDIFFPASS(int count);
void SCREDITS(char *surname, int count);
void APRATE(char *surname, int count);

int main(int argc, const char * argv[]) {
    if (argc != 2) {
        fprintf(stderr, "%s 'File Name'\n", argv[0]);
        return -1;
    }
    char sname[L];
    FILE *ragh;
    ragh = fopen(argv[1], "r");
    if (ragh == NULL) {
        fprintf(stderr, "Can't Open %s\n", argv[1]);
        return -1;
    }
    char Buffer[SIZE];
    int i=0;
    while (fgets(Buffer, SIZE, ragh)!=NULL)
    {
        sscanf(Buffer, "%s %s %s %d %d %lf", file[i].subject, file[i].pname, file[i].psname, &file[i].period, &file[i].credits, &file[i].prate);
        i++;
    }
    fclose(ragh);
    SMAXCRED(i);
    SDIFFPASS(i);
    printf("Enter Professor's Last Name.\n");
    scanf("%s", sname);
    SCREDITS(sname, i);
    APRATE(sname, i);
    printf("\n");
    return 0;
}

void SMAXCRED(int count)
{
    int i, max = file[0].credits;
    for(i=0; i<count; i++)
    {
        if (file[i].credits>max) {
            max = file[i].credits;
        }
    }
    printf("\nSubjects(s) with maximum credit(%d)\n", max);
    for (i=0; i<count; i++) {
        if (file[i].credits == max) {
            printf("%s\n", file[i].subject);
        }
    }
}

void SDIFFPASS(int count)
{
    int p, i, flag, flag2;
    double min=0;
    for(p=1; p<=PERIOD; p++)
    {
        flag = 0;
        flag2=0;
        for(i=0; i<count; i++)
        {
            if (file[i].period == p) {
                flag2=1;
                min = file[i].prate;
            }
        }
        for (i=0; i<count; i++) {
            if (file[i].period == p) {
                flag = 1;
                if (flag2 && file[i].prate<min) {
                    min = file[i].prate;
                }
            }
        }
        if (flag==1) {
            printf("\nSubjects(s) with highest difficulty in period %d\n", p);
            for (i=0; i<count; i++) {
                if (file[i].prate == min) {
                    printf("%s\n", file[i].subject);
                }
            }
        }
        else
        {
            printf("No Entries In Period: %d\n", p);
        }
    }
}

void SCREDITS(char *surname, int count)
{
    int i, flag=0;
    for (i=0; i<count; i++) {
        if (!strcmp(file[i].psname, surname)) {
            flag = 1;
            printf("\nNumber of credits in %s = %d\n", file[i].subject, file[i].credits);
        }
    }
    if (!flag) {
        printf("No Such Surname as %s\n", surname);
    }
}

void APRATE(char *surname, int count)
{
    int i, flag=0, num=0;
    double sum = 0;
    for(i=0; i<count; i++)
    {
        if (!strcmp(surname, file[i].psname)) {
            flag = 1;
            num++;
            sum += file[i].prate;
        }
    }
    if (flag) {
        double avg = sum/num;
        printf("\nAverage passing rate in %d course(s) = %g\n", num, avg);
    }
}