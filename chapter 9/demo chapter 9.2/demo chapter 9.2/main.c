/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on December 20, 2019, 12:55 PM
 */

#include <stdio.h>
int main()
{
    int i=3;
    int *j;
    
    j=&i;
    
    printf("Address of i=%u\n",&i);
    printf("Address of i=%u\n",j);
    printf("Address of j=%u\n",&j);
    printf("value of j=%u\n",j);
    printf("value of i=%d\n",i);
    printf("value of i=%d\n",*(&i));
    printf("value of i=%d\n",*j);
    return 0;
}