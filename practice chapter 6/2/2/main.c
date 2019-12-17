/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on December 17, 2019, 11:35 AM
 */

#include <stdio.h>
int main()
{
    int n1=0,n2=0,n3=0;
    
    for(n1=1;n1<=3;n1++)
    {
        for(n2=1;n2<=3;n2++)
        {
            for(n3=1;n3<=3;n3++)
            {
                if(n1!=n2 && n2!=n3 && n3!=n1)
                {
                    printf("%d %d %d\n",n1,n2,n3);
                }
            }
        }
    }
      return 0;
}