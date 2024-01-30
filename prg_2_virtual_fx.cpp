#include<iostream>
using namespace std;
class base{
	public:
	virtual void display()
	 {
	 	cout<<"base class"<<endl;
	 }		
};

class derived:public base{
	public:
		void display()
		{
			cout<<"derived class"<<endl;
		}
};	

int main()
{
    base *bptr;
    base b1;
    derived *dptr, d1;
    bptr = &b1;
    bptr->display();
    
    bptr = &d1;
    bptr->display();
    
    
    return 0;
}																	
