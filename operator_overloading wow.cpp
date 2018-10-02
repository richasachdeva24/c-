#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<iostream>

using namespace std;

class complex{
	float x,y;
	public:
		complex(){}
		complex(float real, float img){
			
			x=real;
			y=img;
		}
		
		complex operator+(complex);
		void display(void);
};

complex complex::operator+(complex c){
	complex t;
	t.x=x+c.x;
	t.y=y+c.y;
	
	return t;
}

void complex::display(void){
	cout<<x<<"+i"<<y;
}

int main()
{
	complex c1,c2,c3;
	c1=complex(2.0,3.0);
	c2=complex(7.0,5.0);
	c3=c1+c2;
	c1.display();
}



