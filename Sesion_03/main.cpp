#include <iostream>
#include <string>
#include <fstream>

// Clase
class Persona {
public:
    std::string nombre;
    std::string apellido;
    int edad;

    void saludar() const {
        std::cout << "Hola, me llamo " << nombre << " " << apellido << std::endl;
        std::cout << "y tengo " << edad << " recien cumplidos.. :D" << std::endl;
    }

    void setEdad(int edad) {
        this->edad = edad;
    }

    int getEdad() {
        return this->edad;
    }

    void setNombre(std::string nombre) {
        this->nombre = nombre;
    }

    std::string getNombre() {
        return this->nombre;
    }
};



// Clase base
class Animal {
  public:
    virtual void hacerSonido() {
      std::cout << "Un animal realiza un sonido..\n" ;
    }
};

// Clase derivada
class Gato : public Animal {
  public:
    void hacerSonido() override {
        std::cout << "El gato hace: Miau..\n" ;
    }
};

// Clase derivada
class Perro : public Animal {
public:
    void hacerSonido() override {
        std::cout << "El perro hace: Guau..\n" ;
    }
};

// Clase derivada
class Vaca : public Animal {
public:
    void hacerSonido() override {
        std::cout << "El vaca hace: Muuu..\n" ;
    }
};


void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

// Función para ordenar un array utilizando el algoritmo Bubble Sort
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Intercambiar los elementos si están en el orden incorrecto
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {

//    /*Crear y Escribir*/
//
//    int rno,fee;
//    char name[100];
//
//    std::ofstream nuevo_archivo("./test.txt");
//
//    std::cout<<"Coloca tu carnet:";
//    std::cin>>rno;
//
//    std::cout<<"\nColoca tu nombre:";
//    std::cin>>name;
//
//    std::cout<<"\nColoca tu edad:";
//    std::cin>>fee;
//
//    nuevo_archivo<<rno<<"\t"<<name<<"\t"<<fee;
//
//    nuevo_archivo.close();
//
//    /*Leer*/
//    std::string myText;
//
//    std::ifstream archivo("./test.txt");
//
//    while (getline (archivo, myText)) {
//        std::cout << myText;
//    }
//
//    archivo.close();

//    Persona p1;
//    p1.nombre = "Yazmin";
//    p1.apellido = "Roman";
//    p1.edad = 23;
//
//    std::cout << "---------------------------------------\n" ;
//    p1.saludar();
//    std::cout << "---------------------------------------\n" ;
//    p1.setEdad(24);
//    p1.saludar();
//    std::cout << "---------------------------------------\n" ;
//    p1.setNombre("Maria");
//    p1.saludar();
//    std::cout << "---------------------------------------\n" ;
//    int edad = p1.getEdad();
//    std::string nombre = p1.getNombre();
//    std::cout << "------" <<edad<< "------" <<nombre<< "------\n" ;

//    //ESTATICO
//    Animal animal;
//    Gato gato;
//    Perro perro;
//    Vaca vaca;
//
//    animal.hacerSonido();
//    gato.hacerSonido();
//    perro.hacerSonido();
//    vaca.hacerSonido();

//    //DINAMICO
//    // Un puntero de tipo Animal que apunta a un objeto de tipo Gato, Perro y Vaca
//    auto* animal = new Animal();
//    Animal* gato = new Gato();
//    Animal* perro = new Perro();
//    Animal* vaca = new Vaca();
//
//    // Llamada al método de la clase en tiempo de ejecución
//    animal->hacerSonido();
//    gato->hacerSonido();
//    perro->hacerSonido();
//    vaca->hacerSonido();
//
//    // Liberar la memoria asignada dinámicamente
//    delete animal;
//    delete gato;
//    delete perro;
//    delete vaca;


//    //Trucos o atajos en código en c++
//    //Descubrir si un número es par o no sin utilizar el módulo
//
//    int num;
//    int num_;
//    std::cin >> num;
//
//    num_ = num;
//
//    if (num & 1) //Explicación: Verifica el bit menos significativo del numero en binario.
//        std::cout << "IMPAR";
//    else
//        std::cout << "PAR";
//
//    // Multiplicar y dividir de manera rápida por 2
//    // Multiplica num con 2
//    num = num << 1;
//    std::cout << "Multiplicacion por 2: " << num << std::endl;
//    // Divide num en 2
//    num_ = num_  >> 1;
//    std::cout << "Division en 2: " << num_ << std::endl;
//
//    //Explicación: En ambos casos desplaza todos los bits.
//    // Multiplicación a la izquierda
//    // División a la derecha
//
//
//    // Intercambiar números de forma rápida con XOR
//    // Multiplica num con 2
//    int a = 3;
//    int b = 8;
//
//    a ^= b; // Ahora, a = 11 ^ 1000 = 1011 (binario), que es 11 en decimal.
//    b ^= a; // Ahora, b = 1000 ^ 1011 = 11 (binario), que es 3 en decimal.
//    a ^= b; // Finalmente, a = 1011 ^ 11 = 1000 (binario), que es 8 en decimal.
//    std::cout << "a: " << a << std::endl;
//    std::cout << "b: " << b << std::endl;
//
//    //Explicación: La operación ^ toma la diferencia bit a bit entre los dos números.
//
//
//    // Reordenamiento de datos por medio de Bubblesort
//
//    int arr[] = {5, 2, 9, 1, 5};
//    int size = sizeof(arr) / sizeof(arr[0]);
//
//    std::cout << "Array original: ";
//    printArray(arr, size);
//
//    bubbleSort(arr, size);
//
//    std::cout << "Array ordenado: ";
//    printArray(arr, size);


}

