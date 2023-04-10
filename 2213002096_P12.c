#include<stdio.h>
#include<math.h>
int main(){
	int arregloX[100], arregloY[100], sumatoriax, sumatoriay, sumatoriaxy, sumatoriaxx, nElementos, i, j, k, l, m, n, o, p, q;;
	float variableM, variableB;

	printf("Ingrese el numero de elementos que tendran los arreglos X y Y: ");
	scanf("%d",&nElementos);
	printf("\n");

	for(i=0;i<nElementos;i++){
		printf("Ingrese el elemento %d del arreglo X: ", i+1);
		scanf("%d",&arregloX[i]);
	}

	printf("El arreglo X es: \n");
	for(k=0;k<nElementos;k++){
		printf("%d  ",arregloX[k]);
	}

	for(j=0;j<nElementos;j++){
		sumatoriax+=arregloX[j];
	}
	printf("\nLa sumatoria de los elementos del arreglo x es: \n%d",sumatoriax);

	printf("\n\n");
	l=0;
	for(l=0;l<nElementos;l++){
		printf("Ingresar el elemento %d del arreglo Y: ",l+1);
		scanf("%d",&arregloY[l]);
	}

	printf("El arreglo Y es: \n");
	for(m=0;m<nElementos;m++){
		printf("%d  ",arregloY[m]);
	}

	n=0;
	sumatoriay=0;
	for(n=0;n<nElementos;n++){
		sumatoriay+=arregloY[n];
	}
	printf("\nLa sumatoria de los elementos del arreglo Y es: \n%d",sumatoriay);

	o=0;
	sumatoriaxy=0;
	for(o=0;o<nElementos;o++){
		sumatoriaxy+=arregloX[o]*arregloY[o];
	}
	printf("\n\nLa sumatoria de (x*y) es: \n%d ",sumatoriaxy);

	p=0;
	sumatoriaxx=0;
	for(p=0;p<nElementos;p++){
		sumatoriaxx+=pow(arregloX[p],2);
	}
	printf("\nLa sumatoria de x^2 es:\n%d",sumatoriaxx);

	variableM=((nElementos*sumatoriaxy)-(sumatoriax*sumatoriay))/((nElementos*sumatoriaxx)-pow(fabs(sumatoriax),2));
	printf("\n\n\nEl valor de m es: \n");
	printf("%f",variableM);
	
	variableB=((sumatoriay*sumatoriaxx)-(sumatoriax*sumatoriaxy))/((nElementos*sumatoriaxx)-(pow(fabs(sumatoriax),2)));
	printf("\n\nEl valor de b es: \n");
	printf("%f",variableB);
	return 0;
}
