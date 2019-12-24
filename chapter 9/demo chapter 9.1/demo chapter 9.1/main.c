/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on December 20, 2019, 12:48 PM
 */

#include <stdio.h>
int main()
{
    int i=3;
    printf("Address of i=%u\n",&i);
    printf("Value of i=%d\n",i);
    printf("Value of i=%d\n",*(&i));
    
    return 0 ;
}