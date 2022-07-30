#include<stdio.h>

void main(){

FILE *ptr = fopen("file.txt" , "a+");

printf("Enter data  ");

long long  int number;

scanf("%lld" , &number);

fprintf(ptr , "%lld\n" , number);

fclose(ptr);




}
