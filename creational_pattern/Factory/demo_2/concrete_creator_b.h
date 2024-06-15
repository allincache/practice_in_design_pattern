#ifndef CONCRETECREATORB_H  
#define CONCRETECREATORB_H  
  
#include "creator.h"  
#include "concrete_product_b.h"  
  
class ConcreteCreatorB : public Creator {  
public:  
    Product* createProduct() override {  
        return new ConcreteProductB();  
    }  
};  
  
#endif