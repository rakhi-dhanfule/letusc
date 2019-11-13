/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on November 11, 2019, 12:37 PM
 */


#include<stdio.h>

int main()
{
	
	int num, orig, rev=0, rem;
	printf("Enter a number : ");
	scanf("%d",&num);
	orig=num;
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	if(orig==rev)
	{
		printf("Reverse is equal to original");
	}
	else
	{
		printf("Reverse is not equal to original");
	}
return 0;
}