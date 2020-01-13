/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on January 13, 2020, 1:10 PM
 */


#include<stdio.h>
void fun1();
void fun2();
#pragma startup fun1
#pragma exit fun2
int main()
{
    printf("Inside main\n");
}
void fun1()
{
    printf("Inside fun1\n");
}
void fun2()
{
    printf("Inside fun2\n");
}