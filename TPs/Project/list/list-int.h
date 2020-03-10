#ifndef C_LIST_INT_H
#define C_LIST_INT_H
#include <functional>
#include <initializer_list>

class list {
public:
    // ne pas toucher
    using T = int;
    using value_type = T;
    class iterator;
    class const_iterator;
    static int dummy;  // pour renvoyer une lvalue lorsque demandé

    // à implémenter
    list() {}

    explicit list(size_t count) {}
    list(size_t count, const T& value ) {}

    template<typename InputIt > list( InputIt first, InputIt last) {}

    list( const list& other ) {}
    list( list&& other ) {}

    list( std::initializer_list<T> init ) {}

    ~list() {}

    list& operator=( const list& other ) { return *this; }
    list& operator=( list&& other ) { return *this; }

    void assign( size_t count, const T& value ) {}
    template<typename InputIt > void assign( InputIt first, InputIt last ) {}

    T& front() { return dummy; }
    T& back() { return dummy; }

    const T& back() const { return dummy; }
    const T& front() const { return dummy; }

    bool empty() const { return true; }
    size_t size() const { return 0; }
    void clear() {}


    void resize( size_t count ) {}
    void resize( size_t count, const T& value) {}

    void push_back( const T& value ) {}
    void push_front( const T& value ) {}

    void push_back( T&& value ) {}
    void push_front( T&& value ) {}

    void pop_back() {}
    void pop_front() {}

    void merge( list& other ) {}
    void merge( list&& other ) {}
    void remove( const T& value ) {}
    void reverse() {}

    friend bool operator==( list& lhs, list& rhs ) { return false; }
    friend bool operator!=( list& lhs, list& rhs ) { return false; }
    friend bool operator< ( list& lhs, list& rhs ) { return false; }
    friend bool operator<=( list& lhs, list& rhs ) { return false; }
    friend bool operator> ( list& lhs, list& rhs ) { return false; }
    friend bool operator>=( list& lhs, list& rhs ) { return false; }

    void swap( list& other ) {}

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
    };
    const_iterator cbegin() { return const_iterator(); }
    const_iterator cend() { return const_iterator(); }
    const_iterator begin() const { return const_iterator(); }
    const_iterator end() const { return const_iterator(); }

    // méthode utilisant les itérateurs sur une liste
    iterator insert( const_iterator pos, const T& value ) { return iterator(); }
    iterator insert( const_iterator pos, T&& value ) { return iterator(); }
    iterator insert( const_iterator pos, size_t count, const T& value ) { return iterator(); }
    template< class InputIt > iterator insert( const_iterator pos, InputIt first, InputIt last ) { return iterator(); }
    iterator insert( const_iterator pos, std::initializer_list<T> ilist ) { return iterator(); }

    iterator erase( const_iterator pos ) { return iterator(); }
    iterator erase( const_iterator first, const_iterator last ) { return iterator(); }

    void splice(const_iterator pos, list& other) {}
    void splice(const_iterator pos, list&& other) {}

    /* autres itérateurs
    class reverse_iterator {} {}
    reverse_iterator rbegin() {}
    reverse_iterator rend() {}

    class const_reverse_iterator {} {}
    const_reverse_iterator rbegin() const {}
    const_reverse_iterator rend() const {}
    const_reverse_iterator crbegin() const {}
    const_reverse_iterator crend() const {}
     */
};

void swap( list &lhs, list &rhs ) {};

// afin de pouvoir renvoyer une référence vers un entier dans le code à remplacer
int list::dummy = 0;

#endif
