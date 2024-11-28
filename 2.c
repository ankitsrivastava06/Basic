#include <stdio.h>

float get_fahrenheit(float c);

float get_celsius(float f);

int main() {
    float c,f;
    scanf("%f",&c);
    scanf("%f",&f);
    float C=get_celsius(f);
    float F=get_fahrenheit(c);
    printf("CELSIUS TEMPERATURE OF FAHRENHEIT %f IS:%.2f\n",f,C);
    printf("FAHRENHEIT TEMPERATURE OF CELSIUS %f IS:%.2f",c,F);
}

float get_celsius(float f){
     return (f-32)*5/9;
}

float get_fahrenheit(float c){
    return (c*9/5)+32;
}