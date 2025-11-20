#include<stdio.h>
int main(){
int total_price=100;
int age;
printf("Enter Your Age\n");
scanf("%d",&age);
if(age<=0 && age>120){
    printf("Invalid age please add valid number\n");

}


else if(age<12){
        printf("You get free entry!!\n");

}
else if(age>60){
    printf("senior citizens have free entry\n");
}
else{
    printf("You have to pay total price to get entry\n");
}
return 0;

}



