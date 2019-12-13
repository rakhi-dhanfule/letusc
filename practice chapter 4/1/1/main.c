/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on December 13, 2019, 12:19 PM
 */

#include <stdio.h>
int main()
{
    int year;
    printf("enter the year:");
    scanf("%d",&year);
    
    if(year % 4 == 0)
    {
        if(year % 100 == 0)
        {
            if(year % 400 == 0)
                printf("its a leap year=%d",year);
            
            else
                printf("its not a leap year=%d",year);
        }
            else
                printf("its not a leap year=%d",year);
    }
    else
        printf("its not a leap year=%d",year);
    
    return 0;
}