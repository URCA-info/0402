#ifndef C_SET_INT_H
#define C_SET_INT_H
#include <functional>
#include <initializer_list>

class set {
public:
    // ne pas toucher
    using Key = int;
    using Compare = std::less<Key>;
    static Key dummy;  // pour renvoyer une lvalue lorsque demandé

    // prototype
    set() {}
    // explicit set( const Compare& comp ); // pas de sens si Compare non template
    template< class InputIt > set( InputIt first, InputIt last) {}
    // template< class InputIt > set( InputIt first, InputIt last, const Compare& comp = Compare()); // pas de sens si Compare non template
    set( const set& other ) {}
    set( set&& other ) {}
    set( std::initializer_list<Key> init ) {}
    // set( std::initializer_list<Key> init, const Compare& comp = Compare()); // pas de sens si Compare non template

    ~set() {}

    set& operator=( const set& other ) { return *this; }
    set& operator=( set&& other ) { return *this; }
    set& operator=( std::initializer_list<Key> ilist ) { return *this; }

    bool empty() const { return true; }
    size_t size() const { return 0; }

    size_t count( const Key& value ) const { return 0; }
    bool contains( const Key& value ) const { return false; }

    void clear() {}

    void swap( set& other ) {}

    friend bool operator==( const set& lhs, const set& rhs ) { return false; }
    friend bool operator!=( const set& lhs, const set& rhs ) { return false; }
    friend bool operator< ( const set& lhs, const set& rhs ) { return false; }
    friend bool operator<=( const set& lhs, const set& rhs ) { return false; }
    friend bool operator> ( const set& lhs, const set& rhs ) { return false; }
    friend bool operator>=( const set& lhs, const set& rhs ) { return false; }

    // iterateur classique
    class iterator {
    public:
        explicit iterator() {}
        iterator(const iterator&) {}
        iterator& operator++() { return *this; }
        iterator operator++(int) { return *this; }
        bool operator==(iterator other) const { return false; }
        bool operator!=(iterator other) const { return false; }
        Key& operator*() const { return dummy; };
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
        const Key& operator*() const { return dummy; };
        //// birectionnel
        // iterator& operator--();
        // iterator operator--(int);
    };
    const_iterator cbegin() { return const_iterator(); }
    const_iterator cend() { return const_iterator(); }
    const_iterator begin() const { return const_iterator(); }
    const_iterator end() const { return const_iterator(); }

    // méthodes avec itérateur
    std::pair<iterator,bool> insert( const Key& value ) { return std::make_pair(iterator(),false); }
    std::pair<iterator,bool> insert( Key&& value ) { return std::make_pair(iterator(),false); }
    template< class InputIt > void insert( InputIt first, InputIt last ) {}
    void insert( std::initializer_list<Key> ilist ) {}

    iterator erase( const_iterator pos ) { return iterator(); }
    void erase( const_iterator first, const_iterator last ) {}
    size_t erase( const Key& value ) { return 0; }

    iterator find( const Key& value ) { return iterator(); }
    std::pair<iterator,iterator> equal_range( const Key& value ) const { return std::make_pair(iterator(),iterator()); }
    iterator lower_bound( const Key& value ) const  { return iterator(); }
    iterator upper_bound( const Key& value ) const  { return iterator(); }

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

void swap( set& lhs, set& rhs ) {};

// afin de pouvoir renvoyer une référence vers un entier dans le code à remplacer
int set::dummy = 0;
#endif //C_SET_H
