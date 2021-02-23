#ifndef C_DEQUE_H
#define C_DEQUE_H
#include <cstdio>
#include <functional>
#include <initializer_list>


template <class T> class deque {
public:
    // ne pas toucher
    using value_type = T;
    using size_type = size_t;
    static T dummy;  // pour renvoyer une lvalue lorsque demandé

    // à implémenter
    deque() {}
    explicit deque( size_type count ) {}
    deque( size_type count, const T& value ) {}
    template< class InputIt > deque( InputIt first, InputIt last) {}
    deque( const deque& other ) {}
    deque( deque&& other ) {}
    deque( std::initializer_list<T> init ) {}
    ~deque() {}

    deque& operator=( const deque& other ) { return *this; }
    deque& operator=( deque&& other ) { return *this; }
    deque& operator=( std::initializer_list<T> ilist ) { return *this; }

    void assign( size_type count, const T& value ) {}
    template< class InputIt > void assign( InputIt first, InputIt last ) {}
    void assign( std::initializer_list<T> ilist ) {}

    T& at( size_type pos ) { return dummy; }
    const T& at( size_type pos ) const { return dummy; }

    T& operator[]( size_type pos ) { return dummy; }
    const T& operator[]( size_type pos ) const { return dummy; }

    T& front() { return dummy; }
    const T& front() const { return dummy; }

    T& back() { return dummy; }
    const T& back() const { return dummy; }

    bool empty() const { return false; }

    size_t size() const { return 0; }

    void clear() {}


    void push_back( const T& value ) {}
    void push_back( T&& value ) {}

    template< class... Args > void emplace_back( Args&&... args ) {}

    void pop_back() {}

    void push_front( const T& value ) {}
    void push_front( T&& value ) {}

    template< class... Args > void emplace_front( Args&&... args ) {}

    void pop_front() {}

    void resize( size_type count ) {}
    void resize( size_type count, const value_type& value ) {}

    void swap( deque& other ) {}

    friend bool operator==( const deque& lhs, const deque& rhs ) { return true; }
    friend bool operator!=( const deque& lhs, const deque& rhs ) { return true; }
    friend bool operator<(  const deque& lhs, const deque& rhs ) { return true; }
    friend bool operator<=( const deque& lhs, const deque& rhs ) { return true; }
    friend bool operator>(  const deque& lhs, const deque& rhs ) { return true; }
    friend bool operator>=( const deque& lhs, const deque& rhs ) { return true; }

    // iterateur classique
    class iterator {
    public:
        explicit iterator() {}
        iterator(const iterator&) {}
        iterator& operator++() { return *this; }
        iterator operator++(int) { return *this; }
        bool operator==(iterator other) const { return false; }
        bool operator!=(iterator other) const { return false; }
        T& operator*() const { return dummy; };
        //// birectionnel
        // iterator& operator--();
        // iterator operator--(int);
        //// random access
        // bool operator<(const iterator&)  const;
        // bool operator<=(const iterator&) const;
        // bool operator>(const iterator&)  const;
        // bool operator>=(const iterator&) const;
        // iterator& operator+=(const int n)
        // iterator& operator-=(const int n)
        // int& operator[](int n);
        // const int& operator[](int n) const;
    };
    iterator begin() { return iterator(); }
    iterator end() { return iterator(); }

    // iterateur constant
    class const_iterator {
    public:
        explicit const_iterator() {}
        const_iterator(const const_iterator&) {}
        const_iterator(const iterator&) {}
        const_iterator& operator++() { return *this; }
        const_iterator operator++(int) { return *this; }
        bool operator==(const_iterator other) const { return false; }
        bool operator!=(const_iterator other) const { return false; }
        const T& operator*() const { return dummy; };
        //// birectionnel
        // iterator& operator--();
        // iterator operator--(int);
        //// random access
        // bool operator<(const iterator&)  const;
        // bool operator<=(const iterator&) const;
        // bool operator>(const iterator&)  const;
        // bool operator>=(const iterator&) const;
        // iterator& operator+=(const int n)
        // iterator& operator-=(const int n)
        // int& operator[](int n);
        // const int& operator[](int n) const;
    };
    const_iterator cbegin() { return const_iterator(); }
    const_iterator cend() { return const_iterator(); }
    const_iterator begin() const { return const_iterator(); }
    const_iterator end() const { return const_iterator(); }

    // methode necessitant des itérateurs
    iterator insert( const_iterator pos, const T& value ) { return iterator(); }
    iterator insert( const_iterator pos, T&& value ) { return iterator(); }
    iterator insert( const_iterator pos, size_type count, const T& value ) { return iterator(); }
    template< class InputIt > iterator insert( iterator pos, InputIt first, InputIt last) { return iterator(); }
    iterator insert( const_iterator pos, std::initializer_list<T> ilist ) { return iterator(); }

    iterator erase( const_iterator pos ) { return iterator(); }
    iterator erase( const_iterator first, const_iterator last ) { return iterator(); }

    template< class... Args > iterator emplace( const_iterator pos, Args&&... args ) { return iterator(); }

    // autres itérateurs
    /*
    class reverse_iterator {};
    reverse_iterator rbegin(); //
    reverse_iterator rend();   //

    class const_reverse_iterator {};
    const_reverse_iterator rbegin() const;
    const_reverse_iterator rend() const;
    const_reverse_iterator crbegin() const;
    const_reverse_iterator crend() const;
    */
};

template<class T> void swap( deque<T> &lhs, deque<T> &rhs ) {}

template <class T> T deque<T>::dummy = 0;
#endif //C_DEQUE_H
