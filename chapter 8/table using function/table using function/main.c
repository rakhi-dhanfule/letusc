/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on December 5, 2019, 12:47 PM
 */

#include <stdio.h>
void table(int n) 
{
	for(int i = 1; i <= 10; ++i)
        {
		printf("%d * %d = %d\n",n,i,i*n);
	}
}
int main() 
{
	
	int n;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	printf("\n");
	table(n);
	return 0;
}