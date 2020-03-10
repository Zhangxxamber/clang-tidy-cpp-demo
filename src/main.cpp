#include <iostream>
#include "test.h"
#include "firstdirtest.h"
#include "seconddirtest.h"
#include <map>
using namespace std;

class MyData
{
public:
    MyData(int age_arg);

private:
    int age = 1;

public:
    int getAge();
};

MyData::MyData(int age_arg) {
    age = age_arg;
}

int MyData::getAge() {
    age = 101;
    return age;
}

int test_org(int* p){

   if (p != nullptr) {
      *p=1;
   }
   *p = 2;
   
   int ret = *p;
   
   return ret;
}

int test(int* p){

   if (p != nullptr) {
      *p=1;
   }
   *p = 2;
   
   int ret = *p;
   
   return ret;
}

int test2(int* p){

   if (p != nullptr) {
      *p=1;
   }
   *p = 2;
   
   int ret = *p;
   
   return ret;
}

int test3(int* p){

   if (p != NULL) {
      *p=1;
   }
   *p = 2;
   
   int ret = *p;
   
   return ret;
}

void test4(){

    //
    std::map<int, MyData *> my_map;
    my_map.insert(std::make_pair(10, new MyData(1)));
    my_map.insert(std::make_pair(20, new MyData(2)));
    my_map.insert(std::make_pair(30, new MyData(3)));
    my_map.insert(std::make_pair(40, new MyData(4)));

    auto it = my_map.find(50);
    if(it != my_map.end()){
        it = my_map.end();
        it->second->getAge();
    }
    it->second->getAge();

}

int main() {

    //
    std::map<int, MyData *> my_map;
    my_map.insert(std::make_pair(10, new MyData(1)));
    my_map.insert(std::make_pair(20, new MyData(2)));
    my_map.insert(std::make_pair(30, new MyData(3)));
    my_map.insert(std::make_pair(40, new MyData(4)));

    auto it = my_map.find(50);
    cout << "find:20 it->second->getAge():" << it->second->getAge() << endl;
    if(it != my_map.end()){
        it = my_map.end();
        cout << "it = my_map.end(), it->second->getAge():" << it->second->getAge() << endl;
        cout << "in if end~" << endl;
    }
    it->second->getAge();

    int a = add(1,1);
    int a1 = add1(1,1);
    int a2 = add2(1,1);

    MyData *p_MyData = new MyData(1);
    p_MyData->getAge();

    p_MyData = nullptr;
    p_MyData->getAge();

    //test
    int b = 3;
    int *test_p = &b;
    test(test_p);

    int *test_p_1 = nullptr;
    test(test_p_1);

    //test2
    int b2 = 3;
    int *test_p2 = &b2;
    test2(test_p2);

    //test3
    int b3 = 3;
    int *test_p3 = &b3;
    test3(test_p3);

    //int *test_p_1 = NULL;
    //test(test_p_1);

    //int *s = nullptr;
    //*s = 8;

    int *p = nullptr;
    *p = 10;

    //int a = add(1,1);
    //int a1 = add1(1,1);
    //int a2 = add2(1,1);

    std::cout << "a:" << a << std::endl;
    std::cout << "a1:" << a1 << std::endl;
    std::cout << "a2:" << a2 << std::endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
