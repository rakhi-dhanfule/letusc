/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on November 4, 2019, 1:01 PM
 */

#include<stdio.h>
 int main()
{
 int sum,rem,no;
 printf("enter a five digit number  ");
 scanf("%d",&no);
 sum=0,rem=0;
 
 if(no==0)
    printf("%d",no);
 
 while(no!=0)
 {
  rem = no %10;
  sum = sum+rem;
  no = no/10;
 }
 
 printf("Sum is %d",sum);
 return 0;
}


