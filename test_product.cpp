#include <iostream>
#include <stdexcept>
#include "product.hpp"

int main()
{
    // Test valid price
    Product p1;
    try
    {
        p1.SetPrice(99.99);
        std::cout << "Test 1 passed: Valid price set successfully." << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << "Test 1 failed: " << e.what() << std::endl;
    }

    // Test negative price
    Product p2;
    try
    {
        p2.SetPrice(-10.0);
        std::cout << "Test 2 failed: Exception not thrown for negative price." << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << "Test 2 passed: Exception thrown for negative price." << std::endl;
    }

    // Test price greater than 10000
    Product p3;
    try
    {
        p3.SetPrice(20000.0);
        std::cout << "Test 3 failed: Exception not thrown for price greater than 10000." << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << "Test 3 passed: Exception thrown for price greater than 10000." << std::endl;
    }

    return 0;
}