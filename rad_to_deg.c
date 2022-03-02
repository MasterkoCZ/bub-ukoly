#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float uhel = 1;

float deg_to_rad(float x){
    x = x * 0.0174532925;
    return x;
}

float rad_to_deg(float x){
    x = x / 0.0174532925;
    return x;
}

int main(){
    for(float i = 0; i <= 360; i += 30){
        printf("%f; %f; %f; %f \n", i, deg_to_rad(i), sin(deg_to_rad(i)), cos(deg_to_rad(i)));
    }
    return 0;
}