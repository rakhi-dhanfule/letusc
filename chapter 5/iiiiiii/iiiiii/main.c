/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on November 20, 2019, 11:28 AM
 */

#include <stdio.h>
int main()
{
    int i=1;
    int t;
    printf("enter the value of table");
    scanf("%d",&t);
            
    for(i=1;i<=10;)
    {
        printf(" %d x %d = %d\n",t,i,i*t);
        i=i+1;
    }
    return 0;
}
