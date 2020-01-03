/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on January 3, 2020, 11:59 AM
 */

#include <stdio.h>
int main()
{
    int i=0;
    i++;
    if(i<=5)
    {
        printf("C adds wings to your through\n");
        exit(0);
        main();
        
    }
    return 0;
}