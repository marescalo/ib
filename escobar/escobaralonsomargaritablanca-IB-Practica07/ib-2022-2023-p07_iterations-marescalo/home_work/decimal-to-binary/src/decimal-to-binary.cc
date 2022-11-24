/**
	rm -f *.o (archivo)
	rm -rf *~ basura b i
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

int decimal_converter(int natural_number) {
  int binary_number{0};
  int counter{0};
  int sum{0};

  while (natural_number > 0) {
    binary_number = natural_number%2;

    for (int i{1}; i<=counter; ++i) {  
      binary_number = binary_number * 10;

    }

    sum = sum + binary_number;
    natural_number = natural_number/2;
    ++counter;
  }

  return sum;
}

int main() {
  int decimal_num_user{0};
  std::cin >> decimal_num_user;
  std::cout << decimal_converter(decimal_num_user) << std::endl;
  return 0;
}
