#include<iostream>
using namespace std;
class complex
{
	int x,y;
	public:
		complex()
		{
			x=0;
			y=0;
		}
		friend void operator >>(complex &u , complex &v)
		{
			cout<<"Enter first real ";
			cin>>u.x;
			cout<<"Enter first Imagniary ";
			cin>>u.y;
			cout<<"Enter Second real ";
			cin>>v.x;
			cout<<"Enter Second Imagnary ";
			cin>>v.y;
		}
		friend void operator <<(complex &u , complex &v)
		{
			cout<<"First Complex Number is "<<u.x<< "+" <<u.y<<"i"<<endl;
			cout<<"Second Complex Number is "<<v.x<< "+" <<v.y<<"i"<<endl;
		}
		friend void operator +(complex&u , complex &v)
		{
			complex add;
			add.x=u.x+v.x;
			add.y=u.y+v.y;
			if(add.y>0)
			cout<<"Addition is "<<add.x<<"+"<<add.y<<"i"<<endl;
			else
			cout<<"Addition is "<<add.x<<(-1)*add.y<<"-i"<<endl;
		}
		friend void operator -(complex &u , complex &v)
		{
			complex sub;
			sub.x=u.x-v.x;
			sub.y=u.y-v.y;
			if(sub.y>0)
			cout<<"Subtraction is "<<sub.x<<"-"<<sub.y<<"i"<<endl;
			else
			cout<<"Addition is "<<sub.x<<(-1)*sub.y<<"-i"<<endl;
		}
		friend void operator *(complex &u , complex &v)
		{
			complex mul;
			mul.x=u.x*v.x;
			mul.y=u.y*v.y;
			if(mul.y>0)
			cout<<"Multiplication is "<<mul.x<<"*"<<mul.y<<"i"<<endl;
			else
			cout<<"MMultiplication is "<<mul.x<<(-1)*mul.y<<"-i"<<endl;
		}
};

int main()
{
	{
	char ch;
	char des;
	complex s1,s2;
	operator >>(s1,s2);
	operator <<(s1,s2);
	do{
		cout<<"Choose Operation to be Performed\n";
		cout<<"1.Addition";
		cout<<"\n2.Subtraction";
		cout<<"\n3.Multiplication";
		cin>>ch;
		switch(ch){
			case 1:  s1+s2;
					 break;
			case 2:  s1-s2;
					 break;
			case 3:  s1*s2;
					 break;
			default:
				cout<<"\nInvalid "<<endl;
		}cout<<"Do you want to perform again => (Y/N)";
	 	 cin>>des;
		}while(des=='y' || des=='Y');
}
}
