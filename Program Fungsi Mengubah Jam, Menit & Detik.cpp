#include <stdio.h>
#include <conio.h>
 
main(){
 int sec,jam,menit,detik ;
 
 printf("Masukan jumlah detik yang mau dihitung : "); scanf("%d",&sec);
 
jam=sec / (60*60);
sec= sec-((60*60)*jam);
menit=sec / 60;
sec= sec - (60*menit);
printf("\n===============================================");
 printf("\nmaka waktunya adalah :  ");
 printf("\n Jam   : %d \n Menit : %d \n Detik : %d ",jam,menit,sec);
 
 getch();
 
 }