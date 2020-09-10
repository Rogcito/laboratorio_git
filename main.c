#include <stdio.h>
#include <stdlib.h>
//Estructuras
typedef struct{
    char* nombre[20];
    char* marca[20];
    char** tipos[40];
    int MinJugadores;
    int MaxJugadores;
    char* JuegoBase[20];
}Juego;
//
//Funciones
//void ImportarArchivo(FILE*,List*);
void buscarCantJugadores(int,List*);
void buscarMarca(char*,List*);
void buscarNombre(char*,List*);
//
int main(){
    int op;
    int op2;
    while(op!=7){
        printf("1.- Importar juegos desde un archivo\n");
        printf("2.- Exportar juegos a un archivo\n");
        printf("3.- Agregar juego de forma manual\n");
        printf("4.- Buscar juegos\n");
        printf("5.- Mostrar todos los juegos\n");
        printf("6.- Mostrar extenciones\n");
        printf("7.- Finalizar programa\n");
        printf("Eliga una opcion\n");
        scanf("%d",&op);
        while((op!=1)&&(op!=2)&&(op!=3)&&(op!=4)&&(op!=5)&&(op!=6)&&(op!=7)){
            printf("Por favor ingresar una de las 7 opciones validas\n");
            scanf("%d",&op);
        }
        //Crea lista
        List* ListaJuegos= create_list();
        //
        //Abrir fichero
        //FILE* fp = fopen("archivo.csv","r");
        //
        switch(op){
            case 1:
                //ImportarArchivo(fp,Juegos);

            case 2://En procedimiento

            case 3://En procedimiento

            case 4:
                printf("1.- Buscar por cantidad de jugadores\n");
                printf("2.- Buscar por marca\n");
                printf("3.- Buscar por nombre\n");
                printf("4.- Buscar por tipo de juego\n");
                printf("5.- Buscar juego por mas de un criterio\n");
                printf("6.- Finalizar Busqueda\n");
                printf("Eliga una opcion\n");
                scanf("%d",&op2);
                while((op2!=1)&&(op2!=2)&&(op2!=3)&&(op2!=4)&&(op2!=5)&&(op2!=6)){
                    printf("Por favor, ingresar una de las 6 opciones validas\n");
                    scanf("%d",&op2);
                }
                switch(op2){
                    case 1:
                        first(ListaJuegos);
                        int cantJugadores;
                        printf("Ingrese la cantidad de jugadores para buscar\n");
                        scanf("%d",&cantJugadores);
                        buscarCantJugadores(cantJugadores,ListaJuegos);

                    case 2:
                        first(ListaJuegos);
                        char* marca[20];
                        printf("Ingresar la marca para buscar\n");
                        scanf("%s",marca);
                        buscarMarca(marca,ListaJuegos);

                    case 3:
                        first(ListaJuegos);
                        char* nombre[20];
                        printf("Ingresar nombre de juego para buscar\n");
                        scanf("%s",nombre);
                        buscarNombre(nombre,ListaJuegos);

                    case 4://En procedimiento

                    case 5://En procedimiento

                    case 6:
                        break;
                }
            case 5://En procedimiento

            case 6://En procedimiento

            case 7:
                break;
        }

    }
    printf("Finalizando Programa\n");
    return 0;
}
//Estructuras de Funciones
//void ImportarArchivo(File*fp,List*Juego){

//}
void buscarCantJugadores(int CantJugadores,List* ListaJuegos){
    List* aux=ListaJuegos;
    while(ListaJuegos!=NULL){
        if((ListaJuegos->Juego->MinJugadores<=CantJugadores)&&(ListaJuegos->Juego->MaxJugadores>=CantJugadores)){
            printf("Nombre: %s\n",ListaJuegos->Juego->nombre);
            printf("Marca: %s\n",ListaJuegos->Juego->marca);
            printf("Tipo(s): %s\n",ListaJuegos->Juego->tipo);
            printf("Minimo de Jugadores requeridos: %d\n",ListaJuegos->Juego->MinJugadores);
            printf("Maximo de Jugadores requeridos: %d\n",ListaJuegos->Juego->MinJugadores);
            printf("Juego Base: %s\n",ListaJuegos->Juego->JuegoBase);
        }
        next(ListaJuegos);
    }
}

void buscarMarca(char* marca,List* ListaJuegos){
    int ban=0;
    while(ListaJuegos!=NULL){
        if(strcmp(marca,ListaJuegos->Juego->marca)==0){
            printf("Nombre: %s\n",ListaJuegos->Juego->nombre);
            printf("Marca: %s\n",ListaJuegos->Juego->marca);
            printf("Tipo(s): %s\n",ListaJuegos->Juego->tipo);
            printf("Minimo de Jugadores requeridos: %d\n",ListaJuegos->Juego->MinJugadores);
            printf("Maximo de Jugadores requeridos: %d\n",ListaJuegos->Juego->MinJugadores);
            printf("Juego Base: %s\n",ListaJuegos->Juego->JuegoBase);
            ban=1;
        }
        next(ListaJuegos);
    }
    if(ban==0){
        printf("La marca ingresada no se encuentra disponible\n");
    }
}

void buscarNombre(char* nombre,List* ListaJuegos){
    int ban=0;
    while(ListaJuegos!=NULL){
        if(strcmp(nombre,ListaJuego->Juego->nombre)==0){
            printf("Nombre: %s\n",ListaJuegos->Juego->nombre);
            printf("Marca: %s\n",ListaJuegos->Juego->marca);
            printf("Tipo(s): %s\n",ListaJuegos->Juego->tipo);
            printf("Minimo de Jugadores requeridos: %d\n",ListaJuegos->Juego->MinJugadores);
            printf("Maximo de Jugadores requeridos: %d\n",ListaJuegos->Juego->MinJugadores);
            printf("Juego Base: %s\n",ListaJuegos->Juego->JuegoBase);
            ban=1;
        }
        next(ListaJuegos);
    }
    if(ban==0){
        printf("Juego no disponible\n");
    }
}
//
