%{ 
#include<stdio.h> 
%} 
%% 
((0[1-9])|([1-2][0-9])|(3[0-1]))\/((0[1-9])|(1[0-2]))\/(19[0-9]{2}|2[0-9]{3}) 
printf("Valid"); 
.* printf("Invalid"); 
%% 
int main() 
{ 
yylex(); 
return 0; 
} 
int yywrap() 
{
