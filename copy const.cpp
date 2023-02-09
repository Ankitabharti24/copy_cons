//lec 34
//copy constructor -- 

#include<iostream>
using namespace std;

class number{
	int a;
	public:
		number(){ //
		} 
		number(int num){
			a=num;
		}
		//when no copy constructor is found, compiler supplies its own constructor
		number(number &obj){        //copy constructor -- here we pass constructor object
			cout<<"copy const called"<<endl;
			a=obj.a;
		}
		void display(){
			cout<<a<<endl;
		}
};
int main(){
	number x,y,z(55),z1;
	x.display();
	y.display();
	z.display();
	number t(x);
	t.display();
	
	z1=z; //here copy const not called -- only assignment operator is used
	z1.display();
	number z2=x; //here copy const called -- object is created in same line and also assignment operator is used
	z2.display();
	
}
