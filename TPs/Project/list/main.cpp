#include <iostream>
#include "list.h"
#include "classA.h"

int main() {
    // constructions
    list<A>   list1;                   // défaut
    list<A>   list2(10,0);    // count/value
    list<A>   list3( list2.begin(), list2.end() );  // itérateur
    list<A>   list4( list2 );
    list<A>   list5( std::move(list4) );
    list<A>   list6( {1,2,3,4,5,6} );

    // assignation
    list1 = list6;
    list2 = std::move(list1);

    // assign
    list1.assign( 5, 2);
    list3.assign( list1.begin(), list1.end() );

    // front/back
    std::cout
            << list6.front() << ", "
            << list6.back()  << ", "
            << list6.empty() << ", "
            << list6.size()  << std::endl;

    // clear
    list5.clear();
    list5.resize(10);
    list4.resize(6,4);

    // push
    list4.push_back(2);
    // avec rvalue: impossible à tester pour T=int
    list4.push_front(6);
    // avec rvalue: impossible à tester pour T=int

    // pop
    list4.pop_back();
    list4.pop_front();

    // merge
    list1.merge( list6 );
    list1.merge( list<A>({4,3,2,1}) );
    list1.remove(2);
    list1.reverse();

    // tests
    std::cout
            << (list4 == list5) << ", "
            << (list4 != list5) << ", "
            << (list4 <  list5) << ", "
            << (list4 <= list5) << ", "
            << (list4 >  list5) << ", "
            << (list4 == list5) << std::endl;

    // swap
    list4.swap(list5);

    // iterateur
    for(auto it=list4.begin(); it!=list4.end(); ++it) std::cout << *it << ",";
    std::cout << std::endl;

    list<A>::iterator it1 = list1.insert( list1.cbegin(), 7 );
    // avec rvalue: impossible à tester pour T=int
    list<A>::iterator it3 = list1.insert( it1, 4, 7 );
    list<A>::iterator it4 = list1.insert( it3, list2.begin(), list2.end() );
    list<A>::iterator it5 = list1.insert( it4, {5,4,3,2,1,0} );

    list<A>::iterator it6 = list1.erase(it5);
    list1.erase(it6, list1.cend() );

    list2.splice(list2.begin(),list3);
    list2.splice(list2.begin(), list<A>({7,8,9}));

    swap(list1,list2);
    return 0;
  return 0;
}
