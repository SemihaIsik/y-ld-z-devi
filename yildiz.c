#include <stdio.h>
int main()
{
    int satir;
    printf("satir sayisi giriniz:");
    scanf("%d",&satir);
    
    for(int i=0;i<=satir;i++){
        
        for(int k=1;k<=i;k++){

            printf("*");
            
        } 
        printf("\n");
    }




return 0;
}