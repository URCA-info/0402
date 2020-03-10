#include <iostream>
#include "deque-int.h"

int main() {
    // constructions
    deque    deque1;                   // défaut
    deque    deque2(10,0);    // count/value
    deque    deque3( deque2.begin(), deque2.end() );  // itérateur
    deque    deque4( deque2 );
    deque    deque5( std::move(deque4) );
    deque    deque6( {1,2,3,4,5,6} );

    // assignation
    deque1 = deque6;
    deque2 = std::move(deque1);
    deque3 = { 4, 5, 6, 7};

    // assign
    deque1.assign( 5, 2);
    deque2.assign( deque1.begin(), deque1.end() );
    deque3.assign( {8,9,10,11} );

    // front/back
    const deque &deque6const = deque6;
    std::cout
    << deque6.at(0) << ","
    << deque6const.at(0) << ","
    << deque6[1] << ","
    << deque6const[1] << ","
    << deque6.front() << ", "
    << deque6const.front() << ", "
    << deque6.back()  << ", "
    << deque6const.back()  << ", "
    << deque6.empty() << ", "
    << deque6.size()  << std::endl;

    // clear
    deque5.clear();
    deque5.resize(10);
    deque4.resize(6,4);

    // push
    deque4.push_back(2);
    // avec rvalue: impossible à tester pour T=int
    deque4.push_front(6);
    // avec rvalue: impossible à tester pour T=int

    // pop
    deque4.pop_back();
    deque4.pop_front();

    // tests
    std::cout
            << (deque4 == deque5) << ", "
            << (deque4 != deque5) << ", "
            << (deque4 <  deque5) << ", "
            << (deque4 <= deque5) << ", "
            << (deque4 >  deque5) << ", "
            << (deque4 == deque5) << std::endl;

    // iterateur
    for(auto it=deque4.begin(); it!=deque4.end(); ++it) std::cout << *it << ",";
    std::cout << std::endl;

    deque::iterator it1 = deque1.insert( deque1.cbegin(), 7 );
    // avec rvalue: impossible à tester pour T=int
    deque::iterator it3 = deque1.insert( it1, 4, 7 );
    deque::iterator it4 = deque1.insert( it3, deque2.begin(), deque2.end() );
    deque::iterator it5 = deque1.insert( it4, {5,4,3,2,1,0} );

    deque::iterator it6 = deque1.erase(it5);
    deque1.erase(it6, deque1.cend() );


    // swap
    deque4.swap(deque5);
    swap(deque1,deque2);    
    
    
  return 0;
}
