#include <stdio.h>

    int main ()
{
                // Cabeçalho informando finalidade do aplicativo.
 printf ("CALCULO DE NOTA\n");

       float n1; // Grau 1
       float n2; // Grau 2
       float total; // Nota final
       float n3; //Grau 3
       float total2; // Nota após recuperação

                 // Area referente a nota do N1.
    printf ("Digite a nota N1=\n"); 
       scanf ("%f", &n1) ;


                 // Area referente a nota do N2.
    printf ("Digite a nota N2=\n");
       scanf ("%f", &n2) ;

                 // Calculo Somatório de Notas.
   total = (n1 * 0.4) + (n2 * 0.6);

    printf ("Sua nota é= %.2f\n", total);

                 // Variavel que ira lançar mensagem de APROVADO/REPROVADO de acordo com a nota total.
    if (total < 6) { 
              
                 // Variavel para se a nota for inferior a média final solicitar a nota da prova de recuperação.
       printf ("Digite sua nota do N3=\n");
         scanf ("%f", &n3) ;
    
    total2 = (n1 * 0.4) + (n3 * 0.6);

     printf ("Sua nota é= %.2f\n", total2);
               
               // Mensagem para caso mesmo assim não atinja a média.
    
    if (total2 <6) { printf ("REPROVADO!\n"); }

    if (total2 >= 6) { printf ("APROVADO!\n"); } 

}              
              // Mensagem para caso seja aprovado.
   
    if (total >= 6) { 
       printf ("APROVADO!\n");}

system ("pause") ;

 return 0;
}