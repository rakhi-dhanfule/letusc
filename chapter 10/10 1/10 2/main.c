/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on January 3, 2020, 12:24 PM
 */

#include <stdio.h>
int addnumber(int i);
int main()
{
    int i;
    printf("enter the natural number:");
    scanf("%d",&i);
    
    
    printf("sum = %d", addnumber(i));
    return 0;
   
}
int addnumber(int i)
{
    if(i!= 0)
        return i + addnumber(i-1);
    else
        return i ;
}