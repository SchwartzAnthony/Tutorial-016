// Tutorial 016.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    // unsigned 
    unsigned short x{ 65535 }; // largest 16-bit unsigned value possible
    std::cout << "x was: " << x << '\n';

    x = 65536; // 65536 is out of our range, so we get wrap-around
    std::cout << "x is now: " << x << '\n';

    x = 65537; // 65537 is out of our range, so we get wrap-around
    std::cout << "x is now: " << x << '\n';

    //Boolean
    bool b1{}; //False when not initialized 
    bool b2{ true }; 

    // Variabled 
    int x{ 5 }; 
    double y{ 5.0 }; 
    float z{ 5.0f }; 

    return 0;
}