/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on January 9, 2020, 12:12 PM
 */

#include <stdio.h>
int main()
{
    auto int i=1;
    {
        auto int i=2;
        {
            auto int i=3;
            printf("%d",i);
        }
        printf("%d",i);
    }
    printf("%d\n",i);
    return 0;
}
