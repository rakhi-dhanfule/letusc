/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on December 5, 2019, 1:34 PM
 */

#include <stdio.h>
void calsum(int x,int y,int z);
 int main()
{
    int a,b,c,sum;
    printf("enter the number");
    scanf("%d%d%d",&a,&b,&c);
     sum=calsum(a,b,c);
         printf("sum = %d\n",sum);
    return 0;
}

     int calsum(int x,int y, int z)
{
     int d;
     d=x+y+z;
     return (d);
}