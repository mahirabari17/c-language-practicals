#include<stdio.h>
int main(){
float celsius;
float fahrenheit;
printf("Enter Tempetature in celsius\n");
scanf("%f",&celsius);
fahrenheit=(celsius*(9/5))+32;
printf("The value of Fahrenheit while temperature is %f celsius :%f\n",celsius,fahrenheit);
return 0;

}
