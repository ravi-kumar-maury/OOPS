#include <iostream>
using namespace std;
int main() {
  /*oops concepts 
  1.polymorphism 
  1(a).runtime polymorphism ____________** method overriding
  1(b).compile time polymorphism _____***method overloading  
  2.encapsulation
  3.inheritance
concept of virtual function (why would even bother 
to use 'keyword virtual ')
*/
class A 
{

int x;
public :
virtual  void show()
  {
     cout<<"hi,i am in class A\n";
    
  }
  void i_love_chess()
    {
      cout<<"i_love_chess\n"; 
    }

};
class B:public A
{
  int y;
  public :
  void show()
   {

       cout<<"hi,i am in class B\n";
   }
};
B b;
A a;
//b.show();
A *aptr;  
aptr=&a;
aptr->show();  //accessing class A show
//exit(0); 
aptr=&b;
aptr->show();//without "virtual" keyword in base class "show" function ,this always calls "show function" in base clas despite of overriding                    
//aptr=&a;
//cout<<"reference changed\n";
//aptr->show();
//a.show();
//b.i_love_chess();

}
