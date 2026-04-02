//
// Created by sanved on 4/2/26.
//
#include <iostream>

void table_function(int a) {
    for (int i = 1; i < 11; i++){
        int MyResult = a * i;

        std::cout << a << " * "<< i << " = " << MyResult <<std::endl;
    }
};