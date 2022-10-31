/*
* Universidad de La Laguna
* Grado en Ingeniería Informática
* Informática Básica
*
* Date: 30/10/22
* Author: Óscar Guerra Rodríguez
* Email: alu0101560342@ull.edu.es
* Brief: Mediante el uso del operador static_cast y conociendo las
*        peculiaridades del código ASCII elaborar un programa que convierta un 
*        caracter letra mayúscula en su respectiva letra minúscula
*/

#include<iostream>

int main() {

  std::cout << "Estre programa dada una letra mayúscula la imprime en "
            << "minúscula." << std::endl; 
  char letra_minuscula{' '};
  std::cout << "Teclee una letra mayúscula: ";
  std::cin >> letra_minuscula;
  std::cout << static_cast<char>(static_cast<int>(letra_minuscula) + 32) 
            << std::endl;

  return 0;
}
