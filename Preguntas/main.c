#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define NOP 40
#define NOR 160

time_t t;

typedef struct{
	char *pregunta;
	char **respuesta;
}Ejercicio;

Ejercicio cuestionario[40];
char **preguntas;
char **respuestas;
int *opcion;
char linea[5];
void cargarP(){
    strcpy(preguntas[0],"¿CUAL ES EL RESULTADO DE LA SIGUIENTE OPERACIÓN? (3+9)-2*3=");
    strcpy(preguntas[1],"¿CUAL ES EL RESULTADO DE LA SIGUIENTE OPERACIÓN? 16+(13-2^2)=");
    strcpy(preguntas[2],"¿CUAL ES EL RESULTADO DE LA SIGUIENTE OPERACIÓN? 4*(3+2*(4-2+4)))=");
    strcpy(preguntas[3], "¿CUAL ES EL RESULTADO DE LA SIGUIENTE OPERACIÓN? 25-(3-2)+(4-1)=");
    strcpy(preguntas[4], "¿CUAL ES EL RESULTADO DE LA SIGUIENTE OPERACION? 6-2+8*[3^2+2*(3*3)]");
    strcpy(preguntas[5], "¿CUAL ES EL RESULTADO DE LA SIGUIENTE OPERACIÓN? 7-5*3=");
    strcpy(preguntas[6], "¿CUAL ES EL RESULTADO DE LA SIGUIENTE OPERACIÓN? (28-32)+(3^2-8)=");
    strcpy(preguntas[7], "¿CUAL ES EL RESULTADO DE LA SIGUIENTE OPERACIÓN? 10-7-(55-32)=");
    strcpy(preguntas[8], "¿CUAL ES EL RESULTADO DE LA SIGUIENTE OPERACIÓN? 15+30+[50+7*(3*3)-3]");
    strcpy(preguntas[9], "-35+10+(10*3)=");
    strcpy(preguntas[10], "José tiene 35 tazos); Javier 84 y Carlos 125, ¿cuántos tazos tienen entre los tres?, ¿cuántos tazos más tiene Carlos màs que José?");
     strcpy(preguntas[11],"Francisco va a pintar una pared que mide 5.4 m de largo por 2.7 m de alto. Si con un litro de pintura cubre 2.5 m2 de pared, ¿cuántos botes de pintura tiene que comprar como mínimo?");
     strcpy(preguntas[12],"En un colegio de 500 alumnos, 375 usan lentes. ¿Qué porcentaje de alumnos no usa lentes?");
     strcpy(preguntas[13]," Para obtener el área de un triángulo la fórmula es");
     strcpy(preguntas[14],"Para obtener el área de un trapecio la fórmula es");
     strcpy(preguntas[15],"a + 5 = 15. ¿Cuánto vale 'a'?");
     strcpy(preguntas[16],"Tengo $100 pesos en la bolsa y pido prestados $200 pesos para poder comprar unos zapatos de $300 pesos ¿al final cuál es mi saldo?");
     strcpy(preguntas[17],"Los 48 estudiantes de 4.° A van asistir a clase de informática. Sí la sala de informática del colegio tiene 16 computadores en cada computador deberán trabajar.");
     strcpy(preguntas[18],"De un depósito de agua que contiene 245 litros queremos llenar garrafas de 5 litros ¿Cuántas garrafas podemos llenar?");
     strcpy(preguntas[19],"En una división el cociente es 7; el divisor, 6 y el residuo, 1 ¿Cuál es el dividendo?");
     strcpy(preguntas[20],"Repartimos 24 libretas entre tres niños y niñas.");
     strcpy(preguntas[21],"15 es divisble");
     strcpy(preguntas[22],"El resultado de -18 + 22 - 10 + 20 - 44 es:");
     strcpy(preguntas[23],"El resultado de - 45 - 29 - 66 - 12 - 56 es:");
     strcpy(preguntas[24],"El resultado de - 455 + 234 - 125 + 900 es:");
     strcpy(preguntas[25],"El resultado de + 122 - 96 es:");
     strcpy(preguntas[26],"El resultado de 1/2 + 7/4 es:");
     strcpy(preguntas[27],"El resultado de 3/8 + 7/6 es:");
    strcpy(preguntas[28], "El resultado de -1/5 - 2/10 es:");
    strcpy(preguntas[29], "El resultado de 8/3 - 7/6 es:");
    strcpy(preguntas[30], "El teorema de pitágoras se puede aplicar directamente en figuras");
    strcpy(preguntas[31], "¿Cuál es la formula para calcular el volumen de una esfera?");
    strcpy(preguntas[32], "El resultado de (1x10^2)*(1x10^5) es:");
    strcpy(preguntas[33], "¿Cuál es el volumen de una esfera de radio 2.4 cm.?");
    strcpy(preguntas[34], "¿Cuál la formula para calcular el volumen de un cilindro?");
    strcpy(preguntas[35], "Pedro compró nueve refrescos. Cada refresco tiene una capacidad de dos enteros un medio. ¿Cuántos litros de refresco tengo en total?.Expresa el resultado en número decimal.");
    strcpy(preguntas[36], "Calcula el perímetro de un rectángulo que tiene de largo cinco enteros un cuarto metros, con un ancho de tres enteros un cuarto.metros.");
    strcpy(preguntas[37], "Martha compra cinco enteros tres cuartos kilogramos de jamón.Si el kilogramo tiene un costo de $164.50 ¿Cuanto pagará?");
    strcpy(preguntas[38], "Carlos toma tres vasos de agua de dos tercios de litro cada uno. ¿Cuánto litros de agua se toma en una semana?");
    strcpy(preguntas[39], "Un maratonista hace un recorrido de treinta y tres metros. ¿Cuántos metros recorrió con la mitad del tiempo? Expresa tu resultado en decimal.");
}
void cargarR(){
    strcpy(respuestas[0],"-6");

    strcpy(respuestas[1],"6");
    strcpy(respuestas[2],"10");
    strcpy(respuestas[3],"5");
    strcpy(respuestas[4],"-27");
    strcpy(respuestas[5],"34");
    strcpy(respuestas[6],"25");
    strcpy(respuestas[7],"21");
    strcpy(respuestas[8],"30");
    strcpy(respuestas[9],"45");
    strcpy(respuestas[10],"40");
    strcpy(respuestas[11],"60");
    strcpy(respuestas[12],"23");
    strcpy(respuestas[13],"27");
    strcpy(respuestas[14],"10");
    strcpy(respuestas[15],"35");
    strcpy(respuestas[16],"-6");
    strcpy(respuestas[17],"220");
    strcpy(respuestas[18],"-13");
    strcpy(respuestas[19],"-210");
    strcpy(respuestas[20],"-6");
    strcpy(respuestas[21],"-15");
    strcpy(respuestas[22],"-8");
    strcpy(respuestas[23],"-12");
    strcpy(respuestas[24],"-12");
    strcpy(respuestas[25],"-3");
    strcpy(respuestas[26],"-19");
    strcpy(respuestas[27],"-20");
    strcpy(respuestas[28],"15");
    strcpy(respuestas[29],"10");
    strcpy(respuestas[30],"-20");
    strcpy(respuestas[31],"8");
    strcpy(respuestas[32],"13");
    strcpy(respuestas[33],"150");
    strcpy(respuestas[34],"155");
    strcpy(respuestas[35],"200");
    strcpy(respuestas[36],"12");
    strcpy(respuestas[37],"10");
    strcpy(respuestas[38],"5");
    strcpy(respuestas[39],"-5");
    strcpy(respuestas[40],"244,15");
    strcpy(respuestas[41],"244,90");
    strcpy(respuestas[42],"244,35");
    strcpy(respuestas[43],"244,125");
    strcpy(respuestas[44],"5 botones");
    strcpy(respuestas[45],"6 botones");
    strcpy(respuestas[46],"4 botones");
    strcpy(respuestas[47],"7 botones");
    strcpy(respuestas[48],"35 porciento");
    strcpy(respuestas[49],"40 porciento");
    strcpy(respuestas[50],"25 porciento");
    strcpy(respuestas[51],"10 porciento");
    strcpy(respuestas[52],"A=bxh");
    strcpy(respuestas[53],"A=b+h");
    strcpy(respuestas[54],"A=b-h");
    strcpy(respuestas[55],"A=bxh/2");
    strcpy(respuestas[56]," A= [(B+b)/2]*h");
    strcpy(respuestas[57]," A= [(B+b)/2]/h");
    strcpy(respuestas[58]," A= [(B+b)/2]+h");
    strcpy(respuestas[59]," A= [(B+b)/2]-h");
    strcpy(respuestas[60],"5");
    strcpy(respuestas[61],"7");
    strcpy(respuestas[62],"-10");
    strcpy(respuestas[63],"10");
    strcpy(respuestas[64],"$0");
    strcpy(respuestas[65],"$100");
    strcpy(respuestas[66],"$-100");
    strcpy(respuestas[67],"$-200");
    strcpy(respuestas[68],"dos niños");
    strcpy(respuestas[69],"tres niños");
    strcpy(respuestas[70],"cuatro niños");
    strcpy(respuestas[71],"cinco niños");
    strcpy(respuestas[72],"45");
    strcpy(respuestas[73],"69");
    strcpy(respuestas[74],"49");
    strcpy(respuestas[75],"340");
    strcpy(respuestas[76],"13");
    strcpy(respuestas[77],"14");
    strcpy(respuestas[78],"63");
    strcpy(respuestas[79],"43");
    strcpy(respuestas[80],"8");
    strcpy(respuestas[81],"27");
    strcpy(respuestas[82],"3");
    strcpy(respuestas[83],"21");
    strcpy(respuestas[84],"Por 3 y 5");
    strcpy(respuestas[85],"Por 2 y 5");
    strcpy(respuestas[86],"Por 15 y 4");
    strcpy(respuestas[87],"4 y 3");
    strcpy(respuestas[88],"-32");
    strcpy(respuestas[89],"-31");
    strcpy(respuestas[90],"-30");
    strcpy(respuestas[91],"-33");
    strcpy(respuestas[92],"-208");
    strcpy(respuestas[93],"208");
    strcpy(respuestas[94],"-209");
    strcpy(respuestas[95],"209");
    strcpy(respuestas[96],"555");
    strcpy(respuestas[97]," 553");
    strcpy(respuestas[98],"554");
    strcpy(respuestas[99],"552");
    strcpy(respuestas[100],"26");
    strcpy(respuestas[101],"-26");
    strcpy(respuestas[102],"25");
    strcpy(respuestas[103],"-25");
    strcpy(respuestas[104],"8/4");
    strcpy(respuestas[105],"9/4");
    strcpy(respuestas[106],"10/4");
    strcpy(respuestas[107],"7/4");
    strcpy(respuestas[108],"36/24");
    strcpy(respuestas[109],"37/24");
    strcpy(respuestas[110],"25/24");
    strcpy(respuestas[111],"34/24");
    strcpy(respuestas[112],"-4/10");
    strcpy(respuestas[113],"-3/10");
    strcpy(respuestas[114],"-5/10");
    strcpy(respuestas[115],"-6/10");
    strcpy(respuestas[116],"7/6");
    strcpy(respuestas[117],"-5/6");
    strcpy(respuestas[118],"9/6");
    strcpy(respuestas[119],"1/6");
    strcpy(respuestas[120],"Rectángulos");
    strcpy(respuestas[121],"Paralelogramo");
    strcpy(respuestas[122],"Triangulos");
    strcpy(respuestas[123],"Cilindros");
    strcpy(respuestas[124],"V=4*pi*r^2");
    strcpy(respuestas[125],"V=4*pi*r^3");
    strcpy(respuestas[126],"V=(4/3)*pi*r^3");
    strcpy(respuestas[127],"V=(4/2)*pi*r^3");
    strcpy(respuestas[128],"(1x10^2)");
    strcpy(respuestas[129],"(1x10^5)");
    strcpy(respuestas[130],"(1x10^7)");
    strcpy(respuestas[131],"(1x10^8)");
    strcpy(respuestas[132],"57 cm^3");
    strcpy(respuestas[133],"57.6 cm^3");
    strcpy(respuestas[134],"57.5 cm^3");
    strcpy(respuestas[135],"57.9058 cm^3");
    strcpy(respuestas[136],"A=4*pi*r^2");
    strcpy(respuestas[137],"V=(4/3)*pi*r^3");
    strcpy(respuestas[138],"V=pi*r^2*h");
    strcpy(respuestas[139],"A=(bXh)/2");
    strcpy(respuestas[140],"20. 5 litros de refrescos");
    strcpy(respuestas[141],"22.5 litros de refrescos");
    strcpy(respuestas[142],"25 litros de refrescos");
    strcpy(respuestas[143],"24.5 litros de refrescos");
    strcpy(respuestas[144],"17 1/4 metros");
    strcpy(respuestas[145],"16 1/8 metros");
    strcpy(respuestas[146],"17 metros");
    strcpy(respuestas[147],"19 metros");
    strcpy(respuestas[148],"945. 875");
    strcpy(respuestas[149],"950. 875");
    strcpy(respuestas[150],"947. 875");
    strcpy(respuestas[151],"954. 875");
    strcpy(respuestas[152],"17 litro.");
    strcpy(respuestas[153],"14 litros");
    strcpy(respuestas[154],"18 litros");
    strcpy(respuestas[155],"18. 5 litros");
    strcpy(respuestas[156],"17. 5 metros.");
    strcpy(respuestas[157],"16. 5 metros");
    strcpy(respuestas[158],"15.5 metros");
    strcpy(respuestas[159],"19 . 5 metros");
}
void cargarArreglos(){

		preguntas=(char **)malloc(40*sizeof(char*));
	    for(int i=0;i<40;i++){
			preguntas[i]= (char*)malloc(200*sizeof(char));
	    }
	
	
		respuestas=(char **)malloc(160*sizeof(char*));
	for(int i=0;i<160;i++){
			respuestas[i]= (char*)malloc(200*sizeof(char));
	}
    printf("memoria");
    cargarP();
    printf("P");
    cargarR();
    printf("R");
}



void cargarTodo(){
	for (int i = 0; i < NOP; i++)	{
	    cuestionario[i].pregunta=(char *)malloc(200*sizeof(char));;
	    cuestionario[i].respuesta=(char **)malloc(4*sizeof(char*));;
	    for (int j = 0; j < 4; j++)	{
		    cuestionario[i].respuesta[j]=(char *)malloc(200*sizeof(char));;
	    }
	}

	int noRes=0;
	for (int i = 0; i < NOP; i++)	{
		strcpy(cuestionario[i].pregunta,preguntas[i]);
		for (int j = 0; j < 4; j++)
		{
			strcpy(cuestionario[i].respuesta[j],respuestas[noRes]);
			noRes++;
		}
	}
}

int comparar(int *arregloInt,int n){
    //printf("Comparar");
	int r=0,m;
	for(int i=0; i<n;i++){
		m=1;
		for(int j=0; j<n;j++){
            if(i!=j){
                if(arregloInt[i]!=arregloInt[j]){
				    m++;
                    //printf("I:%d, J:%d, m%d",i,j,m);
			    }else{
                    //printf("AI:%d, AJ:%d, m%d",arregloInt[i],arregloInt[j],m);  
                }
            }
		}
		if(m==n){
			r++;
		}
	}
	r=(r==10)?0:1;
	return r;
}

int randomV(int n)
{
    int a =rand()%10000;
    while(a>n){
        a%=10;
    }
    return a;
}

int *elegirNPreguntasAleatorios(int n){
	int *opciones=(int *)malloc(n*sizeof(int));
    for(int i=0; i<n;i++){
        opciones[i]=0;
    }
    
	do{
        //printf("HolaAleatorios");
		for(int i=0; i<n;i++){
			opciones[i]=randomV(40)+(rand()%20);
            if(opciones[i]>40){
                opciones[i]-=40;
            }
            //printf("random %d",opciones[i]);
		}
	}while(comparar(opciones,n)==1);
	return opciones;

}
void quitar_espacios(char *linea)
{
   int i;
   int j;
   
   for (i = j = 0; linea[i] != '\0'; i++)
      if (linea[i] != ' ')
         linea[j++] = linea[i];
   linea[j] = '\0';
}

int main(){
	/*CONTAR PREGUNTAS*/
	cargarArreglos();
    //printf("carguearreglos");
	cargarTodo();
    //    printf("Cargue todo");
	/*GUARDAR PREGUNTAS*/
    
	/*iMPRIMIR PREGUNTAS*/
	// for(i = 0; i < numerodepreguntas; i++){
	// 	printf("%s", cuestionario[i].pregunta);
	// }
	/*GUARDAR RESPUESTAS*/
	/*IMPRIMIR RESPUESTAS*/
	/*iMPRIMIR PREGUNTAS*/
    int n=10;
	opcion=(int *)malloc(n*sizeof(int));
	;

    //printf("Elegi aleatorios");
    FILE *fp;
 	
 	char archivo[30]="";
    

     while(1){
        printf("Hola, crearemos un cuestionario. n");
        printf("Pon 1:Si. 2:No, no queria abrir este programa.\n");
        int p;

        scanf("%d",&p);
        if(p!=1){
            break;
        }
        printf("Nombre de tu cuestionario:[Solo se pondra si son menos de 5 caracteres y junto]");
        scanf("%s",linea);
        strcat(archivo,"Cuestio");
        if(strlen (linea)<6){
            strcat(archivo, linea);
        }
        strcat(archivo,".txt");
        printf("Nombre Archivo:%s.txt\n",archivo);
        fp = fopen ( archivo , "w+" );
        opcion=elegirNPreguntasAleatorios(n);
        for(int i = 0,j=0; i < NOP; i++){
            for(int m=0; m<n;m++){
                if(opcion[m]==i){
                    
                    fprintf(fp,"\nPregunta %d:%s\n", j+1, cuestionario[i].pregunta);
                    printf("\nPregunta %d:%s\n", j+1, cuestionario[i].pregunta);
                    for(int k = 0; k<4; k++){
                        printf("\t%c.- %s.\n",97+k,cuestionario[i].respuesta[k]);
                        fprintf(fp,"\t%c.- %s.\n",97+k,cuestionario[i].respuesta[k]);
                    }
                    j++;
                }   
            }    
        }
        
        fclose ( fp );
        printf("Otro cuestionario?\n");
        printf("1:Si. 2:No \n");
        scanf("%d", &p);
        if(p!=1){
            break;
        }
	}
	return 0;
}