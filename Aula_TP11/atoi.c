/**
 * @file atoi.c
 * @author Pedro Fonseca (pf@ua.pt)
 * @brief Demonstração da conversão de string para inteiros com atoi
 * @version 0.1
 * @date 2025-11-20
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#include <stdlib.h>

int main(){

  char *s[3];
  s[0]="123";
  s[1]="123abc";
  s[2]= "xyz42!";

  for(int i=0; i<3; i++){
    printf("String: %s\t",s[i]);
    int n = atoi(s[i]);
    printf("Value: %d\n",n);
  }

}