#include <iostream>
#include <string>
using namespace std;
class class2 {
 public:  int eek;
   };
class class1 {class1 *ptr2 = new class1(99);
 class1 obj2(88);

 cout << "size of obj2 = " << sizeof(obj2) << " size of ptr2 = " << sizeof(ptr2) << endl;

    int x;
    float y;
    class2 myObj;
    class2 *myPtrToObj;
    int happy;
public:
    class1(int forX) {
    x = forX; y = 0.0; myObj.eek = 4; myPtrToObj = NULL;}
    int getX() const { return x;}
    void setX(int val) {x = val;}
};
//prototype
void add(float*, int a);

class1* doStuff() {
class1 *ptr2 = new class1(99);
 class1 obj2(88);

 cout << "size of obj2 = " << sizeof(obj2) << " size of ptr2 = " << sizeof(ptr2) << endl;
 return ptr2;
 }

 void showStuff(class1 *ptrA)
 {
     cout << "ShowStuff obj.x =" << ptrA->getX() << endl;
 }

int main(){
float num = 5;
 float * ptr;
 class1 *otherPtr;
 otherPtr = doStuff();
 cout << "otherPtr x = " << otherPtr->getX() << endl;
 otherPtr->setX(44);
 showStuff(otherPtr);
 ptr = new float(num);
 char flower[] = "rose";
 cout << flower;
}


