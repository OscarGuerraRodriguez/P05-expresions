/*
* Universidad de La Laguna
* Grado en Ingeniería Informática
* Informática Básica
*
* Date: 30/10/22
* Author: Óscar Guerra Rodríguez
* Email: alu0101560342@ull.edu.es
* Brief: Elaborar un programa que imprima el cociente y resto de la división 
*        de dos enteros.
*/
#include<iostream>
int main() {
  int divisor{0} , dividendo{1};
  std::cin >> divisor >> dividendo;
  std::cout << (divisor / dividendo) << " " << (divisor % dividendo) 
            << std::endl;
  return 0;
}
