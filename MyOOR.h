#pragma once
#include <exception>

class MyOOR : public std::exception {
    virtual const char* what() const noexcept override;
};