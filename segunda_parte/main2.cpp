//
// Created by Flavia Rivero on 29/10/24.
//

#include <iostream>
#include <stdio.h>
#include "funciones.h"
#include "matematicas.h"
#define PI 3.14159
#define AREA_CIRCULO(r) (PI * (r) * (r))
#include <cmath>
#include "encabezado.h"


//utilizar la constante PI
double volumen_esfera(double radio) {
        return (4.0 / 3.0) * PI * std::pow(radio, 3);
}

int main() {

    std::cout << "¡Hola CLion!" << std::endl;

    int resultadoSuma = suma(1, 3);
    std::cout << "La suma es: " << resultadoSuma << std::endl;

    int resultadoResta = resta(1, 3);
    std::cout << "La resta es: " << resultadoResta << std::endl;

    std::cout << "Usando la biblioteca dinámica\n";

// area de un circulo
    double radio = 5.0;
    double area = AREA_CIRCULO(radio);
    std::cout << "El área de un círculo con radio " << radio << " es: " << area << std::endl;

 //volumen de una esfera
    double volumen = volumen_esfera(radio);
    std::cout << "El volumen de una esfera con radio " << radio << " es: " << volumen << std::endl;

// utilizar #include para incluir un archivo de encabezado
    saludar();


    return 0;
}

