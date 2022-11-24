/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file Time descomposition
  * @author Margarita Blanca Escobar Alonso alu0101567211@ull.edu.es
  * @date Nov4 2022
  * @brief This program descompound seconds into hour minutes and seconds 
  * 
  * @see https://jutge.org/problems/P37469_en
  */

#include<iostream>
  int main(){
  
  int second{0};
  int hour;
  int minutes;
  int seconds;

std::cin >> second;
std::cout << hour=second*3600<< " " << minutes=second%60 << " " << seconds=minutes%60 << " " << std::endl;

return 0;
}
