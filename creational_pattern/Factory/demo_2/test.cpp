#include <iostream>  
#include "concrete_creator_a.h"  
#include "concrete_creator_b.h"  
  
int main() {  
    Creator* creatorA = new ConcreteCreatorA();  
    Product* productA = creatorA->createProduct();  
    productA->use(); // 输出 "Using ConcreteProductA"  
    delete productA;  
    delete creatorA;  
  
    Creator* creatorB = new ConcreteCreatorB();  
    Product* productB = creatorB->createProduct();  
    productB->use(); // 输出 "Using ConcreteProductB"  
    delete productB;  
    delete creatorB;  
  
    return 0;  
}