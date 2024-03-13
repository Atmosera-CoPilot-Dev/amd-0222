// main.cpp
#include <iostream>
#include <string>
#include "helpers.hpp"
#include "product.hpp"
#include <vector>
#include <fstream>

/*
This function demonstrates how to crete instances of a product and add them to a vector.
*/

void CreateProducts()
{

    // Display a welcome message to the user
    std::cout << GetWelcomeMessage() << std::endl;

    // Create a container that holds a dynamic array of objects of type Product.
    std::vector<Product> products;

    // Create a few products and add them to the vector
    products.push_back(Product(1, "Apple", 0.75));
    products.push_back(Product(2, "Banana", 0.60));
    products.push_back(Product(3, "Orange", 0.80));
    products.push_back(Product(3, "Grapefruit", 1.80));

    // Loop through the products and write their information to a file named: products.dat
    std::ofstream file("products.dat");
    // verify that the stream is open before writing to the file
    if (!file.is_open())
    {
        std::cerr << "The file could not be opened." << std::endl;
        return;
    }
    for (Product product : products)
    {
        file << product.GetId() << "," << product.GetName() << "," << product.GetPrice() << std::endl;
    }
    file.close();
}

int main()
{

    // Call the CreateProducts function to create and store products
    CreateProducts();
    return 0;
}
