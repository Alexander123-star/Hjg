//program to calculate simple interest
/*
program to calculate simple interest 
Author: Alexander 
Reg no.CT101/G/19045/23
Date:29/09/2024
*/
//preprocessor-scanf(), printf()
#include<stdio.h>
int main() {
                      int principalamount=1000;
                      int time=2;
                      int rate=5;
                      int simpleinterest=(principalamount*time*rate)/100;
                      printf("the simple interest is %d", simpleinterest);
                   return 0;
                   }