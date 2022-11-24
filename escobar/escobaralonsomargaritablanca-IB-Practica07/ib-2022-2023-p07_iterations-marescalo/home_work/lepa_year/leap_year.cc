/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file 
  * @author Margarita Blanca Escobar Alonso alu0101567211@ull.edu.es
  * @date 
  * @brief 
  * 
  * @bug 
  * @see 
  */


#include <iostream>
#include <string>

int main() {

  int year{0};
  std::string answer{""};

  std::cin >> year; 

 if (year%100 == 1) {

    if (year%4 == 0) {
      answer = "yes"; 
     }  

    else {
      answer = "no";
    }
  }

  if (year%100 == 0) {
    std::cout << "no" << std::endl;
  }

std::cout << answer << std::endl;
  return 0;
}
