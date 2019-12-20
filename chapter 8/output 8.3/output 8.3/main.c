/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on December 4, 2019, 12:45 PM
 */

#include <stdio.h>
float circle(int);
int main()
{
    float area;
    int radius=1;
    area=circle(radius);
    printf("%f\n",area);
    return 0;
}
float circle(int r)
{
    float a;
    a=3.14*r*r;
    return(a);
}