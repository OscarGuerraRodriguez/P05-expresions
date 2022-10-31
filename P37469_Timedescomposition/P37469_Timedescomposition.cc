/* 
* Universidad de La Laguna
* Informática Básica
* Author: Óscar Guerra Ródríguez
* Date: 31/10/2022
* Brief: Escribir un programa que transforme una cantidad dada de segundos 
*        en horas minutos y segundos.
*/
#include<iostream>
int main() {
  int segundos{0} , minutos{0} , horas{0};
  std::cin >> segundos;
  const int kSegundos_en_una_hora{3600} , kSegundos_en_un_minuto{60};
  horas = (segundos / kSegundos_en_una_hora);
  segundos = (segundos % kSegundos_en_una_hora);
  minutos = (segundos / kSegundos_en_un_minuto);
  segundos = (segundos % kSegundos_en_un_minuto);
  std::cout << horas << " " << minutos << " " << segundos << std::endl;
  return 0;
}
