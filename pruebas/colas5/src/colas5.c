#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//trabajo 2


typedef struct nodo{
int dato;
struct nodo*siguiente;

}nodo;
nodo* primero=NULL;
nodo* ultimo=NULL;
int main(void) {
	for(int i=1;i<=10;i++){
		insertarnodo();
	}
	printf("\n Mostrando la cola:\n");

	mostrar();

	return 0;
}
void insertarnodo(){
nodo* nuevo=(nodo*) malloc(sizeof(nodo));
printf("\n elemento: ");
fflush(stdout);
scanf("%d",&nuevo->dato);
if(primero==NULL){
   primero=nuevo;
   primero->siguiente =NULL;
   ultimo=nuevo;
}else{
   ultimo->siguiente=nuevo;
   nuevo->siguiente=NULL;
   ultimo=nuevo;
}
}
void mostrar(){
	nodo* actual=(nodo*) malloc(sizeof(nodo));
	actual=primero;
	if(actual!=NULL){
		while(actual!=NULL){
			printf("%d \n",actual->dato);
			actual=actual->siguiente;
		}

	}else{
		printf("la cola no existe\n");
	}
}



