#include "product.hpp"

/**
 * @brief Constructs a new Product object.
 * 
 * @param id The ID of the product.
 * @param name The name of the product.
 * @param price The price of the product.
 */
Product::Product(int id, std::string name, double price)
{
  // implement the constructor by initializing the fields with the provided values
    this->id = id;
    this->name = name;
    this->price = price;
}

int Product::GetId() const
{
    // implement the GetId method to return the id of the product
    return this->id;
}

std::string Product::GetName() const
{
   // implement the GetName method to return the name of the product
    return this->name;
}

double Product::GetPrice() const
{
    // implement the GetPrice method to return the price of the product
    return this->price;
}

void Product::SetName(std::string name)
{
    // implement the SetName method to update the name of the product
    this->name = name;
}

void Product::SetPrice(double price)
{
    // validate the price to ensure it is positive and less than 10000
    if (price < 0 || price > 10000)
    {
        throw "Invalid price";
    }
    this->price = price;
}
