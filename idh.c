#include <stdio.h>
#include <math.h>

int main (){
	
	float ed, ta, tm, pib;
	float inda, indm;
	float ind1, ind2, ind3, res;
	
	printf("Este es un programa que calcula el IDH de un pais\n");
	printf("Por favor ingrese los datos que se le solicitan\n");
	
	printf("\n\tEsperanza de vida: ");
	scanf("%f",&ed);
	
	printf("\tTasa de alfabetizacion: ");
	scanf("%f",&ta);
	
	printf("\tTasa bruta combinada de matriculación: ");
	scanf("%f",&tm);
	
	printf("\tPIB per capital: ");
	scanf("%f",&pib);
	
	
	//indice de esperanza
	ind1 = (ed-25)/(85-25);
	
	//indice de educacion
	inda = (ta)/100;
	indm = (tm)/100;
	
	ind2 = (0.666*inda)+(0.333*indm);
	
	//indice PIB
	ind3 = ((log(pib))-(log(100)))/((log(40000))-(log(100)));
	
	//resultado
	
	res =(0.333*ind1)+(0.333*ind2)+(0.333*ind3);
	
	printf("\nEl IDH es: %f\n",res);
	return 0;
}
