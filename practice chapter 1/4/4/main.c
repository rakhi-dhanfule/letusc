/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on December 12, 2019, 12:09 PM
 */

#include <stdio.h>
int main()
{
    float r,l,b,perimeter,circumference,ac,area;
    
    printf("enter the length,breadth and radius:");
    scanf("%f %f %f", &l,&b,&r);
    
    area= l*b;
    perimeter = 2*(l + b);
    ac = (22/7)*r *r;
    circumference = 2 * (22/7) * r;
    
    
    printf("\n area of rectangle is=%f", area);
    printf("\n perimeter of the rectangle is=%f", perimeter);
    printf("\n area of circle is =%f", ac);
    printf("\n circumference of circle is=%f", circumference);
    
    return 0;
}