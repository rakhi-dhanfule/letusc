/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on December 23, 2019, 11:19 AM
 */

#include <stdio.h>

int main() {
    int i = 3, *j, **k;
    j = &i;
    k = &j;

    printf("Address of i= %u\n", &i);
    printf("Address of i= %u\n", j);
    printf("Address of i= %u\n", *k);
    printf("Address of j= %u\n", &j);
    printf("Address of j= %u\n", k);
    printf("Address of k= %u\n", &k);
    printf("Value of j= %u\n", j);
    printf("Value of k= %u\n", k);
    printf("Value of i= %d\n", i);
    printf("Value of i= %d\n", *(&i));
    printf("Value of i= %d\n", *j);
    printf("Value of i= %d\n", **k);
    return 0;




}