#include<iostream>
#include<stack>
using namespace std;

int main(){
stack<int> numbers;
numbers.push (5); 
numbers.push (7); 
numbers.push (2);
cout<<"numbers.size:"<<numbers.size()<<endl;
cout<<"top number:"<<numbers.top()<<endl;
int poppedNum=numbers.top();
numbers.pop(); 
cout<<endl;
cout<< "the new numbers size: "<<numbers.size()<<endl; 
cout<< "the new top number: "<<numbers.top()<<endl; 
cout<< "the popped number is: "<<poppedNum<<endl; 
cout<<endl;
stack<int> newstack; 
newstack.push(8); 
newstack.push(1); 
cout<<"new stack size:"<<newstack.size()<<endl; 
cout<<"neww stack number:"<<newstack.top()<<endl; 
cout<<endl;
}
