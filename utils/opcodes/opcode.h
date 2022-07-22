#pragma once

#include <memory>
#include <vector>

class OpCode
{
public:    
    enum class HaltExecution {
        Yes,
        No
    };
    virtual ~OpCode() {}
    virtual HaltExecution execute(std::shared_ptr<std::vector<int>>, int& current_position) = 0;

};
