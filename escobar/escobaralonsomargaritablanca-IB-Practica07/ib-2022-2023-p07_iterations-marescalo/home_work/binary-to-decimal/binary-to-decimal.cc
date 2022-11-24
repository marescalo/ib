/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file binary-to-decimal
  * @author Margarita Blanca Escobar Alonso alu0101567211@ull.edu.es
  * @date 17 nov 2022
  * @brief convierta números binarios en decimal.
  * 
  * @bug 
  * @see 
  */

#include <iostream>

int main(){

  int number{0};
  int counter{0};
  int sum{0};
  int binaryNumber;

std::cin >> binaryNumber;

  while (binaryNumber > 0) {
    number = binaryNumber%10;
    binaryNumber = binaryNumber/10;
    int potencia{1};
    if (number==1) {
      if (counter==0) {
        sum = sum + potencia;
      }
      else {
        for (int i{1}; i <= counter; i++) {
          potencia = 2 * potencia;
        }
        sum = sum + potencia;
      }
    }
    else if (number==0) {
      counter++;
      continue;
    }
    else {
      std::cout << "error" << std::endl;
    }
    counter++;
  }
  std::cout << sum << std::endl;

  return 0;
}
