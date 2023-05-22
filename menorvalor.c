#include <stdio.h>

 int menorValor (int a, int b, int c){
   int menor, resultado; 
      if (a<b){
        if (a<c)
          menor = a;
        else 
          menor = c;
      } else {
        if (b<c)
          menor = b;
        else
          menor = c;
      }
   return menor;
 }

main (){
  
  int d,e,f,g;
  printf("Digite três valores inteiros e descubra qual deles é o menor: ");
  scanf("%d, %d, $d", &d, &e, &f);
   g = menorValor(d,e,f);
  printf("O menor valor é %d", g);
   return 0; 
}
