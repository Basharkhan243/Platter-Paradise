// #include <iostream>
// using namespace std;
// class BC
// {
// public:mov
//     void printBC()
//     {
//         cout << "\nPrinting message in the base class" << endl;
//     }
//     void show()
//     {
//         cout << "\nshow() of base class" << endl;
//     }
// };

// class DC : public BC
// {
// public:
//     void printDC()
//     {
//         cout << "\nPrinting message in derived class" << endl;
//     }
//     void show()
//     {
//         cout << "\nshow() of derived class" << endl;
//     }
// };

// int main()
// {
//     BC *bptr;
//     BC base;
//     bptr = &base;
//     cout << "bptr points to base objects\n";
//     bptr->show();
//     DC derived;
//     bptr = &derived;
//     cout << "bptr now points to derived objects\n";
//     // bptr->printDC;
//     bptr->show();

//     DC *dptr;
//     dptr = &derived;
//     cout << "dptr is derived type pointer\n";
//     dptr->show();
//     dptr->printDC();
//     cout << "using typecasting:";
//     ((DC *)bptr)->show();
//     ((DC *)bptr)->printDC();
//     // dptr=&base;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class BC
// {
// public:
//     void show()
//     {
//         cout << "\nshow() of base class" << endl;
//     }
// };

// class DC : public BC
// {
// public:
//     void show()
//     {
//         cout << "\n show() of derived class" << endl;
//     }
// };

// int main()
// {
//     BC *bptr;
//     BC base;
//     bptr = &base;
//     cout << "\n-----Early Binding-------";
//     cout << "bptr points to base objects\n";
//     bptr->show();

//     DC derived;
//     bptr = &derived;
//     cout << "bptr now points to derived objects\n";
//     bptr->show();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class BC
// {
// public:
//     virtual void show()
//     {
//         cout << "\nshow() of base class" << endl;
//     }
// };

// class DC : public BC
// {
// public:
//     void show()
//     {
//         cout << "\nshow() of derived class" << endl;
//     }
// };
// int main()
// {
//     BC *bptr;
//     BC base;
//     bptr = &base;
//     cout << "\n------Runtime polymorphism------";
//     cout << "bptr points to base objects\n";
//     bptr->show();
//     DC derived;
//     bptr = &derived;
//     cout << "bptr now points to derived onjects\n";
//     bptr->show();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class BC
// {

// public:
//     virtual void show()
//     {
//         cout << "\nshow() of base class" << endl;
//     }
// };

// class DC : public BC
// {
// public:
//     void show()
//     {
//         cout << "\nshow() of derived class" << endl;
//     }
// };

// int main()
// {
//     BC *bptr;
//     BC base;
//     bptr = &base;
//     cout << "\n--------Runtime polymorphism- ------------";
//     cout << "bptr points to  base objects\n";
//     bptr->show();
//     DC derived;
//     bptr = &derived;
//     cout << "bptr now points to derived objects\n";
//     bptr->show();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class B{
//     protected:
//     int x;
//     public:
//    virtual  void get_dataB(){
//         cout << "\nEnter value of x: ";
//         cin>>x;
//     }
// };

// class DB1:public B{
//     protected:
//     int y;
//     public:
//     void get_dataDB1(){
//         cout <<"\nEnter value of y: ";
//         cin >> y;
//     }
// };

// class DB2:public B{
//     proytected:
//     int z;
//     public:
//     void get_dataDB2(){
//         cout<<"\nEnter value of x: ";
//         cin >> z;
//     }
// };

// class D:public DB1,public DB2{
//     public:
//     void sum(){
//         int result;
//         result=x+y+z;
//         cout <<"\nResult is: "<<result;
//     }
// };

// int main(){
//     D obj1;
//     obj1.get_dataB();
//     obj1.get_dataDB1();
//     obj1.get_dataDB2();
//     obj1.sum();
//     return 0;
// }

#include <iostream>
using namespace std;
class sample
{
public:
    virtual void example() = 0;
    void show()
    {
        cout << "\nThis is sample abstract class";
    }
};

class derived1 : public sample
{
public:
    void example()
    {
        cout << "C++";
    }
};

int main()
{
    sample *ptr;
    derived1 obj1;
    ptr = &obj1;
    ptr->example();
    ptr->show();
}