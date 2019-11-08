/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on November 3, 2019, 1:49 PM
 */


include<stdio.h>
#include<conio.h>

void main()
{

int m1,m2,m3,m4,m5,total;
float average, percentage;
printf("Enter marks for subject one -");
scanf ("%d",&m1);
printf("Enter marks for subject two - ");
scanf("%d",&m2);
printf("Enter marks for subject three - ");
scanf("%d",&m3);
printf("Enter marks for subject four - ");
scanf("%d",&m4);
printf("Enter marks for subject five - ");
scanf("%d",&m5);
total = m1+m2+m3+m4+m5;
average = total/5;
percentage = (total*100)/500;
printf("\nThe average of five subjects is %f",average);
printf("\nPercentage=%f%%",percentage);
getch();
}