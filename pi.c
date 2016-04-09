
#include <stdio.h> //para usar printf
#include <math.h> // para usar pow


double pi (void);

int main (void){

	printf("%f\n", pi()); // dar resultado de pi

}
		double pi (void){

			double pi = 0, area, p; //variaveis
			int x;

			for (x = 0; x <= 1000; x++){ 	// formula para calcular pi

			area= pow(-1,x) / (2*x+1); 		// calcular area
			area*=4; 						// numero que divide numero aleatorio
			p=pi;							// divisao das areas
			pi=p+area; 						// soma da area e pi
		}

		return  pi;
