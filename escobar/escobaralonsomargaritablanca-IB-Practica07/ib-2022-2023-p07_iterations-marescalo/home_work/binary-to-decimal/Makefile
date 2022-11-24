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

all: binary-to-decimal

binary-to-decimal: binary-to-decimal.o 
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

.PHONY: all clean

	$(CXX) $(CXXFLAGS) -c $<

clean :
	rm -f *.o binary-to-decimal
	rm -rf *~ basura b i
