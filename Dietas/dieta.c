#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


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

    int noRegistros=15; 
    Registro registro[60];

void leerDatos(){
    char cadena[30];
    for(int j=0; j<noRegistros;j++){

       printf("Cual es el nombre del platillo\n");
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
    } 
}
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
    Registro nbebidas[10];
    Registro nentrada[10];
    Registro npostre[10];
    Registro nplatoFuerte[10];

    switch(tipo){
        case 1:
        for(int i=0;i<noRegistros;i++){
            if(registro[i].nino==1){
                if(registro[i].desayuno==1){
                    switch(registro[i].tipoTiempo){
                        case 1:
                            dentrada[d[0]]=copiarRegistro(registro[i]);
                            d[0]++;    
                        break;
                        case 2:
                            dplatoFuerte[d[1]]=copiarRegistro(registro[i]);
                            d[1]++;   
                        break;
                        case 3:
                            dpostre[d[2]]=copiarRegistro(registro[i]);
                            d[2]++;   
                        break;
                        case 4:
                            dbebidas[d[3]]=copiarRegistro(registro[i]);
                            d[3]++;   
                        break;
                    }  
                }
                if(registro[i].comida==1){
                     switch(registro[i].tipoTiempo){
                        case 1:
                            centrada[d[4]]=copiarRegistro(registro[i]);
                            d[4]++;    
                        break;
                        case 2:
                            cplatoFuerte[d[5]]=copiarRegistro(registro[i]);
                            d[5]++;   
                        break;
                        case 3:
                            cpostre[d[6]]=copiarRegistro(registro[i]);
                            d[6]++;   
                        break;
                        case 4:
                            cbebidas[d[7]]=copiarRegistro(registro[i]);
                            d[7]++;   
                        break;
                    }
                }
                if(registro[i].cena==1){
                     switch(registro[i].tipoTiempo){
                        case 1:
                            nentrada[d[8]]=copiarRegistro(registro[i]);
                            d[8]++;    
                        break;
                        case 2:
                            nplatoFuerte[d[9]]=copiarRegistro(registro[i]);
                            d[9]++;   
                        break;
                        case 3:
                            npostre[d[10]]=copiarRegistro(registro[i]);
                            d[10]++;   
                        break;
                        case 4:
                            nbebidas[d[11]]=copiarRegistro(registro[i]);
                            d[11]++;   
                        break;
                    }
                }
            }
        }
        break;
        case 2:
        for(int i=0;i<noRegistros;i++){
            if(registro[i].adulto==1){
                if(registro[i].desayuno==1){
                    switch(registro[i].tipoTiempo){
                        case 1:
                            dentrada[d[0]]=copiarRegistro(registro[i]);
                            d[0]++;    
                        break;
                        case 2:
                            dplatoFuerte[d[1]]=copiarRegistro(registro[i]);
                            d[1]++;   
                        break;
                        case 3:
                            dpostre[d[2]]=copiarRegistro(registro[i]);
                            d[2]++;   
                        break;
                        case 4:
                            dbebidas[d[3]]=copiarRegistro(registro[i]);
                            d[3]++;   
                        break;
                    }  
                }
                if(registro[i].comida==1){
                     switch(registro[i].tipoTiempo){
                        case 1:
                            centrada[d[4]]=copiarRegistro(registro[i]);
                            d[4]++;    
                        break;
                        case 2:
                            cplatoFuerte[d[5]]=copiarRegistro(registro[i]);
                            d[5]++;   
                        break;
                        case 3:
                            cpostre[d[6]]=copiarRegistro(registro[i]);
                            d[6]++;   
                        break;
                        case 4:
                            cbebidas[d[7]]=copiarRegistro(registro[i]);
                            d[7]++;   
                        break;
                    }
                }
                if(registro[i].cena==1){
                     switch(registro[i].tipoTiempo){
                        case 1:
                            nentrada[d[8]]=copiarRegistro(registro[i]);
                            d[8]++;    
                        break;
                        case 2:
                            nplatoFuerte[d[9]]=copiarRegistro(registro[i]);
                            d[9]++;   
                        break;
                        case 3:
                            npostre[d[10]]=copiarRegistro(registro[i]);
                            d[10]++;   
                        break;
                        case 4:
                            nbebidas[d[11]]=copiarRegistro(registro[i]);
                            d[11]++;   
                        break;
                    }
                }
            }
        }
        break;
        case 3:
        for(int i=0;i<noRegistros;i++){
            if(registro[i].adultoMayor==1){
                if(registro[i].desayuno==1){
                    switch(registro[i].tipoTiempo){
                        case 1:
                            dentrada[d[0]]=copiarRegistro(registro[i]);
                            d[0]++;    
                        break;
                        case 2:
                            dplatoFuerte[d[1]]=copiarRegistro(registro[i]);
                            d[1]++;   
                        break;
                        case 3:
                            dpostre[d[2]]=copiarRegistro(registro[i]);
                            d[2]++;   
                        break;
                        case 4:
                            dbebidas[d[3]]=copiarRegistro(registro[i]);
                            d[3]++;   
                        break;
                    }  
                }
                if(registro[i].comida==1){
                     switch(registro[i].tipoTiempo){
                        case 1:
                            centrada[d[4]]=copiarRegistro(registro[i]);
                            d[4]++;    
                        break;
                        case 2:
                            cplatoFuerte[d[5]]=copiarRegistro(registro[i]);
                            d[5]++;   
                        break;
                        case 3:
                            cpostre[d[6]]=copiarRegistro(registro[i]);
                            d[6]++;   
                        break;
                        case 4:
                            cbebidas[d[7]]=copiarRegistro(registro[i]);
                            d[7]++;   
                        break;
                    }
                }
                if(registro[i].cena==1){
                     switch(registro[i].tipoTiempo){
                        case 1:
                            nentrada[d[8]]=copiarRegistro(registro[i]);
                            d[8]++;    
                        break;
                        case 2:
                            nplatoFuerte[d[9]]=copiarRegistro(registro[i]);
                            d[9]++;   
                        break;
                        case 3:
                            npostre[d[10]]=copiarRegistro(registro[i]);
                            d[10]++;   
                        break;
                        case 4:
                            nbebidas[d[11]]=copiarRegistro(registro[i]);
                            d[11]++;   
                        break;
                    }
                }
            }
        }
        break;
        case 4:
        for(int i=0;i<noRegistros;i++){
            if(registro[i].deportista==1){
                if(registro[i].desayuno==1){
                    switch(registro[i].tipoTiempo){
                        case 1:
                            dentrada[d[0]]=copiarRegistro(registro[i]);
                            d[0]++;    
                        break;
                        case 2:
                            dplatoFuerte[d[1]]=copiarRegistro(registro[i]);
                            d[1]++;   
                        break;
                        case 3:
                            dpostre[d[2]]=copiarRegistro(registro[i]);
                            d[2]++;   
                        break;
                        case 4:
                            dbebidas[d[3]]=copiarRegistro(registro[i]);
                            d[3]++;   
                        break;
                    }  
                }
                if(registro[i].comida==1){
                     switch(registro[i].tipoTiempo){
                        case 1:
                            centrada[d[4]]=copiarRegistro(registro[i]);
                            d[4]++;    
                        break;
                        case 2:
                            cplatoFuerte[d[5]]=copiarRegistro(registro[i]);
                            d[5]++;   
                        break;
                        case 3:
                            cpostre[d[6]]=copiarRegistro(registro[i]);
                            d[6]++;   
                        break;
                        case 4:
                            cbebidas[d[7]]=copiarRegistro(registro[i]);
                            d[7]++;   
                        break;
                    }
                }
                if(registro[i].cena==1){
                     switch(registro[i].tipoTiempo){
                        case 1:
                            nentrada[d[8]]=copiarRegistro(registro[i]);
                            d[8]++;    
                        break;
                        case 2:
                            nplatoFuerte[d[9]]=copiarRegistro(registro[i]);
                            d[9]++;   
                        break;
                        case 3:
                            npostre[d[10]]=copiarRegistro(registro[i]);
                            d[10]++;   
                        break;
                        case 4:
                            nbebidas[d[11]]=copiarRegistro(registro[i]);
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

    //Ya tengo todos los arreglos de alimentos, de un tipo Usuario,
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
        printf("Plato Fuerte: %s\n",npostre[rand()%(d[9])].nombre);
        printf("Postre      : %s\n",nbebidas[rand()%(d[10])].nombre);
        printf("Bebida      : %s\n",nplatoFuerte[rand()%(d[11])].nombre);
    }
}

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