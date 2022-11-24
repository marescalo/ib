/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file harmonic numbers (2)
  * @author Margarita Blanca Escobar Alonso alu0101567211@ull.edu.es
  * @date NOv 10 2022
  * @brief 
  *
  * @see https://jutge.org/problems/P58153 
  */

#include <iostream>
#include <iomanip>

int main() {

  int numb1;
  int numb2;
  double sum1;
  double sum2;

  std::cin >> numb1 >> numb2;

  if (numb1 > numb2) {
    for (double i=1.00 ; i<=numb1 ; i++) {
      sum1 =sum1 + 1.00/i;
    }

    for (double i=1.00; i<=numb2 ; i++) {
      sum2 = sum2 + 1.00/i;
    }
    std::cout << std::fixed << std::setprecision(10) << sum1-sum2 << std::endl;
  }

  else {
    std::cout << std::fixed << std::setprecision(10) << static_cast<double>(0.00) << std::endl;
  }

  return 0;
}
