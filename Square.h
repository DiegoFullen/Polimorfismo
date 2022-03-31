#pragma once
#include "Shape.h"
#include <iostream>

class Square : public Shape{
public:
	Square() {
		std::cout << "Se crea cuadrado" << std::endl;
	}
	~Square() {
		std::cout << "Se destruye cuadrado" << std::endl;
	}
	void draw() {
		for (int j = 0; j < 5; j++) {
			std::cout << " * ";
		}
		std::cout << "" << std::endl;

		for (int i = 0; i < 5; i++) {
			std::cout << " * ";
			//" * "
			//"   "
			for (int j = 0; j < 3; j++) {
				std::cout << "   ";
			}
			std::cout << " * " << std::endl;
		}

		for (int j = 0; j < 5 ; j++) {
			std::cout << " * ";
		}
	}
};