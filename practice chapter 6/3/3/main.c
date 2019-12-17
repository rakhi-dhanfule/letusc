/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on December 17, 2019, 11:46 AM
 */

#include <stdio.h>
int main()
{
    int i,t;
    printf("enter the table:");
    scanf("%d",&t);
    
    
    for(i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",t,i,i*t);
    }
    return 0;
}