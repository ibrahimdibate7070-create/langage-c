#include<stdio.h>
#include<conio.h>
#include<math.h>
  const float PI=3.14;
 float r,aire,a,h,b,perimetre,airet,c,perit;
   main(){
   	printf("donner le rayon du cercle: ");
   	scanf("%f",&r);
   	printf("donner la hauteur du triangle: ");
   	scanf("%f",&h);
   	printf("donner la base du triangle: ");
   	scanf("%f",&b);
   	printf("donner 1 cote du triangle: ");
   	scanf("%f",&a);
   	printf("donner 2 cote du triangle: ");
   	scanf("%f",&c);
   	airet=(h*b)/2;
   	perit=a+b+c;
   	aire=PI*r*r;
   	perimetre=2*PI*r;
   	printf("L'aire du cercle est:%f\n ",aire);
   	printf("Le perimrtre du cercle est :%f\n ",perimetre);
   	printf("l'aire du triangle est :%f\n ",airet);
   	printf("Le perimrtre du triangle est :%f\n ",perit);
   	return 0;
   }
