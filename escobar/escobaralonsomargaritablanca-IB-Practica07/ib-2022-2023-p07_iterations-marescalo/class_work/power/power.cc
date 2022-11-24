/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file power
  * @author Margarita Blanca Escobar Alonso alu0101567211@ull.edu.es
  * @date 18 nov 2022
  * @brief program to compute powers.
  * 
  * @bug 
  * @see https://jutge.org/problems/P79817_en/submissions/S002 
  */

#include <iostream>
#include <math.h>

int main() {
  int a{0};
  int b{0};

  std::cin >> a >> b;
  std::cout << pow(a,b) << '\n';

  while (std::cin >> a) {
    int sum{1};
      std::cin >> b;

        for (int i = 0; i < b; i++) sum*=a; // sum *= a <==>  sum = sum * a
          std::cout << sum  << std::endl;
    }

  return 0;
}
