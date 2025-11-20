#include<stdio.h>
int main(){
float weight,height,bmi;
printf("Enter your weight(in kg)\n");
scanf("%f",&weight);
printf("Enter your height(in meters)\n");
scanf("%f",&height);
bmi=weight/(height*height);
printf("Your BMI is %.2f\n",bmi);
if(bmi<18.5){
    printf("You are Underweight\n");
    }
else if(bmi>=18.5 && bmi<24.9){
        printf("You have a normal weight\n");

    }
else if(bmi>=24.8 && bmi<30){
        printf("You are Overweight\n");
    }
else{
printf("You are obese\n");
}
return 0;
}

