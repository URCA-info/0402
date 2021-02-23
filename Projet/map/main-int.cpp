#include <iostream>
#include "map-int.h"

int main() {
    // <Key,T> = <char,int>

    // constructions
    map    map1;                                // défaut
    map    map2( {{'a',1},{'b',2},{'c',3},{'d',4},{'e',5},{'f',6}});            // ilist
    map    map3( map1.begin(), map1.end() );    // itérateur
    map    map4( map2 );                        // par copie
    map    map5( map({{'u',7},{'v',8},{'w',9}}) ); // par déplacement

    // assignation
    map1 = map5;
    map2 = map({{'u',7},{'v',8},{'w',9}});
    map3 = {{'u',7},{'v',8},{'w',9}};

    // empty/size
    map1['x'] = 10;

    const map& map1const = map1;
    std::cout
        << map1.at('u') << ", "
        << map1const.at('u') << ", "
        << map1['u'] << ", "
        << map1.empty() << ", "
        << map1.size()  << ", "
        << map1.count(3) << ", "
        << map1.contains(3) << std::endl;

    // clear
    map1.clear();

    // tests
    std::cout
            << (map4 == map5) << ", "
            << (map4 != map5) << ", "
            << (map4 <  map5) << ", "
            << (map4 <= map5) << ", "
            << (map4 >  map5) << ", "
            << (map4 == map5) << std::endl;

    // iterateur
    for(auto it=map4.begin(); it!=map4.end(); ++it)
        std::cout << (*it).first << "," << (*it).second << " ";
    std::cout << std::endl;

    // iterateur constant
    for(auto it=map4.cbegin(); it!=map4.cend(); ++it)
        std::cout << (*it).first << "," << (*it).second << " ";
    std::cout << std::endl;

    // méthode avec itérateurs
    std::pair<char,int>  z = { 'b',2 };
    std::pair<map::iterator,bool>
            r1 = map1.insert( std::make_pair('a',1) ),
            r2 = map1.insert( std::move(z) );

    map1.insert( map2.begin(), map2.end() );
    map1.insert( {{'u',7},{'v',8},{'w',9}} );

    map1.erase( r1.first );
    map2.erase(map3.begin(),map3.end());
    size_t n = map3.erase('w');

    map::iterator r3 = map3.find(4);
    std::pair<map::iterator,map::iterator>  r4 = map3.equal_range('x');
    map::iterator r5 = map3.lower_bound('x');
    map::iterator r6 = map3.upper_bound('x');

    // swap
    map4.swap(map5);
    swap(map1,map2);

    // enlève des warnings
    r6 = r5 = r4.first = r3 = r2.first = r1.first;
    ++n;
    return 0;
}
