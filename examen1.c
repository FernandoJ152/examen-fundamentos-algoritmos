#include <stdio.h>

/*La empresa TuMalla.com es fabricante de todo tipo de mallas deportivas.  Entre sus productos estrellas se encuentran las mallas de tenis y las mallas de béisbol. La gerencia requiere controlar las ventas por día de acuerdo a las siguientes políticas: 
Si el cliente tiene más de 5 años como comprador de mallas para béisbol, tendrá un descuento del 8%.
Si el comprador es de malla para tenis tendrá un descuento del 6%.
El cliente que tenga un tiempo menor o igual a 5 años no tendrá descuento. 
Si el cliente tiene más de 15 años tendrá un descuento de 30%. 
El costo de las mallas para béisbol son de 50$ x metro. 
Y el costo de las mallas para tenis es de 80$ x metro. 
Determine:
-El costo de la compra por cliente.
-El ingreso recibido por la empresa.
-La cantidad de mallas para Béisbol vendidas.
-La cantidad de mallas para tenis vendidas.
-Cual de las dos mallas se vendió más.
-Total de cliente que obtuvieron descuento.
-Cantidad total del descuento.
-Total de compras.*/

int clientes, i, yBeisbol, yTenis, sumDesc = 0;
float metBeisbol, metTenis, costoBeisbol, costoTenis, sumBeisbol = 0, sumTenis = 0, totalDesc, descBeisbol, descTenis, costoCompra, totalBeisbol = 0, totalTenis = 0, totalCompras = 0, descuento, ingresoCompra;

int main(){
	printf("Ingrese cantidad de clientes para el dia actual: ");
	do{
	scanf("%d", &clientes);
	if(clientes < 1){
		printf("Valor invalido\n");
		}
	}
	while(clientes < 1);
	for(i = 1; i <= clientes; i++){
	printf("\nCLIENTE NUMERO %d\n\nIngrese cantidad de mallas de beisbol compradas en metros: ", i);
	do{
	scanf("%f", &metBeisbol);
	if(metBeisbol <= 0){
		printf("Valor invalido\n");
		}
	}
	while(metBeisbol <= 0);
	totalBeisbol = totalBeisbol + metBeisbol;
	costoBeisbol = metBeisbol * 50;
	sumBeisbol = sumBeisbol + costoBeisbol;
	printf("Ingrese cantidad de mallas de tenis compradas en metros: ");
	do{
	scanf("%f", &metTenis);
	if(metTenis <= 0){
		printf("Valor invalido\n");
		}
	}
	while(metTenis <= 0);
	totalTenis = totalTenis + metTenis;
	costoTenis = metTenis * 80;
	sumTenis = sumTenis + costoTenis;
	printf("Ingrese cantidad de años comprando mallas de beisbol: ");
	do{
	scanf("%f", &yBeisbol);
	if(yBeisbol < 0){
		printf("Valor invalido\n");
		}
	}
	while(yBeisbol < 0);
	descBeisbol = costoBeisbol;
		if(yBeisbol > 5 && yBeisbol <= 15){
			descBeisbol = costoBeisbol * 0.92;
			}
			if(yBeisbol > 15){
				descBeisbol = costoBeisbol * 0.7;
				}
	printf("Ingrese cantidad de años comprando mallas de tenis: ");
	do{
	scanf("%f", &yTenis);
	if(yTenis < 0){
		printf("Valor invalido\n");
		}
	}
	while(yTenis < 0);
	descTenis = costoTenis;
	if(yTenis > 5 && yTenis <= 15){
			descTenis = costoTenis * 0.94;
			}
			if(yTenis  > 15){
				descTenis = costoTenis * 0.7;
				}
	costoCompra = costoBeisbol + costoTenis;
	totalCompras = totalCompras + costoCompra;
	ingresoCompra = descTenis + descBeisbol;
	descuento = costoCompra - ingresoCompra; 
	if(yBeisbol > 5 || yTenis > 5){
		sumDesc++;
		}
		printf("DATOS CLIENTE %d:\n\nCosto de la compra: %.2f\nDescuento: %.2f\nIngreso total: %.2f", i, costoCompra, descuento, ingresoCompra);
	}
	printf("\nDATOS FINALES\n\nCantidad de mallas de beisbol vendidas: %.2f\nCantidad de mallas de tenis vendidas: %.2f\nMalla mas vendida: ",totalBeisbol, totalTenis);
	if(totalBeisbol > totalTenis){
		printf("Beisbol");
		}
		if(totalBeisbol < totalTenis){
		printf("Tenis");
		}
		else{
		printf("Ninguna");
		}
		printf("\nTotal de compras: %.2f", totalCompras);
	return 0;
}