#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int noRegistros=22;
typedef struct Registro
{
    char nombre[30];
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

struct arregloRegistros{
    Registro renglon[22];
}   registro;

void inicializar(){
    /* strcpy(registro.renglon[numeroregistros+1].nombre,"");
    registro.renglon[].tipoTiempo=1;
    registro.renglon[].desayuno=1;
    registro.renglon[].comida=1;
    registro.renglon[].cena=1;
    registro.renglon[].nino=1;
    registro.renglon[].adulto=1;
    registro.renglon[].adultoMayor=;1
    registro.renglon[].deportista=; 1*/
     strcpy(registro.renglon[0].nombre,"Leche");
    registro.renglon[0].tipoTiempo=4;
    registro.renglon[0].desayuno=1;
    registro.renglon[0].comida=1;
    registro.renglon[0].cena=1;
    registro.renglon[0].nino=1;
    registro.renglon[0].adulto=1;
    registro.renglon[0].adultoMayor=1;
    registro.renglon[0].deportista=1;
     strcpy(registro.renglon[1].nombre,"Melon");
    registro.renglon[1].tipoTiempo=3;
    registro.renglon[1].desayuno=1;
    registro.renglon[1].comida=1;
    registro.renglon[1].cena=1;
    registro.renglon[1].nino=1;
    registro.renglon[1].adulto=1;
    registro.renglon[1].adultoMayor=1;
    registro.renglon[1].deportista=1;
     strcpy(registro.renglon[2].nombre,"Sandia");
    registro.renglon[2].tipoTiempo=2;
    registro.renglon[2].desayuno=1;
    registro.renglon[2].comida=1;
    registro.renglon[2].cena=1;
    registro.renglon[2].nino=1;
    registro.renglon[2].adulto=1;
    registro.renglon[2].adultoMayor=1;
    registro.renglon[2].deportista=1;
     strcpy(registro.renglon[3].nombre,"Licuado de fresa");
    registro.renglon[3].tipoTiempo=1;
    registro.renglon[3].desayuno=1;
    registro.renglon[3].comida=1;
    registro.renglon[3].cena=1;
    registro.renglon[3].nino=1;
    registro.renglon[3].adulto=1;
    registro.renglon[3].adultoMayor=1;
    registro.renglon[3].deportista=1;
     strcpy(registro.renglon[4].nombre,"Pollo en salsa verde");
    registro.renglon[4].tipoTiempo=4;
    registro.renglon[4].desayuno=1;
    registro.renglon[4].comida=1;
    registro.renglon[4].cena=1;
    registro.renglon[4].nino=1;
    registro.renglon[4].adulto=1;
    registro.renglon[4].adultoMayor=1;
    registro.renglon[4].deportista=1;
     strcpy(registro.renglon[5].nombre,"Turron");
    registro.renglon[5].tipoTiempo=3;
    registro.renglon[5].desayuno=1;
    registro.renglon[5].comida=1;
    registro.renglon[5].cena=1;
    registro.renglon[5].nino=1;
    registro.renglon[5].adulto=1;
    registro.renglon[5].adultoMayor=1;
    registro.renglon[5].deportista=1;
     strcpy(registro.renglon[6].nombre,"Gelatina");
    registro.renglon[6].tipoTiempo=2;
    registro.renglon[6].desayuno=1;
    registro.renglon[6].comida=1;
    registro.renglon[6].cena=1;
    registro.renglon[6].nino=1;
    registro.renglon[6].adulto=1;
    registro.renglon[6].adultoMayor=1;
    registro.renglon[6].deportista=1;
    strcpy(registro.renglon[7].nombre,"Papaya");
    registro.renglon[7].tipoTiempo=1;
    registro.renglon[7].desayuno=1;
    registro.renglon[7].comida=1;
    registro.renglon[7].cena=1;
    registro.renglon[7].nino=1;
    registro.renglon[7].adulto=1;
    registro.renglon[7].adultoMayor=1;
    registro.renglon[7].deportista=1;
    strcpy(registro.renglon[8].nombre,"Pepino");
    registro.renglon[8].tipoTiempo=4;
    registro.renglon[8].desayuno=1;
    registro.renglon[8].comida=1;
    registro.renglon[8].cena=1;
    registro.renglon[8].nino=1;
    registro.renglon[8].adulto=1;
    registro.renglon[8].adultoMayor=1;
    registro.renglon[8].deportista=1;
    strcpy(registro.renglon[9].nombre,"Asado");
    registro.renglon[9].tipoTiempo=3;
    registro.renglon[9].desayuno=1;
    registro.renglon[9].comida=1;
    registro.renglon[9].cena=1;
    registro.renglon[9].nino=1;
    registro.renglon[9].adulto=1;
    registro.renglon[9].adultoMayor=1;
    registro.renglon[9].deportista=1;
    strcpy(registro.renglon[10].nombre,"Bisteck");
    registro.renglon[10].tipoTiempo=3;
    registro.renglon[10].desayuno=1;
    registro.renglon[10].comida=1;
    registro.renglon[10].cena=1;
    registro.renglon[10].nino=1;
    registro.renglon[10].adulto=1;
    registro.renglon[10].adultoMayor=1;
    registro.renglon[10].deportista=1;
    strcpy(registro.renglon[11].nombre,"Salmon");
    registro.renglon[11].tipoTiempo=2;
    registro.renglon[11].desayuno=1;
    registro.renglon[11].comida=1;
    registro.renglon[11].cena=1;
    registro.renglon[11].nino=1;
    registro.renglon[11].adulto=1;
    registro.renglon[11].adultoMayor=1;
    registro.renglon[11].deportista=1;
    strcpy(registro.renglon[12].nombre,"Curry");
    registro.renglon[12].tipoTiempo=1;
    registro.renglon[12].desayuno=1;
    registro.renglon[12].comida=1;
    registro.renglon[12].cena=1;
    registro.renglon[12].nino=1;
    registro.renglon[12].adulto=1;
    registro.renglon[12].adultoMayor=1;
    registro.renglon[12].deportista=1;
    strcpy(registro.renglon[13].nombre,"Albondigas");
    registro.renglon[13].tipoTiempo=4;
    registro.renglon[13].desayuno=1;
    registro.renglon[13].comida=1;
    registro.renglon[13].cena=1;
    registro.renglon[13].nino=1;
    registro.renglon[13].adulto=1;
    registro.renglon[13].adultoMayor=1;
    registro.renglon[13].deportista=1;
    strcpy(registro.renglon[14].nombre,"Agua");
    registro.renglon[14].tipoTiempo=3;
    registro.renglon[14].desayuno=1;
    registro.renglon[14].comida=1;
    registro.renglon[14].cena=1;
    registro.renglon[14].nino=1;
    registro.renglon[14].adulto=1;
    registro.renglon[14].adultoMayor=1;
    registro.renglon[14].deportista=1;
    strcpy(registro.renglon[15].nombre,"Limonada");
    registro.renglon[15].tipoTiempo=2;
    registro.renglon[15].desayuno=1;
    registro.renglon[15].comida=1;
    registro.renglon[15].cena=1;
    registro.renglon[15].nino=1;
    registro.renglon[15].adulto=1;
    registro.renglon[15].adultoMayor=1;
    registro.renglon[15].deportista=1;
    strcpy(registro.renglon[16].nombre,"Malteada");
    registro.renglon[16].tipoTiempo=1;
    registro.renglon[16].desayuno=1;
    registro.renglon[16].comida=1;
    registro.renglon[16].cena=1;
    registro.renglon[16].nino=1;
    registro.renglon[16].adulto=1;
    registro.renglon[16].adultoMayor=1;
    registro.renglon[16].deportista=1;
    strcpy(registro.renglon[17].nombre,"Cafe");
    registro.renglon[17].tipoTiempo=4;
    registro.renglon[17].desayuno=1;
    registro.renglon[17].comida=1;
    registro.renglon[17].cena=1;
    registro.renglon[17].nino=1;
    registro.renglon[17].adulto=1;
    registro.renglon[17].adultoMayor=1;
    registro.renglon[17].deportista=1;
    strcpy(registro.renglon[18].nombre,"Te");
    registro.renglon[18].tipoTiempo=3;
    registro.renglon[18].desayuno=1;
    registro.renglon[18].comida=1;
    registro.renglon[18].cena=1;
    registro.renglon[18].nino=1;
    registro.renglon[18].adulto=1;
    registro.renglon[18].adultoMayor=1;
    registro.renglon[18].deportista=1;
    strcpy(registro.renglon[19].nombre,"Arroz");
    registro.renglon[19].tipoTiempo=2;
    registro.renglon[19].desayuno=1;
    registro.renglon[19].comida=1;
    registro.renglon[19].cena=1;
    registro.renglon[19].nino=1;
    registro.renglon[19].adulto=1;
    registro.renglon[19].adultoMayor=1;
    registro.renglon[19].deportista=1;
    strcpy(registro.renglon[20].nombre,"Sopa");
    registro.renglon[20].tipoTiempo=1;
    registro.renglon[20].desayuno=1;
    registro.renglon[20].comida=1;
    registro.renglon[20].cena=1;
    registro.renglon[20].nino=1;
    registro.renglon[20].adulto=1;
    registro.renglon[20].adultoMayor=1;
    registro.renglon[20].deportista=1;
    strcpy(registro.renglon[21].nombre,"Caldo");
    registro.renglon[21].tipoTiempo=4;
    registro.renglon[21].desayuno=1;
    registro.renglon[21].comida=1;
    registro.renglon[21].cena=1;
    registro.renglon[21].nino=1;
    registro.renglon[21].adulto=1;
    registro.renglon[21].adultoMayor=1;
    registro.renglon[21].deportista=1;
}
    

     
    //Registro registro[60];


Registro copiarRegistro(Registro original){
    Registro copia;
    strcpy(copia.nombre,original.nombre);
    copia.tipoTiempo=original.tipoTiempo;
    copia.nino=original.nino;
    copia.desayuno= original.desayuno;
    copia.deportista= original.deportista;
    copia.comida=original.comida;
    copia.cena= original.cena;
    copia.adultoMayor=original.adultoMayor;
    copia.adulto=original.adulto;
    return copia;
}

int randomV(int n)
{
    srand(time(0));
    return rand()%3;
}

void calcularDieta(char nombre[30], int tipo, int diaSemana){
    int d[12];
    for(int i=0;i<12;i++){
        d[i]=0;
    }
    Registro dbebidas[10];
    Registro dentrada[10];
    Registro dpostre[10];
    Registro dplatoFuerte[10];
    Registro cbebidas[10];
    Registro centrada[10];
    Registro cpostre[10];
    Registro cplatoFuerte[10];
    Registro nbebidas[15];
    Registro nentrada[10];
    Registro npostre[10];
    Registro nplatoFuerte[10];

    switch(tipo){
        case 1:
        for(int i=0;i<noRegistros;i++){
            if(registro.renglon[i].nino==1){
                if(registro.renglon[i].desayuno==1){
                    switch(registro.renglon[i].tipoTiempo){
                        case 1:
                            dentrada[d[0]]=copiarRegistro(registro.renglon[i]);
                            d[0]++;    
                        break;
                        case 2:
                            dplatoFuerte[d[1]]=copiarRegistro(registro.renglon[i]);
                            d[1]++;   
                        break;
                        case 3:
                            dpostre[d[2]]=copiarRegistro(registro.renglon[i]);
                            d[2]++;   
                        break;
                        case 4:
                            dbebidas[d[3]]=copiarRegistro(registro.renglon[i]);
                            d[3]++;   
                        break;
                    }  
                }
                if(registro.renglon[i].comida==1){
                     switch(registro.renglon[i].tipoTiempo){
                        case 1:
                            centrada[d[4]]=copiarRegistro(registro.renglon[i]);
                            d[4]++;    
                        break;
                        case 2:
                            cplatoFuerte[d[5]]=copiarRegistro(registro.renglon[i]);
                            d[5]++;   
                        break;
                        case 3:
                            cpostre[d[6]]=copiarRegistro(registro.renglon[i]);
                            d[6]++;   
                        break;
                        case 4:
                            cbebidas[d[7]]=copiarRegistro(registro.renglon[i]);
                            d[7]++;   
                        break;
                    }
                }
                if(registro.renglon[i].cena==1){
                     switch(registro.renglon[i].tipoTiempo){
                        case 1:
                            nentrada[d[8]]=copiarRegistro(registro.renglon[i]);
                            d[8]++;    
                        break;
                        case 2:
                            nplatoFuerte[d[9]]=copiarRegistro(registro.renglon[i]);
                            d[9]++;   
                        break;
                        case 3:
                            npostre[d[10]]=copiarRegistro(registro.renglon[i]);
                            d[10]++;   
                        break;
                        case 4:
                            nbebidas[d[11]]=copiarRegistro(registro.renglon[i]);
                            d[11]++;   
                        break;
                    }
                }
            }
        }
        break;
        case 2:
        for(int i=0;i<noRegistros;i++){
            if(registro.renglon[i].adulto==1){
                if(registro.renglon[i].desayuno==1){
                    switch(registro.renglon[i].tipoTiempo){
                        case 1:
                            dentrada[d[0]]=copiarRegistro(registro.renglon[i]);
                            d[0]++;    
                        break;
                        case 2:
                            dplatoFuerte[d[1]]=copiarRegistro(registro.renglon[i]);
                            d[1]++;   
                        break;
                        case 3:
                            dpostre[d[2]]=copiarRegistro(registro.renglon[i]);
                            d[2]++;   
                        break;
                        case 4:
                            dbebidas[d[3]]=copiarRegistro(registro.renglon[i]);
                            d[3]++;   
                        break;
                    }  
                }
                if(registro.renglon[i].comida==1){
                     switch(registro.renglon[i].tipoTiempo){
                        case 1:
                            centrada[d[4]]=copiarRegistro(registro.renglon[i]);
                            d[4]++;    
                        break;
                        case 2:
                            cplatoFuerte[d[5]]=copiarRegistro(registro.renglon[i]);
                            d[5]++;   
                        break;
                        case 3:
                            cpostre[d[6]]=copiarRegistro(registro.renglon[i]);
                            d[6]++;   
                        break;
                        case 4:
                            cbebidas[d[7]]=copiarRegistro(registro.renglon[i]);
                            d[7]++;   
                        break;
                    }
                }
                if(registro.renglon[i].cena==1){
                     switch(registro.renglon[i].tipoTiempo){
                        case 1:
                            nentrada[d[8]]=copiarRegistro(registro.renglon[i]);
                            d[8]++;    
                        break;
                        case 2:
                            nplatoFuerte[d[9]]=copiarRegistro(registro.renglon[i]);
                            d[9]++;   
                        break;
                        case 3:
                            npostre[d[10]]=copiarRegistro(registro.renglon[i]);
                            d[10]++;   
                        break;
                        case 4:
                            nbebidas[d[11]]=copiarRegistro(registro.renglon[i]);
                            d[11]++;   
                        break;
                    }
                }
            }
        }
        break;
        case 3:
        for(int i=0;i<noRegistros;i++){
            if(registro.renglon[i].adultoMayor==1){
                if(registro.renglon[i].desayuno==1){
                    switch(registro.renglon[i].tipoTiempo){
                        case 1:
                            dentrada[d[0]]=copiarRegistro(registro.renglon[i]);
                            d[0]++;    
                        break;
                        case 2:
                            dplatoFuerte[d[1]]=copiarRegistro(registro.renglon[i]);
                            d[1]++;   
                        break;
                        case 3:
                            dpostre[d[2]]=copiarRegistro(registro.renglon[i]);
                            d[2]++;   
                        break;
                        case 4:
                            dbebidas[d[3]]=copiarRegistro(registro.renglon[i]);
                            d[3]++;   
                        break;
                    }  
                }
                if(registro.renglon[i].comida==1){
                     switch(registro.renglon[i].tipoTiempo){
                        case 1:
                            centrada[d[4]]=copiarRegistro(registro.renglon[i]);
                            d[4]++;    
                        break;
                        case 2:
                            cplatoFuerte[d[5]]=copiarRegistro(registro.renglon[i]);
                            d[5]++;   
                        break;
                        case 3:
                            cpostre[d[6]]=copiarRegistro(registro.renglon[i]);
                            d[6]++;   
                        break;
                        case 4:
                            cbebidas[d[7]]=copiarRegistro(registro.renglon[i]);
                            d[7]++;   
                        break;
                    }
                }
                if(registro.renglon[i].cena==1){
                     switch(registro.renglon[i].tipoTiempo){
                        case 1:
                            nentrada[d[8]]=copiarRegistro(registro.renglon[i]);
                            d[8]++;    
                        break;
                        case 2:
                            nplatoFuerte[d[9]]=copiarRegistro(registro.renglon[i]);
                            d[9]++;   
                        break;
                        case 3:
                            npostre[d[10]]=copiarRegistro(registro.renglon[i]);
                            d[10]++;   
                        break;
                        case 4:
                            nbebidas[d[11]]=copiarRegistro(registro.renglon[i]);
                            d[11]++;   
                        break;
                    }
                }
            }
        }
        break;
        case 4:
        for(int i=0;i<noRegistros;i++){
            if(registro.renglon[i].deportista==1){
                if(registro.renglon[i].desayuno==1){
                    switch(registro.renglon[i].tipoTiempo){
                        case 1:
                            dentrada[d[0]]=copiarRegistro(registro.renglon[i]);
                            d[0]++;    
                        break;
                        case 2:
                            dplatoFuerte[d[1]]=copiarRegistro(registro.renglon[i]);
                            d[1]++;   
                        break;
                        case 3:
                            dpostre[d[2]]=copiarRegistro(registro.renglon[i]);
                            d[2]++;   
                        break;
                        case 4:
                            dbebidas[d[3]]=copiarRegistro(registro.renglon[i]);
                            d[3]++;   
                        break;
                    }  
                }
                if(registro.renglon[i].comida==1){
                     switch(registro.renglon[i].tipoTiempo){
                        case 1:
                            centrada[d[4]]=copiarRegistro(registro.renglon[i]);
                            d[4]++;    
                        break;
                        case 2:
                            cplatoFuerte[d[5]]=copiarRegistro(registro.renglon[i]);
                            d[5]++;   
                        break;
                        case 3:
                            cpostre[d[6]]=copiarRegistro(registro.renglon[i]);
                            d[6]++;   
                        break;
                        case 4:
                            cbebidas[d[7]]=copiarRegistro(registro.renglon[i]);
                            d[7]++;   
                        break;
                    }
                }
                if(registro.renglon[i].cena==1){
                     switch(registro.renglon[i].tipoTiempo){
                        case 1:
                            nentrada[d[8]]=copiarRegistro(registro.renglon[i]);
                            d[8]++;    
                        break;
                        case 2:
                            nplatoFuerte[d[9]]=copiarRegistro(registro.renglon[i]);
                            d[9]++;   
                        break;
                        case 3:
                            npostre[d[10]]=copiarRegistro(registro.renglon[i]);
                            d[10]++;   
                        break;
                        case 4:
                            nbebidas[d[11]]=copiarRegistro(registro.renglon[i]);
                            d[11]++;   
                        break;
                    }
                }
            }
        }
        break;
    }

    if(tipo==3){
        for(int i=0;i<d[8];i++){
            strcpy(nentrada[i].nombre,"No aplica.");
        }
        for(int i=0;i<d[9];i++){
            strcpy(nplatoFuerte[i].nombre,"No aplica.");
        }
    }
        for(int i=0;i<12;i++){
       //printf("val :%d, i:%d" ,d[i],i);
    }

    //Ya tengo todos los arreglos de alimentos, de un tipo Usuario,imprimir
    FILE *fp;
 	
 	char archivo[30]="";
    //Agregar al primer argumento, el segundo
    strcat(archivo,"dieta");
    strcat(archivo,nombre);
    strcat(archivo,".txt");
    printf("%s\n",archivo);
    //abrimos archivo
 	fp = fopen ( archivo , "w+" );
    for(int s=0;s<diaSemana;s++){
        printf("\nDia %d\n",s);
        printf("Desayuno:\n");

        printf("Entrada     :%s\n",dentrada[rand()%(d[0])].nombre);
        printf("Plato Fuerte: %s\n",dplatoFuerte[rand()%(d[1])].nombre);
        printf("Postre      : %s\n",dpostre[rand()%(d[2])].nombre);
        printf("Bebida      : %s\n",dbebidas[rand()%(d[3])].nombre);

        printf("Comida:\n");

        printf("Entrada     : %s\n",centrada[rand()%(d[4])].nombre);
        printf("Plato Fuerte: %s\n",cplatoFuerte[rand()%(d[5])].nombre);
        printf("Postre      : %s\n",cpostre[rand()%(d[6])].nombre);
        printf("Bebida      : %s\n",cbebidas[rand()%(d[7])].nombre);

        printf("Cena:\n");

        printf("Entrada     : %s\n",nentrada[rand()%(d[8])].nombre);
        printf("Plato Fuerte: %s\n",nplatoFuerte[rand()%(d[9])].nombre);
        printf("Postre      : %s\n",npostre[rand()%(d[10])].nombre);
        printf("Bebida      : %s\n",nbebidas[rand()%(d[11])].nombre);
        
        fprintf(fp,"\nDia %d\n",s);
        fprintf(fp,"Desayuno:\n");
        
        fprintf(fp,"Entrada     :%s\n",dentrada[rand()%(d[0])].nombre);
        fprintf(fp,"Plato Fuerte: %s\n",dplatoFuerte[rand()%(d[1])].nombre);
        fprintf(fp,"Postre      : %s\n",dpostre[rand()%(d[2])].nombre);
        fprintf(fp,"Bebida      : %s\n",dbebidas[rand()%(d[3])].nombre);

        fprintf(fp,"Comida:\n");

        fprintf(fp,"Entrada     : %s\n",centrada[rand()%(d[4])].nombre);
        fprintf(fp,"Plato Fuerte: %s\n",cplatoFuerte[rand()%(d[5])].nombre);
        fprintf(fp,"Postre      : %s\n",cpostre[rand()%(d[6])].nombre);
        fprintf(fp,"Bebida      : %s\n",cbebidas[rand()%(d[7])].nombre);

        fprintf(fp,"Cena:\n");

        fprintf(fp,"Entrada     : %s\n",nentrada[rand()%(d[8])].nombre);
        fprintf(fp,"Plato Fuerte: %s\n",nplatoFuerte[rand()%(d[9])].nombre);
        fprintf(fp,"Postre      : %s\n",npostre[rand()%(d[10])].nombre);
        fprintf(fp,"Bebida      : %s\n",nbebidas[rand()%(d[11])].nombre);
    }

     	fclose ( fp );
}

int main()
{
    //leer archivos
    //asignar los STRUCTS
    //Crear Menú.
    inicializar();
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
            //printf("%s", nombre);
                //nombre[i]=0;
            printf("Elige el tipo de usuario para quien se generara la dieta.\n");
            printf("1.-Nino.\n2.Adulto.\n3.-Adulto Mayor.\n4.-Deportista.\n");
            scanf("%d",&tipo);
            printf("La dieta será por: \n 1.-semana \n 2.-d%ca\n",161);
            scanf("%d",&temporalidad);
            temporalidad=(temporalidad==2)?1:7;
            calcularDieta(nombre, tipo,temporalidad);
            printf("\n\nVolver a calcular \n 1:Si \n 2:No\n");
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
