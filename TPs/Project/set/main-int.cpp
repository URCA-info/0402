#include <iostream>
#include "set-int.h"

int main() {
    // constructions
    set    set1;                                // défaut
    set    set2( {1,2,3,4,5,6});            // ilist
    set    set3( set1.begin(), set1.end() );    // itérateur
    set    set4( set2 );                        // par copie
    set    set5( set({7,8,9}) );            // par déplacement

    // assignation
    set1 = set5;
    set2 = std::move(set1);
    set3 = { 4, 5, 6, 7};

    // empty/size
    std::cout
            << set1.empty() << ", "
            << set1.size()  << ", "
            << set1.count(3) << ", "
            << set1.contains(3) << std::endl;

    // clear
    set1.clear();

    // tests
    std::cout
            << (set4 == set5) << ", "
            << (set4 != set5) << ", "
            << (set4 <  set5) << ", "
            << (set4 <= set5) << ", "
            << (set4 >  set5) << ", "
            << (set4 == set5) << std::endl;

    // iterateur
    for(auto it=set4.begin(); it!=set4.end(); ++it) std::cout << *it << ",";
    std::cout << std::endl;

    // iterateur constant
    for(auto it=set4.cbegin(); it!=set4.cend(); ++it) std::cout << *it << ",";
    std::cout << std::endl;

    // méthode avec itérateurs
    std::pair<set::iterator,bool>  r1 = set1.insert(7);
    // avec rvalue: impossible à tester pour T=int
    set1.insert( set2.begin(), set2.end() );
    set1.insert( {10,11,12} );


    set::iterator r2 = set1.erase( r1.first );
    set2.erase(set2.begin(),set2.end());
    size_t n = set3.erase(5);

    set::iterator r3= set3.find(4);
    std::pair<set::iterator,set::iterator>  r4 = set3.equal_range(4);
    set::iterator r5 = set3.lower_bound(9);
    set::iterator r6 = set3.upper_bound(9);

    // swap
    set4.swap(set5);
    swap(set1,set2);

    // enlève des warnings
    r6 = r5 = r4.first = r3 = r2 = r1.first;
    ++n;
    return 0;
}
