#include <stdio.h>
main(){
	int a,b,c,d;
scanf("%d",&a);scanf("%d",&b);scanf("%d",&c);scanf("%d",&d);
	if(b>c && d>a && (c+d)>(a+b) && c>=0 && d>=0 && a%2==0){
		printf("Valores aceitos\n");}
        else
			printf("Valores nao aceitos\n");
            system("pause");}
