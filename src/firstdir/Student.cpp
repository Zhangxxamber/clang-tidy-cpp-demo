#include "Student.h"

// rule1
Data::Data()
{
    year = 1998;
    month = 8;
    day = 3;
}


///rule3
Data::Data(Data &da)
{
     cout << endl << "Warnning:This Copy constructors.!!!" << endl;
    year = da.year;
    month = da.month;
    day = da.day;
}

int Data::inf() ///rule4
{
    year = year + 1;
    cout << "Birthday:" << year << "/" << month << "/" << day << endl;
    return 1;
}
//the realization of class
Student::Student(int num, string na, int ma, int en, int cs, Data tp) :birthday(tp) {
    number = num;
    name = na;
    math = ma;
    eng = en;
    com = cs;
}
Student::~Student()
{
 
}
Student::Student(Student &stu) :birthday(stu.birthday) {
     cout << endl << "Warnning:This Copy constructors.!!!" << endl;
    number = stu.number;
    name = stu.name;
    math = stu.math;
    eng = stu.eng;
    com = stu.com;
}
int Student::sum() {
    return math + eng + com;
}
int Student::ave() {
    return (math + eng + com) / 3;
}
void Student::show() {
     cout << "Number:" << number << endl;
     cout << "Name:" << name << endl;
    birthday.inf();
     cout << "Math score:" << math << endl;
     cout << "English score:" << eng << endl;
     cout << "Computer score:" << com << endl;
     cout << "Sum score:" << sum() << endl;
     cout << "Average score:" << ave() << endl;
}

int Student::TestNull(Data *pData) {
    Data tmp;
    Data *tmp2 = &tmp;
    int ret = tmp2->inf();
    cout << "1:" << endl;

    tmp2 = pData;
    tmp2 = nullptr;//
    cout << "1-1:tmp2:" << tmp2 <<endl;
    if(tmp2 != nullptr)
    {
        cout << "2:" << endl;
        return 1;
    }
    cout << "3:tmp2:" << tmp2 <<endl;
    int ret2 = tmp2->inf();
    cout << "4:ret2:" << ret2 << endl;
    return 2;
}