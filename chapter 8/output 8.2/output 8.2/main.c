/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on December 4, 2019, 12:41 PM
 */

#include <stdio.h>
int check(int);
int main()
{
    int i=45,c;
    c=check(i);
    printf("%d\n",c);
    return 0;
}
int check (int ch)
{
    if(ch>=45)
        return(100);
    else
        return(10*10);
}
