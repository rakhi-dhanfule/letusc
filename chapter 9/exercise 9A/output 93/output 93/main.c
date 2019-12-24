/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on December 24, 2019, 11:27 AM
 */

#include <stdio.h>
void fun(int*,int*);
int main()
{
    int i=5,j=2;
    fun(&i,&j);
    printf("%d %d\n",i,j);
    return 0;
}
void fun(int *i,int *j)
{
    *i=*i**i;
    *j=*j**j;
}