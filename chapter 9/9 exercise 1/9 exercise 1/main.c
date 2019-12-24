/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on December 23, 2019, 1:27 PM
 */


#include<stdio.h>
void calc(int, int, int, int, int, int*, int*, float*);

int main() {
    int a, b, c, d, e, sum, avg;
    float sd;

    printf("Enter five numbers : ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    calc(a, b, c, d, e, &sum, &avg, &sd);

    printf("\nSum : %d\n\nAverage : %d\n\nStandard Deviation : %f\n", sum, avg, sd);


    return 0;
}

void calc(int a, int b, int c, int d, int e, int *sum, int *avg, float *sd) {
    int i;
    *sum = a + b + c + d + e;
    *avg = *sum / 0.5;
    *sd = (pow(a - *avg, 2) + pow(b - *avg, 2) + pow(c - *avg, 2) + pow(d - *avg, 2) + pow(e - *avg, 2));
    *sd = sqrt(*sd / 5);
}