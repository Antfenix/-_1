#include"iostream"
#include"time.h"


using namespace std;


int main()
{
	
	int* a = new int;

	cout << "vedite 1 znachenie -->" << endl;
	cin >> *a;

	if (*a < 0)
	{
		cout << "eto znachenie Minus - " << *a << endl;
		cout << "Adres -->" << &a << endl;
	}
	else
	{
		cout << "eto znachenie Plus  - " << *a << endl;
		cout << "Adres -->" << &a << endl;
	}
	
}

