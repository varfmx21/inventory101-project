#include "Inventory.h"

int main() {

    Inventory inventory;

    string product1 = "audifonos";

    inventory.addProduct(product1, 3);
    inventory.getProduct(product1);

    return 0;
}