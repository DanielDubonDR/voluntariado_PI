#include <iostream>

int sum ( int k ) {
    if (k > 0) {
        return k + sum(k - 1); ///10 + 9 + 8 + ... + 1 + 0
    } else {
        return 0;
    }
}

// Descomentar lo que sea de interés

int main() {
//    std::string frutas [ 4 ] = {"banano", "pera", "manzanas", "naranja"};
//
//    std::cout << frutas[2] << std::endl;

//    struct car {
//        std::string brand;
//        std::string model;
//        int year;
//    };
//
//    car myCar1;
//    myCar1.brand = "BMW";
//    myCar1.model = "X5";
//    myCar1.year = 1999;
//
//    car myCar2;
//    myCar2.brand = "Ford";
//    myCar2.model = "Mustang";
//    myCar2.year = 1969;
//
//    std::cout << myCar1.year << std::endl;
//    std::cout << myCar2.model << std::endl;

//    int a = 42;
//    int *ptr;
//    ptr = &a;
//    int num = *ptr;
//    std::cout << num << std::endl;

//    int result = sum ( 10 );
//    std::cout << result << std::endl;
}
