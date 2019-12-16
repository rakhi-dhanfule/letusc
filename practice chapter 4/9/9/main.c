/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on December 15, 2019, 10:33 PM
 */

#include <stdio.h>
int main()
{
    float sal;
    
    printf("enter the salary:");
    scanf("%f",&sal);
    
    (sal>=25000 && sal<=40000)? printf("manager\n):
    (sal>=15000 && sal<=25000)? printf("accountant\n): printf("clerk");
    return 0;
}