#include "Inventory.h"
#include "History.h"
#include <iostream>

int main() {

    Inventory inventory;
    History history;

    string product1 = "audifonos";
    int choice;

    do {
        cout<<"Inventario AKIBA COMICS 2024"<<'\n';
        cout<<"1.- Agregar un producto: "<<'\n';
        cout<<"5.- Salir del inventario"<<'\n';
        cout<<"Eliga una opcion: ";
        cin >> choice;

        string nombre;
        int cantidad;
        switch(choice) {
            case 1: {
                cout<<"Nombre del producto: ";
                cin>>nombre;
                cout<<"Cantidad: ";
                cin>>cantidad;
                inventory.addProduct(nombre, cantidad);
                break;
            }
            case 5: {
                cout<<"Saliendo del Inventario"<<'\n';
                break;
            }
            default: {
                cout<<"Opcion no valida"<<'\n';
                break;
            }
        }
    } while(choice != 5);

    return 0;
}