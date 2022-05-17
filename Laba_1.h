#include"iostream"
#include"time.h"


using namespace std;


int main()
{
	int* a = new int;
	int* b = new int;
	cout << "vedite 1 znachenie -->" << endl;
	cin >> *a;
	cout << "vedite 2 znachenie -->" << endl;
	cin >> *b;
	if (*a > *b)
	{
		cout << "eto znachenie bolshe -->" << *a << endl;
		cout << "Adres -->" << &a << endl;
	}
	else if (*a < *b)
	{
		cout << "eto znachenie bolshe -->" << *b << endl;
		cout << "Adres -->" << &a << endl;
	}
	else
	{
		cout << " znachenia rovnu " << endl;
	}
	
}

