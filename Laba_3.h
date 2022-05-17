#include"iostream"
#include"time.h"
#include"Windows.h"

using namespace std;


int main()
{
	srand(time(0));
	int* a = new int;
	int* b = new int;

	*a = rand() % 10;
	*b = rand() % 10;
	cout << "cheslo a -->" << *a << endl;
	cout << "Adres -->" << &a << endl;
	cout << "cheslo b -->" << *b << endl;
	cout << "Adres -->" << &b << endl;
	swap(*a, *b);
	cout << "cheslo a -->" << *a << endl;
	
	cout << "cheslo b -->" << *b << endl;
	


}
