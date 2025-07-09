#include <iostream>
using namespace std;
   int InvertSinal(int &valor){
   int resultado;
       if (valor > 0){
           resultado = -(valor);
       }else if(valor<0){
           resultado = abs(valor);
       }
       return resultado;
   }
