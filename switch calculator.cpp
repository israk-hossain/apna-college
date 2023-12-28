#include<iostream>
using namespace std;
int main(){


double n1,n2;
cout<<"Enter Two Number :"<<endl;
cin>>n1>>n2;
char op;
cout<<"Enter an Operator :"<<endl;
cin>>op;
switch(op){

case '+':

cout<<n1+n2<<endl;
break;
case '-':
    cout<<n1-n2<<endl;
    break;
case '*':
    cout<<n1*n2<<endl;
    break;
case '/':
    cout<<n1/n2<<endl;
    break;
default :
    cout<<"Enter Another Operator"<<endl;
    break;





}










}
