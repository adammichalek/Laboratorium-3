#include <iostream>
#include "header3.h"

using namespace std;

int main()
{
	//Widget A ("Gosia");
	//A.ustawnazwe("Jan");
	//A.wypisz();
	
	Widget* W1 = new Widget("W1");
	Widget* W2 = new Widget("W2");
	Widget* W3 = new Widget("W3");
	TextBox* T1 = new TextBox("Tekst1");
	TextBox* T2 = new TextBox("Tekst2");
	Slider* S1 = new Slider(1,2);
	Slider* S2 = new Slider(3,4);
	W1->wypisz(); W2->wypisz(); W3->wypisz(); T1->wypisz(); T2->wypisz(); S1->wypisz(); S2->wypisz();
	cout << endl;

	Widget* tab[7]{W1,W2,W3,T1,T2,S1,S2};
	for (int i = 0; i < 7; i++)
 	{
		tab[i]->wypisz();
	}

	delete W1, W2, W3, T1, T2, S1, S2;
	
	
	PasswordTextBox A;
	PasswordTextBox B('z');

	
	


	return 0;
}