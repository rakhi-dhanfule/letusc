/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on December 20, 2019, 12:04 PM
 */

#include <stdio.h>
void demo();
int main()
{
    demo();
    return 0;
    
}

void demo()
{
    int Year;
    printf("enter the year:");
    scanf("%d",&Year);
    
    if(Year%4 == 0)
    {
        if(Year%100 == 0)
        {
           
            if (Year%400 == 0)
                printf("%d is a leap year.", Year);
            else
                printf("%d is not a leap year.", Year);
        }
        else
            printf("%d is a leap year.", Year );
    }
    else
        printf("%d is not a leap year.", Year);
    
    
}