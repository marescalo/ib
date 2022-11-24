/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file Serie de Fibonacci
  * @author Margarita Blanca Escobar Alonso alu0101567211@ull.edu.es
  * @date 17 nov 2022 
  * @brief programa que imprima los N primeros términos de la Serie de Fibonacci.
  * 
  * @bug 
  * @see 
  */


#include <iostream>

int main() {

  int numb1;
  int numb2{0};
  int numb3{1};
  int sum{0};

  std::cin >> numb1;

  while (numb1 > 0) {
    sum = numb2 + numb3;

    std::cout << numb2 << " " ;

    numb2 = numb3;
    numb3 = sum;
    numb1-- ;

  }  

  std::cout << std::endl ;

  return 0;
}
