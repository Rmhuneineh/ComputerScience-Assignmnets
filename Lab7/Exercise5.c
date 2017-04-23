//
//  main.c
//  Exercise 5
//
//  Created by Ragheed Ma'rouf Huneineh on 11/26/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>

int main() {
    char one, two;
    printf("Enter two characters(char1, char2): ");
    scanf("%c, %c", &one, &two);
    if (isalpha(one) && isalpha(two))
    {
        if (toupper(one)>toupper(two))
        {
            printf("%c %c\n", two, one);
        }
        else if (toupper(one)<toupper(two))
        {
            printf("%c %c\n", one, two);
        }
        else if (toupper(one) == toupper(two))
        {
            printf("They are the same!\n");
        }
    }
    else if(isdigit(one) || isdigit(two))
        {
            printf("At least one of them is a digit!\n");
        }
    else
        {
            printf("They characters are neither alphabets nor digits!\n");
        }
    return 0;
}
