/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on November 11, 2019, 12:09 PM
 */

#include<stdio.h>
int main()
{
	int Ajay,Ram,Shyam;
	printf(" Enter the ages of Ajay :");
	scanf("%d",&Ajay);
	
	printf("\n Enter the ages of Ram :");
	scanf("%d",&Ram);
	
	printf("\n Enter the ages of Shyam :");
	scanf("%d",&Shyam);
	
	if(Ram < Ajay && Ram < Shyam)
	{
		printf("\n The youngest of the three is Ram");
	}
	else if(Ajay < Ram && Ajay < Shyam)
	{
		printf("\n The youngest of the three is Ajay");
	}
	else if(Shyam< Ram && Shyam < Ajay)
	{
		printf("\nThe youngest of the three is Shyam");
	}
	else
	{
		printf("\nSame Age");
	}
	return 0;
}
