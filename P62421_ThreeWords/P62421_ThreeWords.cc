/*
* Universidad de La Laguna
* Informática Básica
* Date: 31/10/2022
* Author: Óscar Guerra Rodríguez
* Brief: Dadas tres palabras imprimirlas en el orden inveerso al de la entrada
*/
#include<iostream>
#include<string>
int main() {
  std::string primera_palabra{" "} , segunda_palabra{" "} , tercera_palabra{" "};
  std::cin >> primera_palabra >> segunda_palabra >> tercera_palabra;
  std::cout << tercera_palabra << " " << segunda_palabra << " "
            << primera_palabra << std::endl;
  return 0;
}
