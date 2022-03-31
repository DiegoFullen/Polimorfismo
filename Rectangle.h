#pragma once
#include "Shape.h"
#include <iostream>

class Rectangle : public Shape{
public:
	Rectangle() {
		std::cout << "Se crea rectangulo" << std::endl;
	}
	~Rectangle() {
		std::cout << "Se destruye rectangulo" << std::endl;
	}
	void draw() {
		for (int i = 0; i < this->lado; i++) {
			for (int j = 0; j < this->lado/2; j++) {
				std::cout << " * ";
			}
			std::cout << "" << std::endl;
		}
	}
};