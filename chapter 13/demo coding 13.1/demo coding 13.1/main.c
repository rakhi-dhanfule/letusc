/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on January 14, 2020, 12:43 PM
 */

#include <stdio.h>
int main()
{
    int avg,sum=0;
    int i;
    int marks[5];               /*array declaration*/
    for(i=0;i<=29;i++)
    {
        printf("enter marks");
        scanf("%d",&marks[i]);  /*store data in array*/
    }
    for(i=0;i<=29;i++)
        sum=sum+marks[i];      /*read data from an array*/
    avg=sum/5;
    printf("Average marks=%d\n",avg);
    return 0;
}