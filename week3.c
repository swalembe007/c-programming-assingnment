#include<stdio.h>
int main(){
int marks;
int attendance;
printf("enter your marks\t");
scanf("%d", &marks);
printf("\nEnter the attendance rate\t");
scanf("%d", & attendance);

if (attendance>=75 && marks>=40){
    printf("Eligible");
}
else {
    printf("Not eligible");
}
return 0;





}
