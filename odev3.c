#include <stdio.h> 

int main() { 
    float boy;
    float kilo;
    float vucutKitleIndeksi;

    printf("boyunuzu giriniz(m):");
    scanf("%f",&boy);

    printf("kilonuzu giriniz(kg):");
    scanf("%f",&kilo);


    vucutKitleIndeksi = kilo/(boy*boy);

    if(vucutKitleIndeksi>=30){
        printf("obez");
    }else if(25<=vucutKitleIndeksi && 30>vucutKitleIndeksi){
        printf("fazla kilolu");
    }else if(18.5<=vucutKitleIndeksi && vucutKitleIndeksi<25){
        printf("normal kilolu");
    }else if(vucutKitleIndeksi<18.5){
        printf("dusuk kilolu");
    }
return 0;
}