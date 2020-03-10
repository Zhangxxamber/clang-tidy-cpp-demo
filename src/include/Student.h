/*
 * 作业,定义一个学生类
 * 数据成员：学号、姓名、数学、英语、计算机三科成绩
 *成员函数：求总成绩、求三科平均成绩、输出学生信息
 *新增一个生日类  2018.4.2
*/

#include <iostream>
#include <string>
using namespace std;
/**
123
*/
class Data
{
public:
    //123
    Data();
    Data(Data &da);//567
    int inf();// 678
private:
    int year;
    int month;
    int day;
};

class Student//define a class called "Student"
 {
public:
    //constructors
    Student(int num, string na, int ma, int en, int cs, Data tp);
    Student(Student &stu);//<Copy constructors
    /**
        ~Student
    */
    ~Student();
    ///the sum grade
    int sum();
    int ave();// calculate the average grade

    /**
    show the details of the student
    */
    void show();
private:
    Data birthday;
    int number;
    string name;
    int math;
    int eng;
    int com;
public:
    int aa;///<注释aaa
    int bb;//注释bb
    //注释cc
    int cc;
    ///注释cc2
    int cc2;
    ///注释dd
    int dd;
    int ff;//ff
    int gg;// gg doc

    int aa1;///<注释aaa
    int bb1;//注释bb
    //注释cc
    int cc1;
    ///注释cc2
    int cc21;
    ///注释dd
    int dd1;
    int ff1;//ff
    int gg1;// gg doc

    ///get
    int getName();
    int setName();// set


    int getName2();
    int setName2();

    int ggetName2();
    int ssetName2();

    int TestNull(Data *pData);

    // rule1
    int test_rule1;

    ///rule2
    int test_rule2;

    int test_rule3;///rule3
};
