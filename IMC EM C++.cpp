#include <stdio.h>
#include<stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() 
{
float peso, imc, altura;

printf("Digite sua altura: ");
scanf("%f", &altura);
printf("Digite seu peso: ");
scanf("%f", &peso);

imc=peso/(altura*altura);

printf("Seu imc esta em: %.2f e ", imc);



if(imc<18)
{

printf("voce esta abaixo do peso");
	
}
else{

	if(imc>=18&&imc<25){
	
	printf("seu peso esta normal");

}

else
{

	printf("vc esta acima do peso");

}

}
	
}
	



