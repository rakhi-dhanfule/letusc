/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on December 3, 2019, 11:29 AM
 */

#include <stdio.h>
int main()
{
    int i=22;
    
    switch(i)
    {
        case 121:
            printf("I am in case 121\n");
            break;
            
        case 7:
            printf("I am in case 7\n");
            break;
            
        case 22:
            printf("I am in case 22\n");
            break;
            
        default:
            printf("I am in default\n");
            
    }
    return 0;
}