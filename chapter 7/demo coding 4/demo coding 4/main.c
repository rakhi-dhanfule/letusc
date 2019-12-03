/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on December 3, 2019, 11:35 AM
 */

#include <stdio.h>
int main()
{
    char c='a';
    switch(c)
    {
        case 'a':
            printf("I am in case a\n");
            break;
            
        case'x':
            printf("I am in case x\n");
            break;
            
        default:
            printf("I am in default\n");
            
    }
    return 0;
}