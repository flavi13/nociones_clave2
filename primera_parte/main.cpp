//
// Created by Flavia Rivero on 29/10/24.
//

#include <iostream>
#include "persona.h"
#include "estudiante.h"

int sumar(int a, int b) {
    return a + b;
}

int g = 20;
int main() {



    std::cout << "Hola Mundo" << std::endl;
    int resultado = sumar(5, 3);
    std::cout << "La suma es: " << resultado << std::endl;

    std::cout << "Valor de g antes de la función suma: " << g << std::endl;
    std::cout << "La suma es: " << sumar(5, g) << std::endl;
    std::cout << "Valor de g después de la función suma: " << g << std::endl;

    // segundo ejercicio: crear dos objetos persona donde se asignen valores a sus atributos y luego se impriman en la consola
    Persona p1;
    p1.setNombre("Juan");
    p1.setEdad(30);
    p1.setGenero("Masculino");

    Persona p2;
    p2.setNombre("Flavia");
    p2.setEdad(18);
    p2.setGenero("Femenino");
    std::cout << "Persona 1: " << p1.getNombre() << ", " << p1.getEdad() << ", " << p1.getGenero() << std::endl;
    std::cout << "Persona 2: " << p2.getNombre() << ", " << p2.getEdad() << ", " << p2.getGenero() << std::endl;

    // segundo ejercicio parte 2 .Crear objetos de la clase Estudiante y llamar a la función mostrarDetalles
    Estudiante e1;
    e1.setNombre("Luis");
    e1.setEdad(22);
    e1.setGenero("Masculino");
    e1.setGrado("Tercer Año");

    Estudiante e2;
    e2.setNombre("Maria");
    e2.setEdad(21);
    e2.setGenero("Femenino");
    e2.setGrado("Cuarto Año");

    std::cout << "Detalles del Estudiante 1:" << std::endl;
    e1.mostrarDetalles();

    std::cout << "Detalles del Estudiante 2:" << std::endl;
    e2.mostrarDetalles();

    std::cout << "Usando la biblioteca estática\n";

    return 0;
}