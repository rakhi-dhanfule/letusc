/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on December 23, 2019, 12:26 PM
 */

#include <stdio.h>
void areaperi(int, float *, flaot *);

int main() {
    int radius;
    float area, perimeter;
    printf("enter the radius of circle");
    scanf("%d", &radius);
    areaperi(radius, &area, &perimeter);

    printf("Area = %f\n", area);
    printf("Perimeter =%f\n", perimeter);
    return 0;
}

void areaperi(int r, float *a, float *p) {
    *a = 3.14 * r * r;
    *p = 2 * 3.14 * r;
}