#include "matematicas.h"
int suma(int a, int b) {
    return a + b;
}
int resta(int a, int b) {
    return a - b;
}
int multiplica(int a, int b) {
    return a * b;
}
double divide(int a, int b) {
    if (b != 0) {
         return static_cast<double>(a) / b;
    } else {
         return 0; // Manejo simple de errores
    }
}