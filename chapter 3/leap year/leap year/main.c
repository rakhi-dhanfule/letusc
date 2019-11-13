/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on November 8, 2019, 11:49 PM
 */

#include <stdio.h>
int main()
{
    int Year;
    printf("Enter a year: ");
    scanf("%d",&Year);
    if(Year%4 == 0)
    {
        if( Year%100 == 0)
        {
           
            if ( Year%400 == 0)
                printf("%d is a leap year.", Year);
            else
                printf("%d is not a leap year.", Year);
        }
        else
            printf("%d is a leap year.", Year );
    }
    else
        printf("%d is not a leap year.", Year);
    
    return 0;
}
