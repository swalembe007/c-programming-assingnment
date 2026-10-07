#include<stdio.h>
int main (){
 float radius, height, volume, surface_area;
 float pi=3.142;
  printf("\nEnter the radius");
  scanf("%f", &radius);
  printf("\nEnter the hieght");
  scanf("%f", &height);

  volume = pi*radius*radius*height;
  surface_area =2*pi*radius*radius +2*pi*radius*radius*height;
  printf("\nVolume of the cylinder = %.2f\n", volume);
  printf("surface area of the cylinder = %.2f\n", surface_area);
  return 0;


}
