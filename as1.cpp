#include <iostream>
using namespace std;


enum Type (integer, doub, boolean);


class Base {						//base class (for 2 arguments/inputs)

public:
	int i;
	bool b;
	double d;
	void Base ( Type x, Type y){
		if (x!== y )
		{
			cout<<"Cannot perform Operation...Inputs are not of same type"<<endl;
		}

};

	class TAint:public Base {
	public:
		TAint (Type x){x="integer";}
		set(int y){i=y;}
		
};

	class arr							// fix array class

	class TAdouble:public Base {
	public:
		TAdouble (Type x){x="doub";}
		set(double y){d=y;}
		
};
	class TAbool:public Base {
	public:
		TAbool (Type x){x="boolean";}
		set(bool y){b=y;}
		
};


class TAplus: public Base {		//class plus operation for integers
public:
	TAplus(TAint a, TAint b){
		evaluate() { return a.i +b.i; }
};

class TAplus: public Base {		//class plus operation for doubles
public:
	TAplus(TAdouble a, TAdouble b){
		evaluate() { return a.d +b.d; }
};

class TAsub: public Base {		//class subtraction operation  for integers
public:
	TAsub(TAint a, TAint b);
	evaluate() { return a.i-b.i;}
};

class TAsub: public Base {		//class subtraction operation  for doubles
public:
	TAsub(TAdouble a, TAdouble b);
	evaluate() { return a.d-b.d;}
};

class TAmult: public Base {		//class  mulptiplication operation  for integers
public:
	TAmult(TAint a, TAint b);
	evaluate() { return a.i*b.i;}
};

class TAmult: public Base {		//class  mulptiplication operation  for doubles
public:
	TAmult(TAdouble a, TAdouble b);
	evaluate() { return a.d*b.d;}
};

class TAdiv: public Base {		//class  division operation  for integers
public:
	TAdiv(TAint a, TAint b);
	evaluate() { return a.i/b.i;}
};

class TAdiv: public Base {		//class  division operation  for doubles
public:
	TAdiv(TAdouble a, TAdouble b);
	evaluate() { return a.d/b.d;}
};




class TAlessthan: public Base {		//class less than operation
protected:
	bool c;
public:
	TAlessthan();
	evaluate() 
	{
		while (a=='boolean' && b=='boolean')
			if (a<b)
				c=true;
	}
	printstate(){cout<<c<<endl;}

};


class TAmorethan: public operation2 {		//class more than operation
protected:
	bool c;
public:
	TAmorethan();
	evaluate() 
	{
		while (a=='boolean' && b=='boolean')
			if (a>b)
				c=true;
	}
	printstate(){cout<<c<<endl;}
};


class TAequal: public operation2 {		//class less than operation
protected:
	bool c;
public:
	TAequal();
	evaluate() 
	{
		while (a=='boolean' && b=='boolean')
			if (a==b)
				c=true;
	}
};

//not operation ..only boolean
class TAnot: public operation1 {
public:
	evaluate()
	{
		while (a=='boolean')
		if (a==true)
			a==false;
		else if (a==false)
			a==true;
	}
};


int main(){
	TAint x("x");
	TAint y("y");
	TAdouble d("d");
	x.set(5);
	y.set(2);
	d.set(2.3);
	TAadd t1(x,y);
	t1.evaluate();

}

