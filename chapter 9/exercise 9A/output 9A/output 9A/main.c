/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on December 24, 2019, 11:31 AM
 */

#include <stdio.h>
int main()
{
    float a=13.5;
    float *b ,*c;
    b=&a; /*suppose address of a is 1006*/
    c=b;
    printf("%u%u%u\n",&a,b,c);
    printf("%f%f%f%f%f\n",a,*(&a),*&a,*b,*c);
    return 0;
}