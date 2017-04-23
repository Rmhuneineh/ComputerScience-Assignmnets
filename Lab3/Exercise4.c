//
//  main.c
//  Exercise 4
//
//  Created by Ragheed Ma'rouf Huneineh on 10/28/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>
#define base_price 100
#define feature_price 40
#define month_price 20

int main() {
    int price, features, months, years;
    printf("Enter the number of features you're interested in and the duration(years) the phone has been used as follows(featurees, years): ");
    scanf("%d, %d", &features, &years);
    months = 12*years;
    price = base_price + (feature_price*features) - (month_price*months);
    if (price<100)
    {
        printf("The maximum price = base price = 100\n");
    }
    else
    {
    printf("The maximum price = %d euros\n", price);
    }
    return 0;
}
