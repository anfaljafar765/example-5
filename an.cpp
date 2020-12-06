\*my name:anfal jafar
\*class: computer
\*department: secnod
#include <iostream>
#include<c.math>

using namespace std;
class shape
{
protected:
int width,int height;
public:
int setwidth_height(int a,int b)
		
width=a;
height=b;

virtual int area()
};
class polygon:public shape
public:
	int area()
{
	return(width*heigth)
	
	int space()
	return(heigth)
}
};
class tringle:public polygon
public:
{
	int area ()
	return(width*height*2)
	int space()
	return (width*height*0.5)
}
};
class rectangle:public polygon
public:
{
	int area ()	
	int space()
	{
	return (width*height)

	return((width+height)*2)

}
};
class square:public polygon	
public:
	{
int area ()	
int space()
{

	return(height)
	return (4*height)
}
	
};
class ellipse:public shape
public:
	{
	int area()
return(	pi*A*b)
int space()
return(a)

}
};
class circle:public ellipse
public:
	{
	int area()
	return (pi*a*heigth)
	int space()
	return (2*pi)
	}
	};
	shape *n1,*n2
	void main()
	n1=&poly
	n2=&elli
	n1->set_values(2,3);
	n2->set_values(2,3);
	cout<<n1->area()<<endl;
	cout<<n1->space()<<endl;
	cout<<n2->area()<<endl;
	cout<<n2->area()<<endl;
	polygon *x1,*x2,*x3
	x1=&rect
	x2=&tria
	x3=&squr
	x1->set_values(2,3);
	x2->set_values(2,3);
	x3->set_values(2,3);
	cout<<x1->area()<<endl;
	cout<<x1->space()<<endl;
	cout<<x2->area()<<endl;
	cout<<x2->space()<<endl;
	cout<<x3->area()<<endl;
	cout<<x3->space()<<endl;
	ellipse *v;
	v=&cir;
	v->set_values(2,3);
	cout<<v->area()<<endl;
	return 0;
	
	}
	
	
	


	

		
		
		
		
			




























