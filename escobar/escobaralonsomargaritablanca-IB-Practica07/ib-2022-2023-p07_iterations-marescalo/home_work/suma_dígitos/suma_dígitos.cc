/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file suma de dígitos
  * @author Margarita Blanca Escobar Alonso alu0101567211@ull.edu.es
  * @date 17 nov 2022 
  * @brief programa que lea un número natural e imprima como salida la suma de los dígitos del número en cuestión.
  * 
  * @bug 
  * @see 
  */

#include <iostream>

int main() {
  int numb1;
  int numb2;
  int sum{0};

  std::cin >> numb1;

  while (numb1 > 0) {
    numb2 = numb1%10;
    sum = sum + numb2;
    numb1 = numb1/10;
  }

  std::cout << sum << std::endl ;

  return 0;
}
