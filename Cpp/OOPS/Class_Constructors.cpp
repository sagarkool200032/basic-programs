# include<iostream>
using namespace std;
    
// program for creating  constructors

class rectangle
{

private:
	int length;
	int breadth;

public:

    // paramatized and non-paramatized
	rectangle(int l=1, int b=1)
	{
		length = l;
		breadth = b;
	}

    // copy
    rectangle(rectangle &r)
	{
		length = r.length;
		breadth = r.breadth;
	}

	int area()
	{
		return length*breadth;
	}
};

int main()
{
	rectangle r1(10,20);
    rectangle r2(r1);
	cout<<r1.area()<<endl;
    cout<<r2.area()<<endl;
}