/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on November 26, 2019, 1:59 PM
 */

#include <stdio.h>
int main()
{
int j, i, k = 1;
for(j=1; j<6; j++)
{
for(i=1; i<=j; i++)
{
printf("%d ", k++);
}
printf("\n");
}
return 0;
}