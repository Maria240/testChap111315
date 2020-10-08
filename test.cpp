#include <iostream>
#include <string.h>
using namespace std;

//prototype
void changevalues(char*);
int main(){
    char str1[20];
    str1[0] = 'h';
    str1[1] = 'a';
    double z =7, &z1 = z, &z2 = z;
    cout << z1 << endl;
    z = 6;
    cout << z1<< endl;
    char ch, &rch = ch;
    // OR
    //strcpy(str1, "Happy Birthday Maria");
    //Happy birthday";
     //char  *str2 = "sad birthday";
     //int z;
     //float*z;

    // str2[0] = 'B';
    //str1[5] = '1';// birthday"
    //cout << str1 << endl << str2 << " " << sizeof(str2 )<< endl;
    //str2++;
    //cout << str2 << endl;
    char b[] = "I am hungrey";
    char happy [] = "abcde";
    int num[] = {2, 3, 5, 6, 7, 8, 9, 10, 11};
    //cout << "Number:" << num << endl;
    float *a;
    a = new float;
    *a= 3.14;
    char *val;
    val = new char;
    val = happy;
    //changevalues(str2);
    //cout << ptr << endl;
    char *p;
    p = new char('a');
    int r[] = {1,2};
    int *n;
    n = new int;
    n = r;
    int r1=5;
    int *n1 = new int;
    *n1 = r1;
     return 0;

}

void changevalues(char *b){

    //cout << *b++ << endl;
    /*for (int i = 0; i < 9; i ++){

        cout << *b << endl;
        //(*b)++;
        //*b++;
    }*/
    cout << b;
    /*while(*b){
        cout << *b++ << endl;
    }*/
}
