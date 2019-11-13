/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on November 12, 2019, 11:51 PM
 */

#include <stdio.h>

int main()
{
    int year;
 
    printf("Enter any year: ");
    scanf("%d", &year);

    
    (year%4==0 && year%100!=0) ? printf("leap year") :
        (year%400 ==0 ) ? printf("leap year") : printf("not a leap year");

    return 0;
}
