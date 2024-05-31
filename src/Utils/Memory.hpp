#pragma once

#include "Typedefs.hpp"

namespace Srsl{

    class AllocationTracker{
    public:
        AllocationTracker() = delete;

        static void allocate(Size size);

        static void deallocate(Size size);

        static Size getTotalAllocated();

        static Size getTotalFreed();

        static Size getUsage();

    private:
        static Size m_AllocatedMemory;
        static Size m_FreedMemory;
        static Size m_Usage;
    };

}
#if defined(SRSL_DEBUG)

// Normal New and Delete operators
void* operator new(size_t size);

void operator delete(void* memory, size_t size) noexcept;

// Array New and Delete operators
void* operator new[](size_t size);

void operator delete[](void* memory, size_t size) noexcept;

#endif