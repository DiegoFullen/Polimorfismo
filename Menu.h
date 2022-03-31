#pragma once
#include <iostream>
#include "Triangle.h"
#include "Square.h"
#include "Rectangle.h"
#include "Canva.h"
#include "Shape.h"
#include "TrianguloEqu.h"

class Menu{
public:
    void menu() {
        Shape* S = nullptr;
        Canva c;
        int opcion = 0;
        std::cout << "Que quieres imprimir?" << std::endl;
        std::cout << " 1- Cuadrado\n 2- Tiangulo Isoceles\n 3- Triangulo Equilatero\n 4- Rectangulo" << std::endl;
        std::cin >> opcion;
        switch (opcion) {
        case 1:
            S = new Square();
            break;
        case 2:
            S = new Triangle();
            break;
        case 3:
            S = new TrianguloEqu();
            break;
        case 4:
            S = new Rectangle();
            break;
        
        }

        if (S != nullptr) {
            c.printShape(S);
            delete S;
        }
        std::cout << "---------------------------------------------" << std::endl;
    }
};