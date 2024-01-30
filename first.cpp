#include<iostream>
using namespace std;

class base{
	public:void showInfo(const char x[])
	{
		cout<<x<<endl;
		
	}
};

class derived:public base{
	public:
		void showmsg (const char x[])
		{
			cout<<x<<endl;
		}
		
};
int main()
{
	base *bptr,objB;
	derived *objD = new derived;
	bptr = &objB;
	
	bptr -> showInfo("base pointer to base object");
	bptr -> showInfo("base pointer can only access base function ");
	
	objD->showmsg("Derived pointer to derived object");
	objD->showInfo("Derived pointer accessing base function");
	
	bptr = new derived();
	bptr -> showInfo("base pointer to derived object");
	bptr -> showInfo("bse pointer cannot access derived function");
	
	//objD = new Base();
	objD -> showInfo("Derived pointer cannot point to base object");
	return 0;
	
}
