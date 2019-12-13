/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on December 12, 2019, 2:54 PM
 */

#include <stdio.h>
int main()
{
    int num;
    printf("enter the absolute value:");
    scanf("%d",&num);
     
    if(num<0)
    num = (-1) * num;
    printf("\n absolute value is=%d", num);
   
    return 0;
}
