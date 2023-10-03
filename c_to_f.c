#include <stdio.h>

float tempConvert(float celsius){
	float res; 
	res = celsius * 1.8 + 32; 
	return res;
}

char* analysis(float temp){
	if(temp >= 100){
		return "Warning: Heat Wave!";
	}else if( temp >= 80){
		return "Hot";
	}else if( temp >= 41){
		return "Normal";
	}else if( temp >= 10){
		return "Cold";
	}else{
		return "Very Cold!";
	}
}


int main(void)
{
	float tempC;
	float tempF; 
	printf("Please input a temperature in Celsius:");
	scanf("%f", &tempC);
	tempF = tempConvert(tempC);

	char *report = analysis(tempF);

	printf("%s \n", report);

}
