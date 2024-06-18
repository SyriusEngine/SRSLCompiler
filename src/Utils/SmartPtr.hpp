#pragma once

#include "Memory.hpp"

namespace Srsl{

    template<typename T>
    using Ptr = std::unique_ptr<T>;

    template<typename T>
    using SharedPtr = std::shared_ptr<T>;

    template<typename T>
    class View{
    public:
        View(): m_ResourcePtr(nullptr){}

        explicit View(std::nullptr_t): m_ResourcePtr(nullptr){}

        explicit View(const Ptr<T>& resource): m_ResourcePtr(resource.get()){}

        template<typename U>
        explicit View(const Ptr<U>& resource, typename std::enable_if<std::is_base_of<T, U>::value>::type* = nullptr):
                m_ResourcePtr(resource.get()){}

        explicit View(const SharedPtr<T>& resource): m_ResourcePtr(resource.get()){}

        template<typename U>
        explicit View(const SharedPtr<U>& resource, typename std::enable_if<std::is_base_of<T, U>::value>::type* = nullptr):
                m_ResourcePtr(resource.get()){}

        View(const View<T>& other): m_ResourcePtr(other.m_ResourcePtr){}

        View(View<T>&& other) noexcept: m_ResourcePtr(other.m_ResourcePtr){}

        View<T>& operator=(const View<T>& other){
            if (this == &other){
                return *this;
            }
            m_ResourcePtr = other.m_ResourcePtr;
            return *this;
        }

        View<T>& operator=(View<T>&& other) noexcept{
            if (this == &other){
                return *this;
            }
            m_ResourcePtr = other.m_ResourcePtr;
            return *this;
        }

        View<T>& operator=(std::nullptr_t) noexcept{
            m_ResourcePtr = nullptr;
            return *this;
        }

        ~View(){
            /*
             * We do not want to delete the resource here because it is managed by the Ptr class
             */
            m_ResourcePtr = nullptr;
        }

        T* operator->() const{
            return m_ResourcePtr;
        }

        T& operator*() const{
            return *m_ResourcePtr;
        }

        T* get() const{
            return m_ResourcePtr;
        }

        explicit operator bool() const{
            return m_ResourcePtr != nullptr;
        }

        bool operator==(std::nullptr_t) const{
            return m_ResourcePtr == nullptr;
        }

        bool operator!=(std::nullptr_t) const{
            return m_ResourcePtr != nullptr;
        }

        bool operator<(std::nullptr_t) const{
            return m_ResourcePtr < nullptr;
        }

        bool operator>(std::nullptr_t) const{
            return m_ResourcePtr > nullptr;
        }

        bool operator<=(std::nullptr_t) const{
            return m_ResourcePtr <= nullptr;
        }

        bool operator>=(std::nullptr_t) const{
            return m_ResourcePtr >= nullptr;
        }

        bool operator==(const Ptr<T>& other) const{
            return m_ResourcePtr == other.get();
        }

        bool operator!=(const Ptr<T>& other) const{
            return m_ResourcePtr != other.get();
        }

        bool operator<(const Ptr<T>& other) const{
            return m_ResourcePtr < other.get();
        }

        bool operator>(const Ptr<T>& other) const{
            return m_ResourcePtr > other.get();
        }

        bool operator<=(const Ptr<T>& other) const{
            return m_ResourcePtr <= other.get();
        }

        bool operator>=(const Ptr<T>& other) const{
            return m_ResourcePtr >= other.get();
        }

        bool operator==(const View<T>& other) const{
            return m_ResourcePtr == other.get();
        }

        bool operator!=(const View<T>& other) const{
            return m_ResourcePtr != other.m_ResourcePtr;
        }

        bool operator<(const View<T>& other) const{
            return m_ResourcePtr < other.m_ResourcePtr;
        }

        bool operator>(const View<T>& other) const{
            return m_ResourcePtr > other.m_ResourcePtr;
        }

        bool operator<=(const View<T>& other) const{
            return m_ResourcePtr <= other.m_ResourcePtr;
        }

        bool operator>=(const View<T>& other) const{
            return m_ResourcePtr >= other.m_ResourcePtr;
        }

        bool operator==(const T* other) const{
            return m_ResourcePtr == other;
        }

        bool operator!=(const T* other) const{
            return m_ResourcePtr != other;
        }

        bool operator<(const T* other) const{
            return m_ResourcePtr < other;
        }

        bool operator>(const T* other) const{
            return m_ResourcePtr > other;
        }

        bool operator<=(const T* other) const{
            return m_ResourcePtr <= other;
        }

        bool operator>=(const T* other) const{
            return m_ResourcePtr >= other;
        }

    private:
        T* m_ResourcePtr;

    };

    template<typename T, typename... Args>
    inline Ptr<T> createPtr(Args&&... args){
        return std::make_unique<T>(args...);
    }

    template<typename T, typename... Args>
    inline SharedPtr<T> createSharedPtr(Args&&... args){
        return std::make_shared<T>(args...);
    }

    template<typename T>
    inline View<T> createView(const Ptr<T>& ptr){
        return View<T>(ptr);
    }

    template<typename T>
    inline View<T> createView(const SharedPtr<T>& ptr){
        return View<T>(ptr);
    }

    /*
     * TODO: This function is only used to fix creating view of the this pointer, but this requires some std
     * magic to make it work properly
     */
    template<typename T>
    inline View<T> createView(T* ptr){
        return View<T>(ptr);
    }

}