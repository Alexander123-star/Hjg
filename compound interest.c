//program to calculate compound interest
/*
program to calculate compound interest
Author: Alexander 
Reg no.CT101/19045/23
Date:29/09/2024
*/
//preprocessor-scanf(),printf()
#include<stdio.h>
int main() {
                     double principal=5000;
                     double rate=10;
                     double time=5;
                     int n=4;
                     int interest = (principal * pow((1 + rate / (n * 100)), n * time))-principal;
                     printf("the compound interest is %d",interest);
                     return 0;
                     }