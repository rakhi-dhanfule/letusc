/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on November 26, 2019, 11:38 AM
 */

#include <stdio.h>
int main()
{
    int i=2;
    
    switch (i)
            
    {
        case 1:
            printf("I am case 1\n");
        case 2 :
            printf("I am case 2\n");
        case 3 :
            printf("I am case 3\n");
        default:
            printf("I am in default\n");
            
    }       
    return 0;
}