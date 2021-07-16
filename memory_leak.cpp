#include <iostream>
#include <memory>


using namespace std;
struct B;

struct A{
  int i;
  shared_ptr<B> b;
  A(int i):i(i){cout<<"A constructed."<<i<<endl;}
  ~A(){cout<<"A destroyed."<<i<<endl;}
};

struct B{
  int i;
  shared_ptr<A> a;
  B(int i):i(i){cout<<"B constructed."<<i<<endl;}
  ~B(){cout<<"B destroyed."<<i<<endl;}
};
int main() {
  shared_ptr<A> shA {new A(1)};
  shared_ptr<B> shB {new B(1)};
  shA->b = shB;
  shB->a = shA;
}