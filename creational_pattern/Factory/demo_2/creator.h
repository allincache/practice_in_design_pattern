#ifndef CREATOR_H  
#define CREATOR_H  
  
#include "product.h"  
  
class Creator {  
public:  
    virtual ~Creator() {}  
    virtual Product* createProduct() = 0;  
};  
  
#endif

