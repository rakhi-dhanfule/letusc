/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on January 24, 2020, 11:54 AM
 */

#include <stdio.h>
int main()
{
    int s[4][2]={
        {1234,56},
        {1212,33},
        {1434,80},
        {1312,78}
       
    };
    
    int(*p)[2];
    int i,j,*pint;
    for(i=0;i<=3;i++)
    {
        p=&s[i];
        pint=(int*)p;
        printf("\n");
        for(j=0;j<=1;j++)
            printf("%d",*(pint+j));
    }
    return 0;
}