#include <stdio.h>
float get_simpleinterest(float P,float R,float T);

 int main(){
    float P,R,T;
    scanf("%f",&P);
    scanf("%f",&R);
    scanf("%f",&T);
    float SI=get_simpleinterest(P,R,T);
    printf("SIMPLE INTEREST IS:%f",SI);
    

}

float get_simpleinterest(float P,float R,float T){
    return (P*R*T)/100;
    
}