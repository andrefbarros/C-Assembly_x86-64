#include <stdio.h>
#include "asm.h"

int op1=0, op2=0;
extern int op3;
extern int op4;

int main(void) {
printf("Valor op1:");
scanf("%d",&op1);
printf("Valor op2:");
scanf("%d",&op2);
printf("Valor op3:");
scanf("%d",&op3);
printf("Valor op4:");
scanf("%d",&op4);

long n = sum_v3();

printf("sum = %li:0x%lx\n", n,n);
return 0;
}