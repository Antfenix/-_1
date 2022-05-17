#include"iostream"
#include"time.h"
#include"Windows.h"

using namespace std;


int main()
{
	
	int switch_on;
	int* a = new int;
	int* b = new int;
	cout << "vedite 1 znachenie -->" << endl;
	cin >> *a;
	cout << "Adres -->" << &a << endl;
	cout << "vedite 2 znachenie -->" << endl;
	cin >> *b;
	cout << "Adres -->" << &b << endl;
	cout << "#----------------------#" << endl;
	cout << "|          +           |" << endl;
	cout << "|          -           |" << endl;
	cout << "|          *           |" << endl;
	cout << "|          /           |" << endl;
	cout << "#----------------------#" << endl;
	cin >> switch_on;
	switch (switch_on)
	{
	case 1:
	{


		cout << "result " << *a + *b << endl;


	}
	break;
	case 2:
	{

		cout << "result " << *a - *b << endl;

	}
	break;
	case 3:
	{

		cout << "result " << *a * *b << endl;

	}
	break;
	case 4:
	{

		cout << "result " << *a / *b << endl;

	}
	default:
		break;
	}

	

}
