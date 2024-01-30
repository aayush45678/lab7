#include<iostream>
using namespace std;

class shape{
	protected:
		int l,b,c;
		public:
			void setSides ( int x,int y)
			{
				l = x;
				b = y;
			}
			
			void setSides ( int x,int y,int z)
			{
				l = x;
				b = y;
				c = z;
			}	
			virtual int perimeter() =0;		
};


class rectangle:public shape{
	public:
		int perimeter()
		{
			return 2*(l+b);
		}
};

class triangle:public shape{
	public:
		int perimeter(){
			return l+b+c;
		}
};

int main()
{
	rectangle r1;
	triangle t1;
	r1.setSides(4,5);
	cout<<"Perimeter of rectangle is = "<<r1.perimeter()<<endl;
	t1.setSides(3,4,6);
	cout<<"Perimeter of triangle is = "<<t1.perimeter()<<endl;
	return 0;
}
