// Standard Template Library Test

#include <iostream>
#include <utility> // for pair STL
#include <vector>
#include <algorithm> // find()
#include <list>
#include<deque>
#include<queue>
#include<stack>
#include<set>
#include<map>

using namespace std;
using std::cout;

template <class t>

t Sum(t a, t b)
{
    return (a + b);
}

template <class t1, class t2>
t2 Sum(t1 a, t2 b)
{
    return (a + b);
}

// C++ array class Test
void ArrayClassTest() {
    array<int,5> arr = {1,2,3,4,5};
    cout << "arr = ";
    for (auto i : arr)
    {
        cout << i << " ";
    }
    std::cout << "\nArray arr size: " << arr.size() << endl;
    std::cout << "Array arr front element: " << arr.front() << endl;
    std::cout << "Array arr back element: " << arr.back() << endl;
    std::cout << "Is Array arr is empty ? " << arr.empty() << endl;

    // fill all the element by given value
    arr.fill(10);
    cout << "arr = ";
    for ( auto i:arr ) {
        cout << i << " ";
    }

    // swap [both the array must be same in size]
    array<int,5> arr2;
    arr2.swap(arr);

    cout << "\narr2 = ";
    for (auto i : arr2)
    {
        cout << i << " ";
    }
}

// pair STL Test
void pairSTLTest()
{

    // PAIR DECLARATION
    pair<int, double> pair1;
    cout << "Intial value --> (" << pair1.first << " , " << pair1.second << ")\n";

    // INTIALIZE VALUE IN PAIR
    //pair1.first = 'A';
    //pair1.second = 100.9;

    pair1 = make_pair('A', 12.9);

    cout << "Pair1 value --> (" << pair1.first << " , " << pair1.second << ")\n";

    // INTIALIZE PAIR IN THE TIME OF DECLARATION
    pair<int, double> pair2(67, 9.0);
    cout << "Pair2 value --> (" << pair2.first << " , " << pair2.second << ")\n";

    // assign
    // pair1 = pair2;
    // cout << "After assign Pair1 value --> (" << pair1.first << " , " << pair1.second << ")\n";

    // pair comparision [NOTE: eaxct same template can only be comparable]
    if (pair2 == pair1)
    {
        cout << " SUCESS! Pair1 & Pair2 have same contents" << endl;
    }
    else
    {
        cout << " FAILED! Pair1 and Pair2 have diff contents" << endl;
    }

    // PAIR WITH OPERATORS
    cout << (pair1 == pair2) << endl;
    cout << (pair1 > pair2) << endl; // compare with graph system, P1=(x1,y1) P2=(x2,y2) --> x1 > x2 -> P1>P2 ; x1==x2 and y1>y2 -> p1>p2
    cout << (pair1 < pair2) << endl;
    cout << (pair1 >= pair2) << endl;
    cout << (pair1 <= pair2) << endl;
    cout << (pair1 != pair2) << endl;

    //SWAPPING OF PAIRS
    pair1.swap(pair2);
    cout << "After swap, Pair1 value --> (" << pair1.first << " , " << pair1.second << ")\n";
    cout << "After swap, Pair2 value --> (" << pair2.first << " , " << pair2.second << ")\n";
}

// iterator STL Test
void iteratorTest()
{
    vector<int> vec1 = {11, 21, 31, 52, 51};
    vector<int>::iterator it;

    cout << "Vector1 elements:" << endl;
    for (it = vec1.begin(); it < vec1.end(); it++)
    {
        cout << *it << "--" << it - vec1.begin() << endl;
    }

    // printing in reverse order
    cout << "Reverse order of Vector1:" << endl;
    for (it = vec1.end() - 1; it != vec1.begin(); --it)
    {
        cout << *it << "--" << it - vec1.begin() << endl;
    }
    cout << *it << "--" << it - vec1.begin() << endl;

    // search element
    int se = 51;

    // FIND
    cout << "Position of element '" << se << "' in Vec1:" << endl;
    auto it2 = std::find(vec1.begin(), vec1.end(), se);
    cout << *it2 << "--" << it2 - vec1.begin() << endl;

    int vec2[] = {11, 21, 31, 41, 52};
    // EQUAL
    cout << "Comparing Vec1 and Vec2 is equal or not:" << endl;
    bool isEqual = std::equal(vec1.begin(), vec1.end(), vec2);

    cout << isEqual << endl;

    // COUNT - Complexity O(n)
    cout << "Count the occurance of Element '" << se << "' in Vec1:" << endl;
    int count = std::count(vec1.begin(), vec1.end(), se);
    cout << count << endl;
}

// Vector Container Test
void VectorContainerTest()
{
    vector<int> vect1{1, 2, 3, 4, 5};

    // declaring iterator for vector type
    vector<int>::iterator it;
    cout << "Vector print using iterotor:\n";
    for (it = vect1.begin(); it < vect1.end(); it++)
    {
        cout << *it << "-- Adress --" << &(*it) << endl;
    }
    cout << "\n";

    // declaring reverse iterator for vector type
    vector<int>::reverse_iterator it2;
    cout << "Vector print using reverse iterotor:\n";
    for (it2 = vect1.rbegin(); it2 < vect1.rend(); it2++)
    {
        cout << *it2 << "-- Adress --" << &(*it2) << endl;
    }
    cout << "\n";

    // constant iterator
    cout << "Vector print using const iterotor:\n";
    vector<int>::const_iterator cit;
    for (cit = vect1.cend() - 1; cit > vect1.cbegin(); cit--)
    {
        cout << *cit << "-- Adress --" << &(*cit) << endl;
    }
    cout << *cit << "-- Adress --" << &(*cit) << endl;

    vector<int> vect2;

    for (int i = 0; i < 5; i++)
    {
        vect2.push_back(i);
    }
    cout << "vect2 size= " << vect2.size() << endl;
    cout << "vect2 max size= " << vect2.max_size() << endl;
    cout << "vect2 capacity= " << vect2.capacity() << endl;
    cout << "resizing the vect2 from 5 to 2:" << endl;
    vect2.resize(12, 5);
    cout << "vect2 size= " << vect2.size() << endl;
    cout << "vect2 capacity= " << vect2.capacity() << endl;
    cout << "After resizing the vect2:" << endl;
    for (auto it3 = vect2.begin(); it3 < vect2.end(); it3++)
    {
        cout << *it3 << " ";
    }
    cout << "\nCheck Vect2 is empty ? : " << vect2.empty() << endl;

    // reserve for elements but size is not change
    vect2.reserve(20);
    cout << "vect2 capacity= " << vect2.capacity() << endl;

    // accessing element
    int index = 0;
    cout << "value at index" << index << " is: " << vect2.at(index) << endl;
    cout << "Front element is: " << vect2.front() << endl;
    cout << "Back element is: " << vect2.back() << endl;

    // modifier
    auto it4 = vect2.insert(vect2.begin() + 1, 555);
    for (auto it3 = vect2.begin(); it3 < vect2.end(); it3++)
    {
        cout << *it3 << " ";
    }

    cout << "\n";
    auto it5 = vect2.insert(it4, 2, 666);

    for (auto ele : vect2)
    {
        cout << ele << " ";
    }
    cout << "\n";

    vector<int> vect3{333, 444, 555};

    vect2.insert(vect2.end(), vect3.begin(), vect3.end());
    for (auto ele : vect2)
    {
        cout << ele << " ";
    }
    cout << "\n";
    vect2.swap(vect3);
    for (auto ele : vect2)
    {
        cout << ele << " ";
    }
    cout << "\n";
    for (auto ele : vect3)
    {
        cout << ele << " ";
    }
    cout << "\n";
    vect3.clear();
    cout << "Check for Vect3 is empty ?: " << vect3.empty() << endl;
}

// use for list
bool even(int value)
{
    return (1 - (value % 2));
}

// List Container Test
void ListContainerTest()
{
    cout << "-------------------------------------------"
         << "\n";

    // list push
    list<int> demoList1;
    demoList1.push_front(100);
    demoList1.push_back(200);
    demoList1.push_front(300);
    demoList1.push_front(400);
    demoList1.push_front(500);

    list<int>::iterator it;
    cout << "demoList1 Elements are: ";
    for (it = demoList1.begin(); it != demoList1.end(); it++)
    {
        cout << *it << " ";
    }

    std::cout << "\nFront Item is: " << demoList1.front();
    // point to the theoritical end(), which follows the last element
    it = demoList1.end();
    std::cout << "\nLast Item is: " << *(--it);

    // list pop
    demoList1.pop_front();
    cout << "\nAfter pop from front, demoList1 Elements are: ";
    for (it = demoList1.begin(); it != demoList1.end(); it++)
    {
        cout << *it << " ";
    }
    demoList1.pop_back();
    cout << "\nAfter pop from back, demoList1 Elements are: ";
    for (it = demoList1.begin(); it != demoList1.end(); it++)
    {
        cout << *it << " ";
    }

    // list empty check
    cout << "\nIs list is empty:" << demoList1.empty();

    // advance the iterator
    it = demoList1.begin();
    std::advance(it, 2);

    // insert into list
    demoList1.insert(it, 10, 33);
    std::cout << "\nAfter insert demoList1 is: \n";
    for (int it : demoList1)
    {
        std::cout << it << " ";
    }

    it = demoList1.begin();
    std::advance(it, 1);

    // erase a single value from list
    demoList1.erase(it);
    std::cout << "\nAfter erase the 3rd element, demoList1 is: \n";
    for (int it : demoList1)
    {
        std::cout << it << " ";
    }

    // erase range of data
    it = demoList1.begin();
    auto it2 = demoList1.begin();
    std::advance(it2, 5);
    demoList1.erase(it, it2);
    std::cout << "\nAfter erase the range of data, demoList1 is: \n";
    for (int it : demoList1)
    {
        std::cout << it << " ";
    }

    // remove_if : you can pass function name as parameter
    demoList1.remove_if(even);
    std::cout << "\nAfter remove all the even number from demoList1: \n";
    for (int it : demoList1)
    {
        std::cout << it << " ";
    }

    list<int> demoList2;
    demoList2.assign(3, 500);

    demoList2.assign(demoList2.begin(), demoList2.end());
    std::cout << "\nAfter assigning data from demoLst2 -> demoList1 \n";
    for (int it : demoList2)
    {
        std::cout << it << " ";
    }

    demoList1.push_front(333);
    demoList1.push_front(655);

    // unique data from list
    demoList1.unique();
    std::cout << "\n Unique data from demoList1 \n";
    for (int it : demoList1)
    {
        std::cout << it << " ";
    }

    // sorting list
    demoList1.sort();
    std::cout << "\n Sorted data from demoList1 \n";
    for (int it : demoList1)
    {
        std::cout << it << " ";
    }
}

// dequeue Container Test
void DequeueConatainerTest() {
    deque<int> demoDeQueue1;
    deque<int>::iterator it;

    demoDeQueue1.push_back(200);
    demoDeQueue1.push_back(300);
    demoDeQueue1.push_back(400);
    demoDeQueue1.push_back(500);
    demoDeQueue1.push_front(100);

    cout << "demoDeQueue1 elements are:\n";
    for( it=demoDeQueue1.begin(); it < demoDeQueue1.end() ; it ++ ) {
        cout << *it <<" ";
    }

    cout << "\nSize of demoDeQueue1 is: " << demoDeQueue1.size();
    cout << "\nIs demoDeQueue1 is empty: " << demoDeQueue1.empty();
    cout << "\nFront element of demoDeQueue1 is: " << demoDeQueue1.front();
    cout << "\nBack element of demoDeQueue1 is: " << demoDeQueue1.back();

    // Data at position
    cout << "\nAt index 2 :" << demoDeQueue1.at(2) << endl;

    // insert data
    it = demoDeQueue1.begin();
    std::advance(it,2);
    demoDeQueue1.insert(it,250);
    std::cout << "After inserting in 3rd element from demoDeQueue1:" << endl;
    for(int data:demoDeQueue1 ) {
        cout << data << " ";
    }
    std::cout << "\n";

    // erase data
    it = demoDeQueue1.begin();
    std::advance(it, 2);
    demoDeQueue1.erase(it);
    std::cout << "After erasing the 3rd element from demoDeQueue1:" << endl;
    for (int data : demoDeQueue1)
    {
        cout << data << " ";
    }
}

// priority queue
void PriorityQueueTest() {
    // By default sorted in ascending order
    priority_queue<int> demoPrioQueue;

    cout << "Is demoPrioQueue is empty ? " << demoPrioQueue.empty() << endl;
    demoPrioQueue.push(200);
    demoPrioQueue.push(300);
    demoPrioQueue.push(100);

    cout << "demoPrioQueue is size: " << demoPrioQueue.size() << endl;

    demoPrioQueue.pop();
    demoPrioQueue.pop();

    cout << "After POP opearation, demoPrioQueue is size: " << demoPrioQueue.size() << endl;

    demoPrioQueue.push(500);
    
    cout << "Top element of, demoPrioQueue is : " << demoPrioQueue.top() << endl;
    
}

// Queue Container Test
void QueueTest() {
    queue<int> demoQueue;
    cout << "Is demoQueue is empty ? " << demoQueue.empty() << endl;
    demoQueue.push(100);
    demoQueue.push(200);
    demoQueue.push(300);

    cout << "demoQueue Size is: " << demoQueue.size() << endl;

    demoQueue.pop();
    cout << "After pop operation, demoQueue Size is: " << demoQueue.size() << endl;
    cout << "Front of demoQueue is: " << demoQueue.front() << endl;
    cout << "Back of demoQueue is: " << demoQueue.back() << endl;

    // queue copy
    queue<int> demoQueue2;

    demoQueue.swap(demoQueue2);
    cout << "Is demoQueue is empty ? " << demoQueue.empty() << endl;
    cout << "Is demoQueue2 is empty ? " << demoQueue2.empty() << endl;
    cout << "demoQueue Size is: " << demoQueue.size() << endl;
    cout << "demoQueue2 Size is: " << demoQueue2.size() << endl;

    // print queue items
    cout << "demoQueue2 items are: " ;
    while( !demoQueue2.empty() ) {
        cout << demoQueue2.front() << " ";
        demoQueue2.pop();
    }

    // insert item using emplace()
    demoQueue2.emplace(100);
    demoQueue2.emplace(200);
    demoQueue2.emplace(300);
    cout << "\ndemoQueue2 Size is: " << demoQueue2.size() << endl;
}

// Stack Container Test
void StackTest() {
    stack<int> demoStack;
    cout << "Is demoStack is empty ? " << demoStack.empty() << endl;
    demoStack.push(100);
    demoStack.push(200);
    demoStack.push(300);

    cout << "demoStack Size is: " << demoStack.size() << endl;

    demoStack.pop();
    cout << "After pop operation, demoStack Size is: " << demoStack.size() << endl;
    cout << "Front of demoStack is: " << demoStack.top() << endl;

    // queue copy
    stack<int> demoStack2;

    demoStack.swap(demoStack2);
    cout << "Is demoStack is empty ? " << demoStack.empty() << endl;
    cout << "Is demoStack2 is empty ? " << demoStack2.empty() << endl;
    cout << "demoStack Size is: " << demoStack.size() << endl;
    cout << "demoStack2 Size is: " << demoStack2.size() << endl;

    // print queue items
    cout << "demoStack2 items are: ";
    while (!demoStack2.empty())
    {
        cout << demoStack2.top() << " ";
        demoStack2.pop();
    }

    // insert item using emplace()
    demoStack2.emplace(100);
    demoStack2.emplace(200);
    demoStack2.emplace(300);
    cout << "\ndemoStack2 Size is: " << demoStack2.size() << endl;
}

// Set Container Test
void SetTest() {
    // set elements are unique and by default sorted in ascending order
    set<int> demoSet;

    for(int i=0; i<=5; i++ ) {
        demoSet.insert(6-i);
        // demoSet.insert(i);
    }

    cout << "demoSet elements are: ";
    for( auto it = demoSet.begin(); it != demoSet.end(); it++) {
        cout << *it << " ";
    }

    // comp operator return same as 'less than' operator
    set<int>::key_compare comp = demoSet.key_comp();

    cout << "\nIs 100 > 200 ? " << comp(100,200) << endl;
    cout << "Is 500 > 200 ? " << comp(500,200) << endl;

    // key compare using less than
    set<int,less<int>> demoSet2;
    set<int,less<int>>::key_compare comp2 = demoSet2.key_comp();

    cout << "Is 100 > 200 ? " << comp2(100, 200) << endl;
    cout << "Is 500 > 200 ? " << comp2(500, 200) << endl;

    // key compare using greater than
    set<int,greater<int>> demoSet3;
    set<int,greater<int>>::key_compare comp3 = demoSet3.key_comp();

    cout << "Is 100 > 200 ? " << comp3(100, 200) << endl;
    cout << "Is 500 > 200 ? " << comp3(500, 200) << endl;

    // UPPER BOUND
    auto it = demoSet.upper_bound(2);
    cout << "Upper Bound of 2 is: " << *it << endl;

    it = demoSet.upper_bound(4);
    cout << "Upper Bound of 4 is: " << *it << endl;
    it = demoSet.upper_bound(6);
    if( it == demoSet.end() ) {
        cout << "Given Key is greater than or equal to the largest key element" << endl;
    }

    // LOWER BOUND
    it = demoSet.lower_bound(2);
    cout << "Lower Bound of 2 is: " << *it << endl;
    it = demoSet.lower_bound(9);
    if (it == demoSet.end())
    {
        cout << "Given Key is not present in set" << endl;
    }
    it = demoSet.lower_bound(0);
    cout << "Lower Bound of 0 is: " << *it << endl;
}

void MultiSetTest() {

}

// Map Container Test
void MapTest() {
    // declare a empty map
    map<int, int> demoMap;

    // insert operation
    demoMap.insert( pair<int,int> (1,100));
    demoMap.insert( pair<int,int> (2,200));
    demoMap.insert( pair<int,int> (3,300));
    demoMap.insert({4,400});
    // demoMap.insert(pair<int, int>(3, 500));

    // printing map
    map<int,int>::iterator it;
    std::cout << "demoMap elements are:" << endl;
    for( it = demoMap.begin(); it != demoMap.end(); it++ ) {
        std::cout << "\t" << it->first << "\t" << it->second << endl;
    }

    // assigning one map to another
    map<int,int> demoMap2(demoMap.begin(),demoMap.end());

    it = demoMap2.begin();
    std::advance(it,2);
    
    // erase using iterator
    demoMap2.erase(it);
    std::cout << "After erase the 3rd pair, demoMap2 elements are:" << endl;
    for (it = demoMap2.begin(); it != demoMap2.end(); it++)
    {
        std::cout << "\t" << it->first << "\t" << it->second << endl;
    }

    // also you can erase range of value
    it = demoMap2.begin();
    // find() function return the iterator to the pair with key = 4
    auto it2 = demoMap2.find(4);

    demoMap2.erase(it,it2);
    std::cout << "After erase pair from [0-1], demoMap2 elements are:" << endl;
    for (it = demoMap2.begin(); it != demoMap2.end(); it++)
    {
        std::cout << "\t" << it->first << "\t" << it->second << endl;
    }

    // erase with key value
    bool eraseStatus = demoMap2.erase(4);
    if( eraseStatus ) {
        cout << "Succesfully deleted the pair with key=4";
    } else {
        cout << "Failed to delete the pair with key=4";
    }

    // key comparision
    map<int,int>::key_compare comp = demoMap.key_comp();

    cout << "\nFirst Key <  Second Key = " << comp(1,2) << endl;

    int highest = demoMap.rbegin() -> first;

    it = demoMap.begin();
    cout << "Map demoMap elements are:" << endl;
    do {

        cout << (*it).first << "\t" << it->second << endl;

    } while ( comp((it++)->first, highest) );

    // value comparision
    map<int,int>::value_compare comp2 = demoMap.value_comp();

    it = demoMap.begin();
    auto lastPair = demoMap.rbegin();

    // value_comp() take map value i.e. a pair for comparision
    cout << "Value_Comp = " << comp2(*it, *lastPair) << endl;

    // at(): accessing value
    cout << demoMap.at(1) << endl;

    //at(): modify the value
    demoMap.at(1) = 1000;
    
    // inserton
    auto it4 = demoMap.find(3);
    // insertion searching operation start from it4
    demoMap.insert(it4,{ 5 , 500});

    for (auto it3 : demoMap)
    {
        cout << it3.first << " -->" << it3.second << endl;
    }

}

// Multi Map Container Test
void MultiMapTest() {
    multimap<int,char> demoMultiMap; // empty multimap container
    // insert elements
    demoMultiMap.insert(pair<int,char> (1,'A'));
    demoMultiMap.insert(pair<int,char> (2,'B'));
    demoMultiMap.insert(pair<int,char> (3,'C'));
    demoMultiMap.insert(pair<int,char> (3,'D'));
    demoMultiMap.insert(pair<int,char> (3,'D'));
    demoMultiMap.insert(pair<int,char> (2,'E'));
    demoMultiMap.insert(pair<int,char> (4,'F'));

    multimap<int,char>::iterator it;
    cout << "demoMultiMap elements are:" << endl;
    for( it = demoMultiMap.begin(); it != demoMultiMap.end(); it++ ) {
        cout << it->first << "\t" << it->second << endl;
    }

    // assigning the elements from demoMultiMap to demoMultiMap2
    multimap<int, char> demoMultiMap2(demoMultiMap.begin(),demoMultiMap.end());

    cout << "demoMultiMap2 elements are:" << endl;
    for (it = demoMultiMap2.begin(); it != demoMultiMap2.end(); it++)
    {
        cout << it->first << "\t" << it->second << endl;
    }

    // erase upto third element from demoMultiMap2
    multimap<int, char>::iterator it2;
    it = demoMultiMap2.begin();

    // return the iterator to the first key-value pair with key = 3
    it2 = demoMultiMap2.find(3);
    // std::advance(it2,2);
    demoMultiMap2.erase(it,it2);

    cout << "After erase from [0-2], demoMultiMap2 elements are:" << endl;
    for (it = demoMultiMap2.begin(); it != demoMultiMap2.end(); it++)
    {
        cout << it->first << "\t" << it->second << endl;
    }

    // remove all the element with key = 3
    demoMultiMap2.erase(3);

    cout << "After erase all the element with key = 3, demoMultiMap2 elements are:" << endl;
    for (it = demoMultiMap2.begin(); it != demoMultiMap2.end(); it++)
    {
        cout << it->first << "\t" << it->second << endl;
    }
}

int main()
{
    if (0)
    {
        std::cout << Sum<int>(5, 6) << "\n";
        std::cout << Sum<float>(4.5, 6.0) << "\n";
        std::cout << Sum<int, float>(4, 6.5) << "\n";
        std::cout << Sum<float, int>(4.5, 6);
    }

    // you can call any above defined container module to test
    MultiMapTest();
}