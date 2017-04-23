//
//  main.c
//  Exercise 4
//
//  Created by Ragheed Ma'rouf Huneineh on 1/13/16.
//  Copyright © 2016 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define L 20
#define SIZE 70

typedef  struct _station
{
    char aname[L];
    char dname[L];
    int ahr;
    int amin;
    int dhr;
    int dmin;
    
}station;

int main(int argc, const char * argv[]) {
    if (argc!=3) {
        fprintf(stderr, "Invalid Number of Arguments!\n");
        return -1;
    }
    FILE *f_in;
    station list;
    f_in = fopen(argv[1], "r");
    if (f_in==NULL) {
        fprintf(stderr, "Can't Open %s\n", argv[1]);
        return -2;
    }
    char buffer[SIZE];
    int dep = 0, arr = 0;
    while (fgets(buffer, SIZE, f_in)!=NULL) {
        sscanf(buffer,"%s %d:%d %s %d:%d", list.aname, &list.ahr, &list.amin, list.dname, &list.dhr, &list.dmin);
        if (!strcmp(list.aname, argv[2])) {
            arr++;
        }
        if (!strcmp(list.dname, argv[2])) {
            dep++;
        }
    }
    fclose(f_in);
    printf("Arriving Trains to %s = %d\nDeparting Trains from %s = %d\n", argv[2], arr, argv[2], dep);
    return 0;
}
