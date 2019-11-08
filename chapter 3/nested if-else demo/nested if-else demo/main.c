/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on November 7, 2019, 12:54 PM
 */

#include <stdio.h>
int main()
{
    int i;
    printf("Enter either 1 or 2");
    scanf("%d",&i);
    
    if(i==1)
        printf("You would go to heaven !\n");
    else
    {
        if (i==2)
            printf("Hell was created with you in mind\n");
        else
            printf("How about mother earth!\n");
    }
    return 0;
}
    
