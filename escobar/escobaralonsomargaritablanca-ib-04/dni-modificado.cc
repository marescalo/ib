/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author F. de Sande
 * @date Oct 27 2021
 * @brief Computes the DNI letter from the number
 *        Jutge problem P97139
 *        The program takes directly the input and prints the output
 * @see https://jutge.org/problems/P97139
 * @see http://www.interior.gob.es/web/servicios-al-ciudadano/dni/calculo-del-digito-de-control-del-nif-nie
 */

#include <iostream>
#include <string>

int main() {
  int dni{0};

  std::cin >> dni;
  const std::string kLetters{"TRWAGMYFPDXBNJZSQVHLCKE"};
  std::cout << "El número de DNI es:" << dni << std::endl;
  return 0;
}
