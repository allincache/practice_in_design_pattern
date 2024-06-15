#ifndef CONCRETECREATORA_H  
#define CONCRETECREATORA_H  
  
#include "creator.h"  
#include "concrete_product_a.h"  
  
class ConcreteCreatorA : public Creator {  
public:  
    Product* createProduct() override {  
        return new ConcreteProductA();  
    }  
};  
  
#endif