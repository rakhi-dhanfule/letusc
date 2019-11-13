/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * C*Created on November 8, 2019, 11:49 PM*
 
 */
  #include <stdio.h>
int main()
{
    int year;
    printf("enter the year check for leap year:");
scanf("%d",&year);
if((year%4==0 && year %100!=0)||(year%400==0))
    printf("entered year is leap year:");
else
{
    printf("entered year is not leap year:");
}
return 0;
}