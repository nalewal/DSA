#include <iostream>
using namespace std;

class A{
    public:
    int a,b;

    int add(int a,int b){
        this->a=a;
        this->b=b;
        return a+b;
    }
};
int main() {
    A *obj=new A();
    cout<<obj->add(5,6);
    
}
