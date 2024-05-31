#include "Memory.hpp"

namespace Srsl{

    Size AllocationTracker::m_AllocatedMemory = 0;
    Size AllocationTracker::m_FreedMemory = 0;
    Size AllocationTracker::m_Usage = 0;

    void AllocationTracker::allocate(Size size) {
        m_AllocatedMemory += size;
        m_Usage += size;
    }

    void AllocationTracker::deallocate(Size size) {
        m_FreedMemory += size;
        m_Usage -= size;
    }

    Size AllocationTracker::getTotalAllocated() {
        return m_AllocatedMemory;
    }

    Size AllocationTracker::getTotalFreed() {
        return m_FreedMemory;
    }

    Size AllocationTracker::getUsage() {
        return m_Usage;
    }
}

#if defined(SRSL_DEBUG)

void* operator new(size_t size){
    Srsl::AllocationTracker::allocate(size);
    return malloc(size);
}

void operator delete(void* memory, size_t size) noexcept {
    if (memory != nullptr) {
        Srsl::AllocationTracker::deallocate(size);
        free(memory);
    }
}

void* operator new[](size_t size){
    Srsl::AllocationTracker::allocate(size);
    return malloc(size);
}

void operator delete[](void* memory, size_t size) noexcept{
    if (memory != nullptr) {
        Srsl::AllocationTracker::deallocate(size);
        free(memory);
    }
}

#endif