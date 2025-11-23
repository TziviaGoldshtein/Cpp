// Homework4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "MyString.h"

int main()
{
    try {
        MyString s1("Jerusalem", 10);
        MyString s2("is", 3);
        MyString s3("my home", 8);

        std::cout << "String 1: " << s1.getData() << std::endl;
        std::cout << "String 2: " << s2.getData() << std::endl;
        std::cout << "String 3: " << s3.getData() << std::endl;

        s1 = s2;
        MyString s4 = s3;
        MyString s5 = std::move(s4);
        std::cout << "Current instance count: " << MyString::getInstanceCount() << std::endl;
        MyString s6("long string long string long string long string long string long string long string long string long string long string", 120);
    }
    catch(const std::length_error& error) {
        std::cerr << "Exception: " << error.what() << std::endl;
    }
    std::cout << "Finally instance count: " << MyString::getInstanceCount() << std::endl;
    return 0;
}