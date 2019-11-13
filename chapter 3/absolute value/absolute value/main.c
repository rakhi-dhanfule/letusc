/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on November 11, 2019, 12:27 PM
 */

#include <stdio.h>
int main()
{
  int num;

  printf("\n Enter any number to find absolute value");
  scanf("\n %d",&num);
  if (num<0)
{
  num=(-1)*num;
  printf("\n Absolute value is =%d",num);
}
  return (0);
}
