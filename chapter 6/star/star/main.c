/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on November 26, 2019, 12:35 PM
 */


#include <stdio.h>
int main()
{
int i,j,n;
scanf("%d",&n);
for(i=0; i<n; i++)
{
for(j=0; j <= i; j++)
{
printf("*");
}
printf("\n");
}
return 0;
}

