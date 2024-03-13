#include "product.hpp"

// Construct a new Product object.
Product::Product(int id, std::string name, double price)
{
  // implement the constructor by initializing the fields with the provided values
    this->id = id;
    this->name = name;
    this->price = price;
}


// Implement the GetId method to return the id of the product
int Product::GetId() const
{
    // implement the GetId method to return the id of the product
    return this->id;
}

// Implement the GetName method to return the name of the product
std::string Product::GetName() const
{
   // implement the GetName method to return the name of the product
    return this->name;
}

// Implement the GetPrice method to return the price of the product
double Product::GetPrice() const
{
    // implement the GetPrice method to return the price of the product
    return this->price;
}

// Implement the SetName method to update the name of the product
void Product::SetName(std::string name)
{
    // implement the SetName method to update the name of the product
    this->name = name;
}

// Implement the SetPrice method to update the price of the product
void Product::SetPrice(double price)
{
    // validate the price to ensure it is positive and less than 10000
    if (price < 0 || price > 10000)
    {
        throw "Invalid price";
    }
    this->price = price;
}

// Implement the ToString method to return a string representation of the product
std::string Product::ToString() const
{
    // implement the ToString method to return a string representation of the product
    return "Product: " + this->name + " (ID: " + std::to_string(this->id) + ", Price: $" + std::to_string(this->price) + ")";
}