#include "Inventory.h"

void Inventory::addProduct(string &name, int quatity) {
    products[name] += quatity;
}

int Inventory::getProduct(string &name) {
    auto id = products.find(name);
    if(id != products.end()) {
        return id->second;
    }
    return -1;
}

bool Inventory::removeProduct(string &name) {
    // Eliminar el producto y el mayor para retornar un booleano que tambien se utiliza en el main
    return products.erase(name) > 0;
}