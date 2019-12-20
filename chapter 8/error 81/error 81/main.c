/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on December 5, 2019, 11:11 AM
 */

#include <stdio.h>
int addmult(int,int);
int main()

{
    int i=3,j=4,k,l;
    k = addmult(i,j);
    l = addmult(i,j);
    printf("%d %d\n",k,l);
    return 0;
}

int addmult(int ii,int jj)
{
    int kk,ll;
    kk = ii + jj;
    ll = ii * jj;
    return (kk,ll);
}
