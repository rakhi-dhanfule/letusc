/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on November 11, 2019, 2:42 PM
 */


   
#include <stdio.h>
 int main()
{
  int x1,y1,x2,y2,x3,y3,slope1,slope2;
 
  printf("\n Enter 1st co-ordinate (x1,y1)");
  scanf("\n %d%d",&x1,&y1);
  
  printf("\n Enter 2nd co-ordinate (x2,y2)");
  scanf("\n %d%d",&x2,&y2);
  
  printf("\n Enter 3rd co-ordinate (x3,y3)");
  scanf("\n %d%d",&x3,&y3);
  
  slope1=(y2-y1)/(x2-x1);
  slope2=(y3-y2)/(x3-x2);
  if(slope1==slope2)
{
  printf("\n Three points fall on the same line");
}
  else
{
  printf("\nThree points doesn't fall on the same line");
}
  return (0);
}

