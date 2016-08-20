//Example 4
//
#include <iostream>

int main()
{
	//a = 18; b = 80; tmp = 0
	int a = 18;
	int b = 80;
	int tmp = 0;
	
	//a = 18 ; b = 80; tmp = 80
	tmp = b;
	
	//a = 18; b = 18; tmp = 80
	b = a;
	
	//a = 80; b = 18; tmp = 80
	a = tmp;
	
	//this is an alternative to printf
	std::cout << "After" << std::endl;
	//printf (" After \n");
	printf ("a == %i", a );
	printf ("b == %i", b );
	printf ("tmp == %i\n\n\n", tmp);
	//correct answer would be a = 80 and b = 18

	int i = 0;
	float f = 0;
	char ch = 'a';
	std::cin >> i >> ch >> f;
	std::cout << "i:  " << "\nch: " << ch << "\nf:  " << f << std::endl;



	system ("pause");
	return 0;

}


//