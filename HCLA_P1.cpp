
//HCLA_P01
//09/02/2020
//Luis Alberto Hernandez Cozatl
//Se realizaran 5 programas en el cual se les sacara las calificaciones,el pago total de llamadas realizadas y costos de llamadas realizadas dependiendo del lada.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define IVA 0.08
//****************************************************************************
// PROTOTIPOS DE FUNCIONES
//****************************************************************************
void llamada(void);
void calificaciones(void);
void CalificacionArbol(void);
void Agua(void);
void Salario(void);

//****************************************************************************
// MAIN PRINCIPAL  ...  funcion principal
//****************************************************************************

int main (void)
{
   int op;

   do{
      system ("cls");
      printf("************** M E N U *****************\n");
	  printf("1.-Llamada Telefonica\n");
	  printf("2.-Calificaciones x verdadero\n");
	  printf("3.-Calificaciones optimizado\n");
	  printf("4.-Agua\n");
	  printf("5.-Salario\n");
	  printf("6.-Salir\n");
	  printf("\n");
	  printf("Seleccione una opcion: \n");
      scanf ("%d",&op);
	  switch(op)
	    {
		  case 1: llamada();  break;
		  case 2: calificaciones();  break;
		  case 3: CalificacionArbol();  break;
		  case 4: Agua();  break;
		  case 5: Salario();  break;
		}
   }while(op != 6);
}

//**************************************************************************************



void llamada(void)
{
	int op, op_salir, op_mint,tiemex;
	float mint=0, subt=0, total=0, ext,iva;
	
    system ("cls");
    
	printf(" \t\t Llamada Telefonica \n\n");    
	printf("Ingrese los minutos de la llamada realizada: ");
	scanf("%f", &mint);
	 
	 if(mint >= 1)
	  {
	 do
	 {	  
	 system("cls");
     	printf("Elija una opcion de llamada: \n");
	    printf("1.- Llamada Local $3.00 sin limite de tiempo\n");
	    printf("2.- Llamada Nacional $7.00 por los 3 primeros minutos y $2.00 minuto adicional\n");
	    printf("3.- Llamada Internacional $9.00 por los 2 primeros minutos y $4.00 adicional\n");
	    printf("4.- Salir\n");
	    printf("Escoger Opcion: ");

	       scanf("%d", &op);

	 switch(op)
	 {
//************************** Llamada local ********************************
	   case 1:
	 		 system("cls");
	 		 
	 	if(mint >=1 )
	 	 {
	 	printf("\n********* Llamada sin limite de tiempo **************\n\n");
		   subt=3.00;
		  printf("Subtotal: $%.2f\n", subt);
		    total=(3.00*(0.08))+3;
		   printf("Total (IVA 8/%): $%.2f\n", total);
		       printf("\n\nPresione cualquier tecla  para salir:  ");
		       scanf("%d", &op_salir);  
			 
			 } 
	 		 
    		 else
	 	    	{
			  	printf("No tiene minutos\n");
	 			 printf("\n\nPresione cualquier tecla  para salir: ");
	 			  scanf("%d", &op_salir);  	
			    }
			 break;

//*********************************** Llamada Nacional *********************************
	   case 2:
	   	system("cls");
	   	
	   	   
	   	   	printf("\n**************** Llamada Nacional $7 + $2 min. Extra ****************\n\n");
		        
		          if( mint <= 3 )
			  {  
			     subt=7.00;
				 iva=7*IVA;
				 total=subt+iva;	
			 	 printf("El Subtotal= $%.2f\n ",subt);
			 	  printf("El iva=$%.2f \n",iva);
			 	  printf("El total= $%.2f \n",total);
			  }
			else
			 {
			 	
			 	 ext=mint-3;
				 iva=(7+(ext*2))*IVA;			 	 
			 	 subt=7+(ext*2);
				 total=iva+subt;	
			 	printf("El Subtotal= $%.2f\n ",subt);
			 	  printf("El iva=$%.2f \n",iva);
			 	  printf("El total= $%.2f \n",total);					
			 }
			 system("pause");
	 	break;	
//**************************** Llamada Internacional *********************************************** 
	   case 3:
	   	system("cls");
		
			if(mint <=2)
			{
				printf("\n************** Llamada InterNacional $9 + $4 min. Extra *************** \n\n");
				subt=9.00;
				iva=9.00*IVA;
				total=subt+iva;
				printf("El Subtotal= $%.2f\n ",subt);
			 	printf("El iva=$%.2f \n",iva);
			 	printf("El total= $%.2f \n",total);
			}
			else
			{
				printf("\n************** Llamada InterNacional $9 + $4 min. Extra *******************\n\n");
				ext=mint-2;
				iva=(9.00+(ext*4))*IVA;
				subt=9.00+(ext*4);
				total=iva+subt;
				printf("El Subtotal= $%.2f\n ",subt);
			 	printf("El iva=$%.2f \n",iva);
			 	printf("El total= $%.2f \n",total);
			}
			system("pause");
			break;
		 
	   }//cierre del switch
        }while( ( op_salir != 4) && (op !=4) );// cierre del do
  
	  } 
}
//**************************************************************************************



void calificaciones(void)
{
	int calf1, calf2, calf3;
	float prom;
	
	
   system ("cls");
		printf("********************* Promedio de alumno ************************ \n\n");
		
		  printf("Ingrese la primera calificacion: ");
		   scanf("%d", &calf1);
		  
		  printf("\nIngrese la segunda calificacion: ");
		   scanf("%d", &calf2);
		  
		  printf("\nIngrese la tercera calificacion: ");
		   scanf("%d", &calf3);
		  printf("\n");
		   prom = (calf1+calf2+calf3)/3;


	 if(prom<30)
	   {
       	 printf(" Lo sentimos tendras que \"Repetir\"\n");
       }
        else if(prom<60)
		{
        	printf("Lo sentimos tendras realizar \"Extraordinario\" \n");
        }
         else if(prom<70)
         {
         	printf("Sigue mejorando has sido \"Suficiente\" \n");
         }
          else if(prom<80)
          {
          	printf("Sigue mejorando has sido \"Regular\" \n");
          }
           else if(prom<90)
           {
           	 printf("Felicidades has salido \"Bien\" \n");
           }
            else if(prom<98)
            {
              printf("Felicidades has salido \"Muy bien\" \n");
            }
             else if(prom<=100)
             {
             	printf("Genial has salido \"Excelente\" sigue asi.\n\n");
             }
             else if(prom>100)
             {
             	printf("A ocurrido un ERROR, verifique sus calificaciones...\n\n");
			 }

	system("pause");
}
//**************************************************************************************



void CalificacionArbol(void)
{
	
    int calf_1, calf_2, calf_3;
	float prom;
	
   system ("cls");
		printf(" ***************** Promedio de alumno (Arbol)******************* \n\n");
		
		  printf("Ingrese la primera calificacion: ");
		   scanf("%d", &calf_1);
		  
		  printf("\nIngrese la segunda calificacion: ");
		   scanf("%d", &calf_2);
		  
		  printf("\nIngrese la tercera calificacion: ");
		   scanf("%d", &calf_3);
		   
		   prom = (calf_1+calf_2+calf_3)/3;
  
  if(prom<80) //parte de 80
    {
        if(prom<60) 
         {
           if(prom<30)
           {
            printf(" Lo sentimos tendras que \"Repetir\"\n");
            }
            else
			 {
			   printf("Lo sentimos tendras realizar \"Extraordinario\" \n");
				}  
            }
             else if(prom<70) //bloque de 60 y menor a 79
               {
             	printf("Sigue mejorando has sido \"Suficiente\" \n");
                 }
                 else
		          {
				    printf("Sigue mejorando has sido \"Regular\" \n");
			       }
		  }
		 
			else if(prom<96) //parte de 96
			{
				if(prom<90) //80 y menor que 98
				{
					printf("Felicidades has salido \"Bien\" \n");
				}
				else{
					printf("Felicidades has salido \"Muy bien\" \n");
				}
	 	      }
				else if(prom<=100) 
				 {
					printf("Genial has salido \"Excelente\" sigue asi.\n\n");
				  }
				   else
				   {
				  	printf("A ocurrido un ERROR, verifique sus calificaciones...\n\n");
				   }

	system("pause");
}
//**************************************************************************************



void Agua(void)
{
        system ("cls");
     	int m3=0, op;
		float subt=0, total=0, iva=0;
	do
	{
		 system("cls");
		 printf("*************Registro de Agua *****************\n\n");
		 printf("Cantidad de agua que ha consumido: ");
		  scanf("%d", &m3);
		  printf("\n");
		
		  if(m3>=0 && m3<=4)
		   {
		   	  subt = 50;
		   	  printf("Subtotal: $%.2f\n", subt);
		   	  
		   	    iva = (subt*0.08);
		   	    printf("IVA (8%): $%.2f\n", iva);
    	   	      
		   	    total = subt+iva;
		   	    printf("Total: $%.2f \n", total);
		       }
		   
		     else if(m3>=5 && m3<=15)
		      {  	
		      	 subt = m3*8;
		      	 printf("Subtotal: $%.2f\n", subt);
		      	 iva = (subt*0.08);
		         printf("IVA (8%): $%.2f\n", iva);
		      	 total = subt+iva;
		   	     printf("Total: $%.2f \n", total);           
			     } 
			   
			    else if(m3>=16 && m3<=50)
		         {  	
		      	        subt = m3*10;
		      	        printf("Subtotal: $%.2f\n", subt);
						iva = (subt*0.08);
		      	        printf("IVA (8%): $%.2f\n", iva);  
						total = subt+iva;
		   	            printf("Total: $%.2f \n\n", total);           
			          } 
			        
					else if(m3>=51)
		              {  	
		              	subt = m3*11;
		      	        printf("Subtotal: $%.2f\n", subt);		      	          
						iva = (subt*0.08);
		      	        printf("IVA (8%): $%.2f\n", iva);		      	            
						total = subt+iva;
		   	            printf("Total: $%.2f \n\n", total);           
			              }
				printf(" Ingrese \"1\" para salir, cualquier otro valor para seguir: \n");
				 scanf("%d", &op);
				 
			}while(op != 1);
  system("pause");	
}
//**************************************************************************************















