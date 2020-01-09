/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on January 9, 2020, 12:37 PM
 */

#include <stdio.h>
int main()
{
    func();
    func();
    return 0;
}
void func()
{
    auto int i=0;
    register int j=0;
    static int k=0;
    i++;j++;k++;
    
    printf("%d %d %d\n",i,j,k);
}