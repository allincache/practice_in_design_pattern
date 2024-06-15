#ifndef CONCRETEPRODUCTB_H  
#define CONCRETEPRODUCTB_H  
  
#include "product.h"  
#include <iostream>

class ConcreteProductB : public Product {  
public:  
    void use() override {  
        std::cout << "Using ConcreteProductB" << std::endl;  
    }  
};  
  
#endif