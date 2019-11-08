/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on November 3, 2019, 2:49 PM
 */

#include<stdio.h>
int main()
{
    int length,breadth,r;
    float area, perimeter, areac,cc;

    printf("Enter the Length and Breadth and radius ");
    scanf("%d %d %d", &length,&breadth,&r);

    perimeter = 2*(length+breadth);
    area = length*breadth;
    cc = 2*(22/7)*r;
    areac = (22/7)*r*r;

    printf("The area of rectangle is %f\n",area);
    printf("The area of circle is %d\n",areac);
    printf("The circumference of circle is %f\n",cc);

}





