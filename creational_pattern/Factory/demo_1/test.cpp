#include <iostream>  
#include <string>  
  
// Product interface  
class Product {  
public:  
    virtual void use() = 0;  
    virtual ~Product() = default; // Virtual destructor  
};  
  
// Specific Product A  
class ProductA : public Product {  
public:  
    void use() override {  
        std::cout << "Using ProductA" << std::endl;  
    }
    //~ProductA() {}
};  
  
// Specific Product B  
class ProductB : public Product {  
public:  
    void use() override {  
        std::cout << "Using ProductB" << std::endl;  
    }
    //~ProductB() {}  
};  
  
// Factory class  
class ProductFactory {  
public:  
    static Product* createProduct(const std::string& type) {  
        if (type == "A") {  
            return new ProductA();  
        } else if (type == "B") {  
            return new ProductB();  
        } else {  
            return nullptr;  
        }  
    }  
};  
  
// Usage example  
int main() {  
    Product* productA = ProductFactory::createProduct("A");  
    if (productA) { // Check if the pointer is non-null  
        productA->use(); // Output "Using ProductA"  
        delete productA;  
    }  
  
    Product* productB = ProductFactory::createProduct("B");  
    if (productB) { // Check if the pointer is non-null  
        productB->use(); // Output "Using ProductB"  
        delete productB;  
    }  
  
    return 0;  
}