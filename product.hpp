/*
This file define a class to represent a product, including the following private fields
- id: an integer representing the product's id
- name: a string representing the name of the product
- price: a double representing the price of the product
*/
#pragma once

#include <string>

class Product
{
public:
    // Constructor
    Product(int id=-1, std::string name="", double price=0.0);

    // Getters
    int GetId() const;
    std::string GetName() const;
    double GetPrice() const;

    // Setters
    void SetName(std::string name);
    void SetPrice(double price);

    // ToString
    std::string ToString() const;

private:
    int id;
    std::string name;
    double price;
};
