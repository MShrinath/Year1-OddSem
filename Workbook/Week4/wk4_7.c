#include <stdio.h>
int main()
{
	float hgt, wght, bmi;
	printf("hght in m??");
	scanf("%f", &hgt);
	printf("wght in kg??");
	scanf("%f", &wght);
	bmi = wght / (hgt *hgt);
	if (bmi < 18.5){
		printf("Underweight");}
	else if (18.5 <= bmi && bmi <= 25.0){
		printf("Normal");}
	else if (25 <= bmi && bmi <= 30){
		printf("Overweight");}
	else if (30 <= bmi){
		printf("Obeese");}	
	return 0;
}