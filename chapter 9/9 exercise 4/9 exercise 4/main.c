/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on December 23, 2019, 6:33 PM
 */

#include <stdio.h>
#include<math.h>
void cals(int, int, int, int*, float*);

int main() {
    int a, b, c, s;
    float area;

    printf("enter the three sides of triangle:");
    scanf("%d %d %d", &a, &b, &c);

    cals(a, b, c, &s, &area);

    printf("\nS %d\nArea %f\n", s, area);
    return 0;
}

void cals(int a, int b, int c, int *s, float *area) 
{
    *s=(a+b+c)/2;
    *area=(sqrt(s*(s-a)(s-b)(s-c)));
}