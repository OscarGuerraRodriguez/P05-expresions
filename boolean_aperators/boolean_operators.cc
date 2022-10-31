/*
* Universidad de La Laguna
* Grado en Ingeniería Informática
* Informática Básica
*
* Date: 30/10/22
* Author: Óscar Guerra Rodríguez
* Email: alu0101560342@ull.edu.es
* Brief: Elaborar un programa que imprima la tabla de la verdad de dos
*        variables booleanas con todos los operadores lógicos;
*/

#include<iostream>
int main() {

  std::cout << "Este programa imprime la tabla de la verdad de dos variables "
            << "booleanas para todos sus valores" << std::endl;
  bool primer_parametro{0} , segundo_parametro{0};
  std::cout << "A B AND OR NOT(A) NOT(B)" << std::endl;
  std::cout << primer_parametro << " " << segundo_parametro << "  " 
            << (primer_parametro && segundo_parametro) << "  "
            << (primer_parametro || segundo_parametro) << "    "
            << !primer_parametro << "      " << !segundo_parametro << std::endl;
  segundo_parametro = 1;
  std::cout << primer_parametro << " " << segundo_parametro << "  " 
            << (primer_parametro && segundo_parametro) << "  "
            << (primer_parametro || segundo_parametro) << "    "
            << !primer_parametro << "      " << !segundo_parametro << std::endl;
  primer_parametro = 1 , segundo_parametro = 0; 
  std::cout << primer_parametro << " " << segundo_parametro << "  " 
            << (primer_parametro && segundo_parametro) << "  "
            << (primer_parametro || segundo_parametro) << "    "
            << !primer_parametro << "      " << !segundo_parametro << std::endl;
  segundo_parametro = 1;
  std::cout << primer_parametro << " " << segundo_parametro << "  " 
            << (primer_parametro && segundo_parametro) << "  "
            << (primer_parametro || segundo_parametro) << "    "
            << !primer_parametro << "      " << !segundo_parametro << std::endl;
  return 0;
}
