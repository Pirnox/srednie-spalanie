#include <iostream>

/*Program wylicza ˜rednie spalanie na 100 kilometrow */
using namespace std;

int main()
{
	program:
	float litry, dystans, spalanie;
	cout << "Program liczy ˜rednie spalanie paliwa" << endl << endl;
	cout << "Ile kilometr¢w przejechano? ";
	cin >> dystans;
	if (dystans <= 0 )
	{
		cout << "Niepoprawne dane!!!" << endl;
		system("pause");
		system("cls");
		goto program;
	}
	if (dystans >=10000)
	{
		cout << "Niepoprawne dane!!!" << endl;
		system("pause");
		system("cls");
		goto program;
	}
	else
	{
		program2:
		cout << "Ile paliwa zatankowano? ";
		cin >> litry;
		if (litry <= 0)
		{
			cout << "Niepoprawne dane!!!" << endl;
			system("pause");
			system("cls");
			goto program2;
		}
		if (litry >= 1000)
		{
			cout << "Niepoprawne dane!!!" << endl;
			system("pause");
			system("cls");
			goto program2;
		}
		else
		{
			spalanie = litry / dystans * 100;
			cout << "Spalanie wynosi " << spalanie << " litrow na 100 km" << endl;
		}
	}
	program3:
	cout << "Czy chcesz policzy† jeszcze raz ? (1=Tak 2=Nie) " << endl;
	int decyzja;
	cin >> decyzja;
	if (decyzja == 1)
	{
		system("cls");
		goto program;
	}
	if(decyzja == 2)
	{
		system("pause");
	}
	else
	{
		cout << "Niepoprawny wyb¢r" << endl;
		system("pause");
		system("cls");
		goto program3;
	}
	
	



}