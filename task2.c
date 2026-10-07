#include<stdio.h>
int main(){
  int age;
  float income;
 printf("Enter your age");
 scanf("%d", &age);
 printf("\nEnter your income");
 scanf("%f", &income);
 if (age >=21 && income>=21000) {
    printf("\nCongratulations you qualify for a loan");

 }
else {
    printf("\nUnfortunately, we are unable to offer you a loan at this time");
}
return 0;

}
