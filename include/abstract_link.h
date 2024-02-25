#pragma once 

#include<string>
#include "lmp/lmp.h"

class AbstractLink : public lmp::AbstractModule<std::string> {
public:
    virtual std::string getId() = 0;
    virtual bool sendMessage(const std::string &message) = 0;
};
