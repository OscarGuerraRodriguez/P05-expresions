/*
* Universidad de La Laguna
* Grado en Ingeniería Informática
* Informática Básica
*
* Date: 30/10/22
* Author: Óscar Guerra Rodríguez
* Email: alu0101560342@ull.edu.es
* Brief: crear un programa que le aplique a dos variables todos los operadores
*        aritméticos y de comparación 
*/
#include<iostream>
int main() {
  std::cout << "Este programa dadas dos variables imprime el resultado de "
            << "aplicarles todos los operadores aritméticos y de comparación" 
            << std::endl;
  int primer_parametro{0} , segundo_parametro{0};
  std::cout << "Introduzca dos números: ";
  std::cin >> primer_parametro >> segundo_parametro;
  std::cout << primer_parametro << " + " << segundo_parametro << " = "
            << (primer_parametro + segundo_parametro) << std::endl;
  std::cout << primer_parametro << " - " << segundo_parametro << " = "
            << (primer_parametro - segundo_parametro) << std::endl;
  std::cout << primer_parametro << " * " << segundo_parametro << " = "
            << (primer_parametro * segundo_parametro) << std::endl;
  std::cout << primer_parametro << " / " << segundo_parametro << " = "
            << (primer_parametro / segundo_parametro) << std::endl;
  std::cout << primer_parametro << " % " << segundo_parametro << " = "
            << (primer_parametro % segundo_parametro) << std::endl;
//Repetimos para los operadores de comparación
  std::cout << primer_parametro << " == " << segundo_parametro << " = "
            << (primer_parametro == segundo_parametro) << std::endl;
  std::cout << primer_parametro << " != " << segundo_parametro << " = "
            << (primer_parametro != segundo_parametro) << std::endl;
  std::cout << primer_parametro << " > " << segundo_parametro << " = "
            << (primer_parametro > segundo_parametro) << std::endl;
  std::cout << primer_parametro << " < " << segundo_parametro << " = "
            << (primer_parametro < segundo_parametro) << std::endl;
  std::cout << primer_parametro << " >= " << segundo_parametro << " = "
            << (primer_parametro >= segundo_parametro) << std::endl;
  std::cout << primer_parametro << " <= " << segundo_parametro << " = "
            << (primer_parametro <= segundo_parametro) << std::endl;
  return 0;
}
