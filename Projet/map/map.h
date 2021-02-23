#ifndef C_MAP_H
#define C_MAP_H
#include <functional>
#include <initializer_list>
#include <utility>

template<class Key, class T, class Compare = std::less<Key>> class map {
public:
    // ne pas toucher
    using key_type = Key;
    using mapped_type = T;
    using value_type = std::pair<const Key, T>;
    using key_compare = std::less<Key>;
    static value_type dummy;  // pour renvoyer une lvalue lorsque demandé

    // à implémenter
    map() {}
    template< class InputIt > map(InputIt first, InputIt last) {}
    map( const map& other ) {}
    map( map&& other ) {}
    map( std::initializer_list<value_type> init) {}
    ~map() {}

    map& operator=( const map& other ) { return *this; }
    map& operator=( map&& other ) { return *this; }
    map& operator=( std::initializer_list<value_type> ilist ) { return *this; }

    mapped_type& at( const Key& key ) { return dummy.second; }
    const mapped_type& at( const Key& key ) const { return dummy.second; }

    mapped_type& operator[]( const Key& key ) { return dummy.second; }
    mapped_type& operator[]( Key&& key ) { return dummy.second; }

    bool empty() const { return true; }
    size_t size() const { return 0; }
    void clear() {}

    size_t count( const Key& key ) const { return 0; }
    bool contains( const Key& key ) const { return false; }

    void swap( map& other ) {}

    friend bool operator==( const map& lhs, const map& rhs ) { return false; }
    friend bool operator!=( const map& lhs, const map& rhs ) { return false; }
    friend bool operator< ( const map& lhs, const map& rhs ) { return false; }
    friend bool operator<=( const map& lhs, const map& rhs ) { return false; }
    friend bool operator> ( const map& lhs, const map& rhs ) { return false; }
    friend bool operator>=( const map& lhs, const map& rhs ) { return false; }

    // iterateur classique
    class iterator {
    public:
        explicit iterator() {}
        iterator(const iterator&) {}
        iterator& operator++() { return *this; }
        iterator operator++(int) { return *this; }
        bool operator==(iterator other) const { return false; }
        bool operator!=(iterator other) const { return false; }
        value_type& operator*() const { return dummy; };
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
        const value_type& operator*() const { return dummy; };
        //// birectionnel
        // iterator& operator--();
        // iterator operator--(int);
    };
    const_iterator cbegin() { return const_iterator(); }
    const_iterator cend() { return const_iterator(); }
    const_iterator begin() const { return const_iterator(); }
    const_iterator end() const { return const_iterator(); }

    // methodes utilisant les itérateurs

    std::pair<iterator,bool> insert( const value_type& value ) { return std::make_pair(iterator(),false); }
    std::pair<iterator,bool> insert( value_type&& value ) { return std::make_pair(iterator(),false); }
    iterator insert( iterator hint, const value_type& value ) { return iterator(); }
    iterator insert( iterator hint, value_type&& value ) { return iterator(); }
    template< class InputIt > void insert( InputIt first, InputIt last ) {}
    void insert( std::initializer_list<value_type> ilist ) {}

    void erase( iterator pos ) {}
    void erase( iterator first, iterator last ) {}
    size_t erase( const key_type& key ) { return 0; }

    iterator find( const Key& key ) { return iterator(); }
    const_iterator find( const Key& key ) const { return const_iterator(); }
    std::pair<iterator,iterator> equal_range( const Key& key ) { return std::make_pair(iterator(),iterator()); }
    iterator lower_bound( const Key& key ) { return iterator(); }
    iterator upper_bound( const Key& key ) { return iterator(); }

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
template< class Key, class T, class Compare> std::pair<const Key, T> map<Key,T,Compare>::dummy;

template< class Key, class T, class Compare> void swap( map<Key,T,Compare>& lhs, map<Key,T,Compare>& rhs ) {};

#endif //C_MAP_H
