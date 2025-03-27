//Cruz Apodaca Amiel Merari//
//En el siguiente programa se muestra una calculadora con cuatro funciones:// 
//sumar,restar, multiplicar y dividir//
//Inicio//
#include <stdio.h>
int main()
{
    //Inicializamos variables//
    int res = 0;
    int a = 0;
    int b = 0;
    int op;
 
 //Imprimimos Menu//
    printf ("escoje una opción; \n");
    printf ("1- suma \n");
    printf ("2- resta \n");
    printf ("3- multiplicación \n");
    printf ("4- división\n");
    printf ("0- Salida\n");
  //Leer op//  
    scanf ("%u" , &op);
  // Si op es diferente de 0//
    while (op !=0)
{
    // Imprimir ingresar los numeros a, b//
    printf ("ingresa el primer valor;\n");
    printf ("ingrese el segundo valor;\n");
   //Leer a, b
    scanf ("%d" ,& a);
    scanf ("%d" ,& b);
    //ingresar a la opción escogida//
    if (op==1)
    {
        res=a+b;
    }
    else
    {
        if (op==2)
        {
            res=a-b;
        }
    else
        if (op==3)
        {
            res=a*b;
        }
    else
        if(op==4)
        {
            res=a/b;
        }
    }
//Imprimir res//
printf ("la operación es;%d\n", res);
//Imprimir Menú//
    printf ("escoje una opción; \n");
    printf ("1- suma \n");
    printf ("2- resta \n");
    printf ("3- multiplicación \n");
    printf ("4- división\n");
    printf ("0- Salida\n");
    //Leer op//
    scanf ("%u" , &op);
}

return 0;
}
//Fin//
