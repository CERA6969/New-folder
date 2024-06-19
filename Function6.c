#include<stdio.h>
doublecelsiusToFahrenteit(doublecelsius){
return (celsius*9/5)+32;
}
int main(){
double celsius=100;
printf("%If degreecelcius=%If degreeFahreinheit\n",celsius,celsiusToFahrenheit(celsius));
return 0;
}
