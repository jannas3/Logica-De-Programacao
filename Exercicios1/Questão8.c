/*Implemente um algoritmo que imprima na tela todas as tabuadas de multiplicar de 1 até 5.*/

#include <stdio.h>
#include <math.h>

main ()
{

int i,num=1;

 while(num<=5) {

    for (i=0;i<= 10;i++){


       printf("\n%d X %d = %d\n",num,i,num*i);

    }

    num=num+1;

 }
return(0);
}
