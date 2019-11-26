/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on November 26, 2019, 12:01 PM
 */

#include<stdio.h>
int main()
{
 
int number, div, ifprime;
 
 
 
for (number=2;number<=300;number++)
 
{
 
for (div=2; div<number; div++)
 
{
if (number%div==0)
{
 
ifprime=0;
break;
}
 
ifprime=1;
 
}
 
if (ifprime)
{
printf("\n%d", number);
 
}
}
}