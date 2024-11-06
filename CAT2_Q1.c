#include<stdio.h>
int main(){
float hoursWorked,hourlyWage,grossPay,taxes,netPay;
printf("enter hours worked in a week:");
scanf("%F", &hoursWorked);
printf("enter hourlyWage:");
scanf("%f", &hourlyWage);
if(hoursWorked > 40){
	float overtimeHours = hoursWorked - 40;
	grossPay = (40 * hourlyWage)+(overtimeHours * hourlyWage * 1.5);
}else{
	grossPay = hoursWorked * hourlyWage;
}	
if(grossPay <= 600){
	taxes = grossPay * 0.15;
}else{
	taxes = (600 * 0.15) + ((grossPay - 600) * 0.20);
}	
netPay = grossPay - taxes;

printf("grossPay: %.2f\n", grossPay);
printf("taxes: %.2f\n", taxes);
printf("netPay: %.2f\n", netPay);	
	
	return 0;
}
