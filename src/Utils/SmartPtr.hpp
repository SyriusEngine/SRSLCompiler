#pragma once

#include "Memory.hpp"

namespace Srsl{

    template<typename T>
    using Ptr = std::unique_ptr<T>;

    template<typename T>
    using SharedPtr = std::shared_ptr<T>;

    template<typename T, typename... Args>
    inline Ptr<T> createPtr(Args&&... args){
        return std::make_unique<T>(args...);
    }

    template<typename T, typename... Args>
    inline SharedPtr<T> createSharedPtr(Args&&... args){
        return std::make_shared<T>(args...);
    }

}