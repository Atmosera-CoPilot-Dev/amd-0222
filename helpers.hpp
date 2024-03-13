/*
This file defines useful inline functions for the project, including:
Generating a random number in a given range
Validating a phone number using regular expressions
Returning a random welcome message
Returning the current date
*/
#pragma once

#include <regex>
#include <ctime>
#include <vector>
#include <string>


/*
 * Generates a random number within the specified range.
*/
inline int GenerateRandomNumber(int min, int max)
{
   // Generate a random number in the range provided by the user
    return rand() % (max - min + 1) + min;
}


/*
 * Generate a functn that validates a phone number using a regular expression pattern.
 * The phone number must be in the format XXX-XXX-XXXX, where X represents a digit.
 */
inline bool ValidatePhoneNumber(std::string phoneNumber)
{
    // Create a regular expression to validate a phone number
    std::regex pattern("([0-9]{3})[-. ]?([0-9]{3})[-. ]?([0-9]{4})");
    
    // Return the result of the regular expression match
    return std::regex_match(phoneNumber, pattern);
}

/*
 * Generate a function that returns a random welcome message from a vector of welcome messages.
 */
std::string GetWelcomeMessage()
{
    // Create a vector of welcome messages
    std::vector<std::string> messages = {
        "Hello, World!",
        "Welcome to the program!",
        "Thanks for using the program!"
    };

    // Return a random welcome message
    return messages[GenerateRandomNumber(0, messages.size() - 1)];

}

/**
 * Generate a function that returns the current date as a string.
 */
std::string GetCurrentDate()
{
    // Get the current time
    std::time_t now = std::time(0);
    
    // Convert the current time to a string
    std::string currentDate = std::ctime(&now);
    
    // Remove the newline character from the end of the string
    currentDate.pop_back();
    
    // Return the current date
    return currentDate;
}


