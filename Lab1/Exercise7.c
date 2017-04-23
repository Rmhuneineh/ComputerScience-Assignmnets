//
//  main.m
//  Exercise 7
//
//  Created by Ragheed Ma'rouf Huneineh on 10/16/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#import <Foundation/Foundation.h>

int main() {
        // insert code here...
        int temp; float value;
        printf("Choose:\n1- To conver from Celsius to Fahrenheit\n2- To conver from Fahrenheit to Celsius\n");
        scanf("%d", &temp);
        printf("Enter value to be converted: ");
        scanf("%f", &value);
        if (temp == 1) printf("Temperature in Fahrenheit = %f\n", (value*9/5)+32);
        else if (temp == 2) printf("Temperature in Celsius is = %f\n", (value-32)*5/9);
        else printf("Invalid Choice!\n");
    return 0;
}
