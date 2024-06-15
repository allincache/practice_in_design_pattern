#ifndef CONCRETEPRODUCTA_H  
#define CONCRETEPRODUCTA_H  
  
#include "product.h"
#include <iostream>
  
class ConcreteProductA : public Product {  
public:  
    void use() override {  
        std::cout << "Using ConcreteProductA" << std::endl;  
    }  
};  
  
#endif