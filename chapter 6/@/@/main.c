/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on November 26, 2019, 1:13 PM
 */

#include <stdio.h>
int main()
{
int i, j, n, k = 0;
scanf("%d",&n);

for(i = n; i >= 1; --i)
{
for(j = 1; j <= i; ++j)
{
printf("@ ");
}
printf("\n");
}

return 0;
}      