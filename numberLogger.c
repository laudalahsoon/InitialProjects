#include<stdio.h>
#include<stdlib.h>

void main(){

FILE *ptr = fopen("file.txt" , "a+");

printf("Enter your number  ");

long long  int number;

scanf("%lld" , &number);

fprintf(ptr , "%lld\n" , number);

fclose(ptr);




}
