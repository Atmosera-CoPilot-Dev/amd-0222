/*
This file defines useful functions for the project, including:
*/

#pragma once

#include <string>

// Generate a function prototype to generate a random number in the range provided by the user
int GenerateRandomNumber(int min, int max);

// Generate a prototype to validate a phone number using regular expressions
bool ValidatePhoneNumber(std::string phoneNumber);

// Generate a funtion that will return a random welcome message
std::string GetWelcomeMessage();

// Generate a function that will return the current date in the form: MM/DD/YYYY
std::string GetCurrentDate();

