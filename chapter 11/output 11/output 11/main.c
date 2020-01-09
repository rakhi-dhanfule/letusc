/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on January 9, 2020, 12:29 PM
 */

#include <stdio.h>
int i=0;
void val();
int main()
{
    printf("main's i=%d\n",i);
    i++;
    val();
    printf("main's i=%d\n",i);
    val();
    return 0;
}
void val()
{
    i=100;
    printf("val's i=%d\n",i);
    i++;
}