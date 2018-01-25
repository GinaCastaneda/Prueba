#include <stdio.h>
#include <math.h>


char pan();
char aderezo();
int carne();
int jamon();
char verdura();
int bebida();
char postre();
int efectivo();


int main()
{
	int o,relleno, agregar, agregardos,pos,s=0,pago_efec,resta,tipo_carne,tipo_jamon,tipo_bebida;
	char tipo_pan[9],tipo_aderezo[8],tipo_verdura[8],tipo_postre[12];
	char a[7],a1[7],a2[7],a3[7],a4[7],a5[12];
	printf ("TORTAS DON TORTENCIO\n");
	printf ("-_-_-_-_-_-_-_-_-_-_-\n");
	printf ("BIENVENIDO\n");
	printf ("Presione 1 si desea ordenar\nPresione 2 si desea salir\n");
	scanf ("%d",&o);

	switch (o)
	{
		case 1:
		printf ("-_-_-_-_-_-_-_-_-_-_-\n");
		
		tipo_pan[7]== pan();

		if (tipo_pan == "bolillo")
	{
		
	    s=s+6;
	}
	else
	{
		
		s=s+10;
	}
		printf ("-_-_-_-_-_-_-_-_-_-_-\n");

		tipo_aderezo[8]=aderezo();

		if (tipo_aderezo=="mayonesa")
	{
		
	    s=s+5;
	}
	else if (tipo_aderezo=="crema")
	{
		
		s=s+8;
	}
	else
	{
		
		s=s+6;
	}

		printf ("-_-_-_-_-_-_-_-_-_-_-\n");

		printf ("Presione 1 si desea carne | Presione 2 si desea jamon\n");
		scanf ("%d",&relleno);
        
        if (relleno==1)
        {
        	tipo_carne=carne();
        	switch (tipo_carne)
        	{
        		case 1:
        		s=s+12;	
        			break;
        		case 2:
        		s=s+15;
        			break;
        		case 3:
        		s=s+20;
        			break;
			}
		}
		
		else 
		{
			tipo_jamon=jamon();
			
			switch (tipo_jamon)
        	{
        		case 1:
        		s=s+12;	
        			break;
        		case 2:
        		s=s+8;
        			break;
        		case 3:
        		s=s+10;
        			break;
			}
		}
		
		
		

		printf ("-_-_-_-_-_-_-_-_-_-_-\n");

		printf ("Presione 1 si desea agregar verdura | Presione 2 si no lo desea:\n");
		scanf ("%d",&agregar);
			if (agregar==1)
			{
				tipo_verdura[8] == verdura();

				if (tipo_verdura=="lechuga")
				{
				
				s=s+15;
			    }
				else if (tipo_verdura=="jitomate")
				{
					
					s=s+3;
			    }

				else if (tipo_verdura=="aguacate")
				{
					
					s=s+8;
			    }
			    else if (tipo_verdura=="chiles")
				{
					
					s=s+7;
			    }

		    }

		printf ("-_-_-_-_-_-_-_-_-_-_-\n");

		printf ("Presione 1 si desea agregar una bebida | Presione 2 si no lo desea\n");
		scanf ("%d",&agregardos);
		if (agregardos==1)
		{
			tipo_bebida=bebida();
			
			switch (tipo_bebida)
			{
				case 1:
				
				s=s+25;
				break;
				case 2:
				
				s=s+18;
				break;
				case 3:
				
				s=s+20;
				break;
				case 4:
				
				s=s+20;
				break;
				default: break;
			}

		}

		printf ("-_-_-_-_-_-_-_-_-_-_-\n");

		printf ("Presione 1 si desea ordenar un postre | Presione 2 si no lo desea\n");
		scanf ("%d",&pos);
		if (pos==1)
		{
			tipo_postre[12]=postre();

			if (tipo_postre=="pay")
			{
				s=s+20;
			}
			else if (tipo_postre=="pastel imp.")
			{
				s=s+15;
			}
		    else if (tipo_postre=="flan")
		    {
		    	s=s+10;
			}
			else if (tipo_postre=="gelatina")
			{
				s=s+10;
			}
		}
		
		
		printf ("-_-_-_-_-_-_-_-_-_-_-\n");
		
		printf ("USTED HA TERMINADO DE ORDENAR\n");
		printf ("TOTAL: $%d.00\n",s);

		printf ("-_-_-_-_-_-_-_-_-_-_-\n");
		

		pago_efec=efectivo();
		
		if (pago_efec>s)
		{
		resta=pago_efec-s;	
		}
		
		
		printf ("-_-_-_-_-_-_-_-_-_-_-\n");
		printf ("\n_________________\n");
	    printf ("|TICKET DE COMPRA|\n");
	    printf ("|                |\n");
	    printf ("|TORTAS TORTENCIO|\n");
	    printf ("|   Total:$%d    |\n",s);
	    printf ("|Usted pago:$%d  |\n",pago_efec);
	    printf ("| Cambio:$%d     |\n",resta);
		printf ("|*Favor de pasar |\n");
		printf ("|     a caja     |\n");
	    printf ("| GRACIAS POR SU |\n");
	    printf ("|  PREFERENCIA   |\n");
		printf ("|________________|\n");
		
        
        break;
        
		case 2:
		break;
	}

	return 0;
}


char pan()
{
	char p[9];
	printf ("Eliga un tipo de pan:\n");
	printf ("|BOLILLO|BAGUETTE|\n");
	printf ("| $6.00 | $10.00 |\n");
	printf ("Ingrese con minusculas:");
	scanf ("%s",p);
	return p[9];
}

char aderezo()
{
 	char a[8];
 	printf ("Escoga un aderezo:\n");
 	printf ("MAYONESA | CREMA | MOSTAZA |\n");
 	printf ("  $5.00  | $8.00 |  $6.00  |\n");
 	printf ("Ingrese con minusculas:");
 	scanf ("%s",a);
 	return a[8];
}

int carne()
{
 	int car;
 	printf ("   1    |     2   |    3  \n");
	printf ("BISTECK | CHORIZO | PASTOR\n");
 	printf (" $12.00 | $15.00  | $20.00\n");
 	printf ("Ingrese el numero correspondiente:");
 	scanf ("%d",&car);
 	return car;
}

int jamon()
{
 	int ja;
	printf ("       1        |    2    |    3  \n"); 
    printf ("QUESO DE PUERCO |  PAVO   | PIERNA\n");
 	printf ("     $12.00     |  $8.00  | $10.00\n");
 	printf ("Ingrese el numero correspondiente:");
 	scanf ("%d",&ja);
  	return ja;
}

char verdura()
{
	char ver[8];
	printf ("Elija la verdura con la que quiere acompañar su torta:\n");
	printf ("LECHUGA | JITOMATE | AGUACATE | CHILES\n");
	printf (" $5.00  |   $3.00  |   $8.00  |  $7.00\n");
	printf ("Ingrese con minusculas:");
	scanf("%s",ver);
	return ver[8];
}

int bebida()
{
	int beb;
    printf ("    1     |    2   |    3   |      4\n");
    printf ("COCA-COLA |  SKIRT |  PEPSI | FUZE TEA\n");
	printf ("  $25.00  | $18.00 | $20.00 |  $20.00\n");
	printf ("Elija el número de la bebida que desea:\n");
    scanf("%d",&beb);
	return beb;
}

char postre()
{
	char pos[12];
	printf ("Elija el postre que desea:\n");
    printf ("   PAY   |  PASTEL IMP. |  FLAN  | GELATINA\n");
	printf ("  $20.00 |    $15.00    | $10.00 |  $10.00\n");
	printf ("Ingrese con minusculas:");;
	scanf ("%s",pos);
	return pos[12];
}



int efectivo()
{

	int pago;
	printf ("\nIngrese cuanto va a pagar:");
	scanf ("%d",&pago);
	return pago;
}
