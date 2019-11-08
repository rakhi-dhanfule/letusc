/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on November 5, 2019, 2:49 PM
 */

#include <stdio.h>
int main()
{
  int n, reverse = 0;
 
  printf("Enter a number to reverse\n");
  scanf("%d", &n);
 
  while (n != 0)
  {
    reverse = reverse * 10;
    reverse = reverse + n%10;
    n = n/10;
  }
 
  printf("Reverse of entered number is = %d\n", reverse);
 
  return 0;
}