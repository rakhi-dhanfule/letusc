/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on December 4, 2019, 12:20 PM
 */

#include <stdio.h>
void italy();
void brazil();
void argentina();
int main()
{
    printf("I am in main\n");
    italy();
    brazil();
    argentina();
    return 0;
}
void italy()
{
    printf("I am in italy\n"); 
}
void brazil()
{
    printf("I am in brazil\n");
}
void argentina()
{
    printf("I am in argentina\n");
}