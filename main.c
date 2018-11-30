#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


typedef struct Registro
{
    char *nombre;
    //1:E,2:PF,3:P,4:B
    int tipoTiempo;
    int desayuno;
    int comida;
    int cena;
    int nino;
    int adulto;
    int adultoMayor;
    int deportista;
} Registro;

typedef struct Alimento
{
    char nombre[100];
} Alimento;

typedef struct Tiempo
{
    Alimento *entrada;
    int noE;
    Alimento *platoF;
    int noPF;
    Alimento *postre;
    int noP;
    Alimento *bebida;
    int noB;
} Tiempo;

typedef struct Comida
{
    Tiempo comida[3];
} Comida;

Registro *registro;
Comida datoPorUsuario[4];

    
Comida *dia;
int no[48];
int noI[48];
int noRegistros=30;

void tamanoDatos(){
    for(int i = 0; i<4; i++){
        for(int j=0; j<3; j++){
            datoPorUsuario[i].comida[j].entrada=(Alimento *)malloc(sizeof(Alimento));
            datoPorUsuario[i].comida[j].platoF=(Alimento *)malloc(sizeof(Alimento));
            datoPorUsuario[i].comida[j].postre=(Alimento *)malloc(sizeof(Alimento));
            datoPorUsuario[i].comida[j].postre=(Alimento *)malloc(sizeof(Alimento));
        }
    }
}
//IdEnRegistro(), int tipoUser,int Tiempo[DES,COM,CEN],Alimento(Bebida,etc), Contador.
void copiarRegistroDatosPorUsuario(int iNoArrayReg, int tipoUser,int tiem, int tipoTiempo, int contador){
    printf("De donde lo saco %d, lo mando a %d" ,iNoArrayReg,tipoUser);
    switch(tipoTiempo){
        case 1:
            datoPorUsuario[tipoUser].comida[tiem].entrada=(Alimento *)realloc(datoPorUsuario[tipoUser].comida[tiem].entrada,contador);
            strcpy(datoPorUsuario[tipoUser].comida[tiem].entrada[contador].nombre,registro[iNoArrayReg].nombre);
            datoPorUsuario[tipoUser].comida[tiem].noE=contador;
        break;
        case 2:
            datoPorUsuario[tipoUser].comida[tiem].platoF=(Alimento *)realloc(datoPorUsuario[tipoUser].comida[tiem].platoF,contador);
            strcpy(datoPorUsuario[tipoUser].comida[tiem].platoF[contador].nombre,registro[iNoArrayReg].nombre);
            datoPorUsuario[tipoUser].comida[tiem].noPF=contador;
        break;
        case 3:
            datoPorUsuario[tipoUser].comida[tiem].postre=(Alimento *)realloc(datoPorUsuario[tipoUser].comida[tiem].postre,contador);
            strcpy(datoPorUsuario[tipoUser].comida[tiem].postre[contador].nombre,registro[iNoArrayReg].nombre);
            datoPorUsuario[tipoUser].comida[tiem].noP=contador;
        break;
        case 4:
            datoPorUsuario[tipoUser].comida[tiem].bebida=(Alimento *)realloc(datoPorUsuario[tipoUser].comida[tiem].bebida,contador);
            strcpy(datoPorUsuario[tipoUser].comida[tiem].bebida[contador].nombre,registro[iNoArrayReg].nombre);
            datoPorUsuario[tipoUser].comida[tiem].noB=contador;
        break;
    } 
};

void leerDatos(){
    char *cadena= (char *)malloc(30*sizeof(char));
    for(int j=0; j<noRegistros;j++){
       printf("Cual es el nombre del platillo");
       scanf("%s",registro[j].nombre);
    printf("Es: 1:Entrada, 2: Plato Fuerte, 3: Postre, 4: Bebida\n");
       scanf("%d",&registro[j].tipoTiempo);
    printf("Es Desayuno? 0: No 1: Si.\n");
       scanf("%d", &registro[j].desayuno);
    printf("Es Comida? 0: No 1: Si.\n");
       scanf("%d", &registro[j].comida);
    printf("Es Cena? 0: No 1: Si.\n");
       scanf("%d", &registro[j].cena);
    printf("Es para nino? 0: No 1: Si.\n");
       scanf("%d", &registro[j].nino);
    printf("Es para adulto? 0: No 1: Si.\n");
       scanf("%d", &registro[j].adulto);
    printf("Es para adulto mayor? 0: No 1: Si.\n");
       scanf("%d", &registro[j].adultoMayor);
    printf("Es para deportista? 0: No 1: Si.\n");
       scanf("%d", &registro[j].deportista);

      /*  printf("N:%s \n T: %d \n D: %d \n C: %d \n C: %d \n N: %d \n A: %d \n AM: %d \n D: %d \n",
        registro[j].nombre,registro[j].tipoTiempo, registro[j].desayuno,registro[j].comida,
        registro[j].cena,registro[j].nino,registro[j].adulto, registro[j].adultoMayor, registro[j].deportista); */
    } 

    for(int j=0;j<noRegistros;j++){
            printf("N:%s \n T: %d \n D: %d \n C: %d \n C: %d \n N: %d \n A: %d \n AM: %d \n D: %d \n",
        registro[j].nombre,registro[j].tipoTiempo, registro[j].desayuno,registro[j].comida,
        registro[j].cena,registro[j].nino,registro[j].adulto, registro[j].adultoMayor, registro[j].deportista);
    }
}

void cargarDatos(){
    for( int a=0; a<48;a++ ){
        no[a]=0;
    }
    //contar tamaño registro por alimento
        for(int i =0; i<noRegistros;i++){
            printf("%d",noRegistros);
        if(registro[i].nino==1){
            if(registro[i].desayuno==1){
                switch(registro[i].tipoTiempo){
                    case 1:
                    no[0]++;
                    //IdReg,TipoUser,Tiempo,BebPost,Contador
                        copiarRegistroDatosPorUsuario(i,0,1,1,no[0]);
                    break;
                    case 2:
                    no[1]++;
                        copiarRegistroDatosPorUsuario(i,0,1,2,no[1]);
                    break;
                    case 3:
                    no[2]++;
                        copiarRegistroDatosPorUsuario(i,0,1,3,no[2]);
                    break;
                    case 4:
                    no[3]++;
                        copiarRegistroDatosPorUsuario(i,0,1,4,no[3]);
                    break;
                    default:
                        printf("Algo raro ocurrio.");
                    break;
                }
            };
            if(registro[i].comida==1){
                switch(registro[i].tipoTiempo){
                    case 1:
                    no[4]++;
                        copiarRegistroDatosPorUsuario(i,0,2,1,no[4]);
                    break;
                    case 2:
                    no[5]++;
                        copiarRegistroDatosPorUsuario(i,0,2,2,no[5]);
                    break;
                    case 3:
                    no[6]++;
                        copiarRegistroDatosPorUsuario(i,0,2,3,no[6]);
                    break;
                    case 4:
                    no[7]++;
                        copiarRegistroDatosPorUsuario(i,0,2,4,no[7]); 
                    break;
                    default:
                        printf("Algo raro ocurrio.");
                    break;
                }
            };
            if(registro[i].cena==1){
                switch(registro[i].tipoTiempo){
                    case 1:
                    no[8]++;
                        copiarRegistroDatosPorUsuario(i,0,3,1,no[8]);
                    break;
                    case 2:
                    no[9]++;
                        copiarRegistroDatosPorUsuario(i,0,3,2,no[9]);
                    break;
                    case 3:
                    no[10]++;
                        copiarRegistroDatosPorUsuario(i,0,3,3,no[10]);
                    break;
                    case 4:
                    no[11]++;
                        copiarRegistroDatosPorUsuario(i,0,3,4,no[11]);
                    break;
                    default:
                        printf("Algo raro ocurrio.");
                    break;
                }
            };
            };
        if(registro[i].adulto==1){
           if(registro[i].desayuno==1){
                switch(registro[i].tipoTiempo){
                    case 1:
                    no[12]++; 
                    copiarRegistroDatosPorUsuario(i,1,1,1,no[12]);
                    break;
                    case 2:
                    no[13]++;
                    copiarRegistroDatosPorUsuario(i,1,1,2,no[13]);
                    break;
                    case 3:
                    no[14]++;
                    copiarRegistroDatosPorUsuario(i,1,1,3,no[14]);
                    break;
                    case 4:
                    no[15]++;
                    copiarRegistroDatosPorUsuario(i,1,1,4,no[15]);
                    break;
                    default:
                        printf("Algo raro ocurrio.");
                    break;
                }
            };

            if(registro[i].comida==1){
                switch(registro[i].tipoTiempo){
                    case 1:
                    no[16]++;
                    copiarRegistroDatosPorUsuario(i,1,2,1,no[16]);
                    break;
                    case 2:
                    no[17]++;
                    copiarRegistroDatosPorUsuario(i,1,2,2,no[17]);
                    break;
                    case 3:
                    no[18]++;
                    copiarRegistroDatosPorUsuario(i,1,2,3,no[18]);                    
                    break;
                    case 4:
                    no[19]++;
                    copiarRegistroDatosPorUsuario(i,1,2,4,no[19]);
                    break;
                    default:
                        printf("Algo raro ocurrio.");
                    break;
                }
            };
            if(registro[i].cena==1){
                switch(registro[i].tipoTiempo){
                    case 1:
                    no[20]++;
                    copiarRegistroDatosPorUsuario(i,1,3,1,no[20]);
                    break;
                    case 2:
                    no[21]++;
                    copiarRegistroDatosPorUsuario(i,1,3,2,no[21]);
                    break;
                    case 3:
                    no[22]++;
                    copiarRegistroDatosPorUsuario(i,1,3,3,no[22]);
                    break;
                    case 4:
                    no[23]++; 
                    copiarRegistroDatosPorUsuario(i,1,3,4,no[23]);
                    break;
                    default:
                        printf("Algo raro ocurrio.");
                    break;
                }
            };
        };
        if(registro[i].adultoMayor==1){
            if(registro[i].desayuno==1){
                switch(registro[i].tipoTiempo){
                    case 1:
                    no[24]++; 
                    copiarRegistroDatosPorUsuario(i,2,1,1,no[24]);
                    break;
                    case 2:
                    no[25]++;
                    copiarRegistroDatosPorUsuario(i,2,1,2,no[25]);
                    break;
                    case 3:
                    no[26]++;
                    copiarRegistroDatosPorUsuario(i,2,1,3,no[26]);
                    break;
                    case 4:
                    no[27]++; 
                    copiarRegistroDatosPorUsuario(i,2,1,4,no[27]);
                    break;
                    default:
                        printf("Algo raro ocurrio.");
                    break;
                }
            };
            if(registro[i].comida==1){
                switch(registro[i].tipoTiempo){
                    case 1:
                    no[28]++;
                    copiarRegistroDatosPorUsuario(i,2,2,1,no[28]); 
                    break;
                    case 2:
                    no[29]++;
                    copiarRegistroDatosPorUsuario(i,2,2,2,no[29]);
                    break;
                    case 3:
                    no[30]++;
                    copiarRegistroDatosPorUsuario(i,2,2,3,no[30]);
                    break;
                    case 4:
                    no[31]++; 
                    copiarRegistroDatosPorUsuario(i,2,2,4,no[31]);
                    break;
                    default:
                        printf("Algo raro ocurrio.");
                    break;
                }
            };
            if(registro[i].cena==1){
                switch(registro[i].tipoTiempo){
                    case 1:
                    no[32]++;
                    copiarRegistroDatosPorUsuario(i,2,3,1,no[32]); 
                    break;
                    case 2:
                    no[33]++;
                    copiarRegistroDatosPorUsuario(i,2,3,2,no[33]); 
                    break;
                    case 3:
                    no[34]++; 
                    copiarRegistroDatosPorUsuario(i,2,3,3,no[34]); 
                    break;
                    case 4:
                    no[35]++; 
                    copiarRegistroDatosPorUsuario(i,2,3,3,no[35]); 
                    break;
                    default:
                        printf("Algo raro ocurrio.");
                    break;
                }
            };        
        };
        if(registro[i].deportista==1){
            if(registro[i].desayuno==1){
                switch(registro[i].tipoTiempo){
                    case 1:
                    no[36]++; 
                    copiarRegistroDatosPorUsuario(i,3,1,1,no[36]);
                    break;
                    case 2:
                    no[37]++;
                    copiarRegistroDatosPorUsuario(i,3,1,2,no[37]);
                    break;
                    case 3:
                    no[38]++;
                    copiarRegistroDatosPorUsuario(i,3,1,3,no[38]); 
                    break;
                    case 4:
                    no[39]++; 
                    copiarRegistroDatosPorUsuario(i,3,1,4,no[39]);
                    break;
                    default:
                        printf("Algo raro ocurrio.");
                    break;
                }
            };
            if(registro[i].comida==1){
                switch(registro[i].tipoTiempo){
                    case 1:
                    no[40]++; 
                    copiarRegistroDatosPorUsuario(i,3,2,1,no[40]);
                    break;
                    case 2:
                    no[41]++;
                    copiarRegistroDatosPorUsuario(i,3,2,2,no[41]);
                    break;
                    case 3:
                    no[42]++; 
                    copiarRegistroDatosPorUsuario(i,3,2,3,no[42]);
                    break;
                    case 4:
                    no[43]++; 
                    copiarRegistroDatosPorUsuario(i,3,2,4,no[43]);
                    break;
                    default:
                        printf("Algo raro ocurrio.");
                    break;
                }
            };
            if(registro[i].cena==1){
                switch(registro[i].tipoTiempo){
                    case 1:
                    no[44]++; 
                    copiarRegistroDatosPorUsuario(i,3,3,1,no[44]);
                    break;
                    case 2:
                    no[45]++;
                    copiarRegistroDatosPorUsuario(i,3,3,2,no[45]);
                    break;
                    case 3:
                    no[46]++; 
                    copiarRegistroDatosPorUsuario(i,3,3,3,no[46]);
                    break;
                    case 4:
                    no[47]++; 
                    copiarRegistroDatosPorUsuario(i,3,3,4,no[47]);
                    break;
                    default:
                        printf("Algo raro ocurrio.");
                    break;
                }
            };
        };
        }; 
};

int randomV(int n)
{
    srand(time(0));
    return rand()%n+1;
}

void calcularDieta(char *nombre, int tipo, int temporalidad){
    if((tipo<1)||(tipo>4)){
        printf("Introduciste mal el tipo de usuario\n");
    }else{
        if((temporalidad<1)||(temporalidad>2)){
            printf("Introduciste mal si es dia o semana\n");
        }else{
            temporalidad=(temporalidad==1)?1:7;
            printf("%d", temporalidad);
            dia=(Comida *)malloc(temporalidad*sizeof(Comida));
            printf("Entro al metodo");
            for(int i=0; i<temporalidad;i++){
                for(int j=0; j<3;j++){
                    dia[i].comida[j].postre=(Alimento *)malloc(sizeof(Alimento));
                    dia[i].comida[j].platoF=(Alimento *)malloc(sizeof(Alimento));
                    dia[i].comida[j].entrada=(Alimento *)malloc(sizeof(Alimento));
                    dia[i].comida[j].bebida=(Alimento *)malloc(sizeof(Alimento));                    
                }
            }
            printf("Asigno memoria");
            for(int i=0; i<temporalidad;i++){
                for(int j=0; j<3;j++){
                    printf("Al fin");
                        //int a = randomV(no[(12*tipo)+(j*3)+0]);
                        //printf("S:%s", datoPorUsuario[tipo].comida[j].entrada[1].nombre);
                        strcpy(dia[i].comida[j].entrada[0].nombre, datoPorUsuario[tipo].comida[j].entrada[rand()].nombre);
                        strcpy(dia[i].comida[j].platoF[0].nombre, datoPorUsuario[tipo].comida[j].entrada[rand()].nombre);
                        strcpy(dia[i].comida[j].postre[0].nombre, datoPorUsuario[tipo].comida[j].entrada[rand()].nombre);
                        strcpy(dia[i].comida[j].bebida[0].nombre, datoPorUsuario[tipo].comida[j].entrada[rand()].nombre);
                
               }
            }
            

            //imprimir
            printf("\nDieta de %s.\n",nombre);
            for(int i=0; i<temporalidad;i++){
                printf("\nDia %d\n",i);
                for(int j=0; j<3;j++){
                    if (j==0)
                    {
                        printf("\nDesayuno:\n");
                    }else if(j==1)
                    {
                        printf("\nComida:\n");
                    }else if(j==2)
                    {
                        printf("\nCena:\n");
                    }
                    printf("\nEntrada",dia[i].comida[j].entrada[0].nombre);
                    printf("\nPlato Fuerte",dia[i].comida[j].platoF[0].nombre);
                    printf("\nPostre:",dia[i].comida[j].postre[0].nombre);
                    printf("\nBebida:\n",dia[i].comida[j].bebida[0].nombre);              
                }
            }
        
            
        }
    }
    //printf("Gracias por usar el dietificador\n");

};

int main()
{
    //leer archivos
    leerDatos();
    //asignar los STRUCTS
    //Crear Menú.
    int opcion;
    do
    {
        opcion = 0;
        printf("\n1.-Crear Dieta.\n2.-Salir");
        scanf("%d", &opcion);
        switch (opcion)
        {
        case 1:
            opcion=0;
            int tipo=0;
            int temporalidad=0;
            char c, *nombre;
            int i=0;
            nombre = "Amigo";
            nombre=(char *)malloc((30)*sizeof(char));
            if (nombre==NULL) exit (1);
            printf("Elige el nombre del usuario para quien se generara la dieta.\n");
            scanf("%s",nombre);
            printf("%s", nombre);
                //nombre[i]=0;
            printf("Elige el tipo de usuario para quien se generara la dieta.\n");
            printf("1.-Nino.\n2.Adulto.\n3.-Adulto Mayor.\n4.-Deportista.\n");
            scanf("%d",&tipo);
            printf("La dieta será por: \n 1.-semana \n 2.-d%ca\n",161);
            scanf("%d",&temporalidad);
            calcularDieta(nombre, tipo,temporalidad);
            printf("\n\nVolver a calcular \n 1:Si \n 2:No");
            scanf("%d",&opcion);
            opcion=(opcion==1)?0:3;
            break;
        case 2:
            printf("Gracias por usarme.\n");
            opcion = 3;
            break;
        default:
            printf("Elegiste la opción %d la cual no estaba definida\n", opcion);
            opcion =3;
            break;
        }
    } while (opcion != 3);

    return 0;
};