/*
* Universidad de La Laguna
* Informática Básica
* Author: Óscar Guerra Rodríguez
* Date: 31/10/2022
* Brief: Escribir un programa que sume tres enteros dados
*/
#include<iostream>
int main() {
  int primer_sumando{0} , segundo_sumando{0} , tercer_sumando{0}; 
  std::cin >> primer_sumando >> segundo_sumando >> tercer_sumando;
  std::cout << (primer_sumando + segundo_sumando + tercer_sumando) 
            << std::endl;
  return 0;
}
