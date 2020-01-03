/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on January 3, 2020, 12:06 PM
 */

#include <stdio.h>
int demo(int,int,int,int,int,int*);
int main()
{
    int a,b,c,d,e, sum;
    printf("enter any number:");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    
    demo(a,b,c,d,e,&sum);
    printf("\n sum %d",sum);
    return 0;
}
int demo(int a,int b,int c,int d,int e,int *sum)
{
    int i;
    *sum=(a+b+c+d+e);
    return(i);
}