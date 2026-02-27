#include<stdio.h>
#include<conio.h>
#include<math.h>
  float a,b,c,h,p,x,s,delta;
  main(){
  	printf("donner la valeur de a:\t");
  	scanf("%f",&a);
  	printf("donner la valeur de b:\t");
  	scanf("%f",&b);
  	printf("donner la valeur de c:\t");
  	scanf("%f",&c);
  
  	if(a!=0){
	  	delta= b*b-4*a*c;
  	if(delta>0){
  		printf("========l'equation admet deux solutions======");
  		h=(-b+sqrt(delta))/(2*a);
  		p=(-b-sqrt(delta))/(2*a);
        printf("ensemble solution :\n ");
        printf("%f",&p);
        printf("et");
        printf("%f",&h);
	  }
	else if(delta==0){
		printf("=========l'equation admet une solution===========\n");
		x=-b/(2*a);
		printf("la solution est:%f",&x);
	}
	else {
		printf("===========l'equation admet pas de solution dans R======\n");
		printf("math error");
	}
	
  	}
  	else{
  		printf("=======l'equation est de la forme ax+b========\n");
  		s=-c/b;
  		printf("la solution est:%f\n",&s);
	  }
	return 0;  
  }
