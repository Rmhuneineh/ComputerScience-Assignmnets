//
//  main.c
//  Exercise 5
//
//  Created by Ragheed Ma'rouf Huneineh on 10/22/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>

int main() {
    float price, tax, receipt;
    printf("Please enter the values of price and tax (price, tax): ");
    scanf("%f, %f", &price, &tax);
    receipt = price + (price*tax/100);
    printf("Receipt = %f\n", receipt);
    return 0;
}
