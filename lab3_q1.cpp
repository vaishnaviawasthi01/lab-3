//library
#include <iostream>
using namespace std;
//write the main function
int main(){
//declaring variables
int a=1;
char b=2;
float c=2.007;
double d=2.01;
bool e=0;
//will get the size of variable
cout <<"size of char;"<<sizeof(char)<<"byte"<<" contents of a =="<<a<<endl;
cout<<"size of float;" << sizeof(float)<<" contents of c="<<c<<endl;
cout <<"size of int;" <<sizeof (int)<< "byte"<<" contents of b="<<b<<endl;
cout <<"size of double;"<<sizeof(double)<<"byte"<<" contents of d="<<d<<endl;
cout <<"size of bool;"<< sizeof (bool)<<"byte"<<" contents of e="<<e<<endl;
return 0;
}
