# include <iostream>

class B{
	public:
	int a;
		B(){a = 2;}
};
class D : public B{
	public:
		int c;
		int a;
		D(){a = 20;}
};

//target-type is a pointer to some complete class D and expression is a prvalue pointer to its non-virtual base B, 

int main()
{
	D *derived = new D;
	B *base = derived;

	std::cout << base->a << std::endl;   //2
	std::cout << derived->a << std::endl;  //20
	
	D *dd = static_cast<D*> (base);
	std::cout << dd->a << std::endl;   //20

	// std::cout << base << std::endl;
	// std::cout << &derived << std::endl;
	// std::cout << &dd << std::endl;
	// std::cout << &base << std::endl;

	int a = 10;
	char c = 'a';
	
	// int *q = (int*)&c;
	std::cout << (int*)&c << std::end;
	// int* p = static_cast<int*>(&c);
}
