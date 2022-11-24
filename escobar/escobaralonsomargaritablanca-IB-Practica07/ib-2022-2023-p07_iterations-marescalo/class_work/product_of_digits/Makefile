# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @author Margarita Blanca Escobar Alonso  alu0101567211@ull.edu.es
# @date 
# @brief 
# 

CXX = g++						           
CXXFLAGS = -std=c++17 -Wall	 	 
LDFLAGS =						           

all: product_of_digits

product_of_digits: product_of_digits.o 
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

.PHONY: all clean

	$(CXX) $(CXXFLAGS) -c $<

clean :
	rm -f *.o product_of_digits
	rm -rf *~ basura b i
