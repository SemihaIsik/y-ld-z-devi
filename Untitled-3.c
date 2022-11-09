#include <stdio.h>
int main(){
int yds;
int ales;
int mezuniyetOrt;
    printf("yds puaninizi giriniz:");
    scanf("%d",&yds);
    printf("ales puaninizi giriniz:");
    scanf("%d",&ales);
    printf("mezuniyet ortalamanizi giriniz:");
    scanf("%d",&mezuniyetOrt);
         if(yds>=70 && (yds+mezuniyetOrt+ales)/3>=60){

            printf("gectiniz");

         }

         else{
            printf("kaldiniz");
         }
return 0;











}