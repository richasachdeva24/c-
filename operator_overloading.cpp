#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<iostream>

using namespace std;

class abc{
	public:
	int h,m,s;
	//int y=-7;
	abc(){
		cin>>h>>m>>s;                   
	}
	void operator ++(){
		s=s++;
		if(s==60){
			m++;
			s=0;
			
			if(m=60){
				h++;
				m=0;
			}
		}
	//	y=y*y;
		cout<<h<<":"<<m<<":"<<s;
		//cout<<endl<<y;
	}
};

int main()
{
	abc o;
	++o;	
}




