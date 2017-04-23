//
//  main.c
//  Exercise 2
//
//  Created by Ragheed Ma'rouf Huneineh on 11/4/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>

int main() {
    int month;
    
    printf("Enter an integer between 1 and 12: ");
    scanf("%d", &month);
    
    switch (month)
    {
        case 1:
            printf("January\n");
            break;
        case 2:
            printf("February\n");
            break;
        case 3:
            printf("March\n");
            break;
        case 4:
            printf("April\n");
            break;
        case 5:
            printf("May\n");
            break;
        case 6:
            printf("June\n");
            break;
        case 7:
            printf("July\n");
            break;
        case 8:
            printf("August\n");
            break;
        case 9:
            printf("September\n");
            break;
        case 10:
            printf("Ocotber\n");
            break;
        case 11:
            printf("November\n");
            break;
        case 12:
            printf("December\n");
            break;
        default:
            printf("Invalid number!\n");
    }
    
    /*
     * Further Insight
    int day, month, year;
    printf("Enter a date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);
    
    printf("%d ", day);
     switch (month)
     {
     case 1:
        printf("January\n");
        break;
     case 2:
        printf("February\n");
        break;
     case 3:
        printf("March\n");
        break;
     case 4:
        printf("April\n");
        break;
     case 5:
        printf("May\n");
        break;
     case 6:
        printf("June\n");
        break;
     case 7:
        printf("July\n");
        break;
     case 8:
        printf("August\n");
        break;
     case 9:
        printf("September\n");
        break;
     case 10:
        printf("Ocotber\n");
        break;
     case 11:
        printf("November\n");
        break;
     case 12:
        printf("December\n");
        break;
     default:
        printf("Invalid number!\n");
     }
    printf(" %d\n", year);*/
    
    return 0;
}
