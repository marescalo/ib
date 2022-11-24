/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file Number of digits 
  * @author Margarita Blanca Escobar Alonso alu0101567211@ull.edu.es
  * @date 18 nov 2022 
  * @brief program that reads a number and prints its number of digits.
  * 
  * @bug 
  * @see 
  */

#include <iostream>

int main () {

     std::string num;
  std::cin >> num;

  std::cout << "The number of digits of " << num << " " << "is" << " " << num.size() << "." << std::endl;

  return 0;
}
