/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on November 7, 2019, 11:53 AM
 */
#include<stdio.h>
 int main()
{
    int s, a, b, c,area;

    printf("Enter the values of a, b and c \n");
    scanf("%d %d %d", &a, &b, &c);
    
    /* compute s */
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    
    printf("Area of a triangle = %d \n", area);
    return 0;
}
