#include <iostream>

int main() {
    std::cout << "Hello World!" << std::endl;

    int a = 3;
    int b = 5;

    //Explicación

    /*
     * El siguiente ejemplo es un ciclo de 1 - 50 en el que por
     * medio de 3 condiciones encontramos todos los números
     * múltiplos de 3, 5 y 15 con la ayuda de nuestras variables
     * locales a y b.
     * */

    // sintaxis de for ( inicio ; condicion ; salto )
    for (int indice = 1; indice <= 50; ++indice) {

        if (indice % a == 0 && indice % b == 0) {  // condicion AND con a y b
            std::cout << "Hola Multiplo 15 - " << indice << std::endl;
        } else if (indice % a == 0) { // condicion Igualdad con a
            std::cout << "Hola Multiplo 3 - " << indice << std::endl;
        } else if (indice % b == 0) { // condicion Igualdad con b
            std::cout << "Hola Multiplo 5 - " << indice << std::endl;
        } else { // Si no se cumple ninguna condicion se imprime el número
            std::cout << "Hola indice " << indice << std::endl;
        }

    }
}


