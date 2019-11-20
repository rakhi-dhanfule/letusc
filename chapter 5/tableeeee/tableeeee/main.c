/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on November 20, 2019, 11:16 AM
 */

#include <stdio.h>
int main()
{
    int i=1;
    int t;
    printf("enter the value for table");
    scanf("%d",&t);
    while(i<=10)
    {
        printf(" %d x %d = %d\n",t,i,i*t);
        i=i+1;
        
    }
    return 0;
}
