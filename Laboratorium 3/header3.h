#pragma once
#include <iostream>

using namespace std;

class Widget {

private:
	static int licznik;
	int id;

protected:
	string napis;

public:
	Widget() :id(licznik)
	{
		napis = "SAMPLE TEXT";
		licznik++;
		//cout << "Widget, domniemany " << endl;
	}
	Widget(const string& dany)
	{
		napis = dany;
		id = licznik;
		licznik++;
		//cout << "Widget, z argumentem" << endl;
	}
	~Widget()
	{
		licznik--;
		//cout << "Widget, destruktor" << endl;
	}

	int pobierzID();
	string pobierznazwe();
	void ustawnazwe(string dana);
	void wypisz();

};

int Widget::pobierzID()
{
	return id;
}

string Widget::pobierznazwe()
{
	return napis;
}

void Widget::ustawnazwe(string dana)
{
	napis = dana;
}

void Widget::wypisz()
{
	cout << "Widget " << id << " " << napis << endl;
}

int Widget::licznik = 1;


class TextBox : public Widget
{
protected:
	string tekst;
public:
	TextBox()
	{
		tekst = napis;
		//cout << "textBox, domniemany" << endl;
	}
	TextBox(const string& t)
	{
		tekst = t;
		//cout << "textBox, z argumentem" << endl;
	}
	~TextBox()
	{
		//cout << "TextBox destruktor" << endl;
	}
	void wypisz();
};

void TextBox::wypisz()
{
	this->Widget::wypisz();
	cout << "tekst TB: " << tekst << endl;
}

class Slider : public Widget
{
protected:        //wybrano protected, gdy¿ dostêp do nich móg³by mieæ znaczenie przy rozbudowywaniu programu
	int zakres;
	int wartosc;
public:
	Slider()
	{
		zakres = 0;
		wartosc = 0;
		//cout << "Slider, konstr. domniemany" << endl;
	}
	Slider(int z, int w)
	{
		zakres = z;
		wartosc = w;
		//cout << "Slider, konstr. z arg" << endl;
	}
	~Slider()
	{
		//cout << "destruktor Slider"<< endl;
	}

	void wypisz();
	void pobierzWartosc(int wa);
	void pobierzZakres(int za);
	int ZwrocZakres();
	int ZwrocWartosc();
};

void Slider::wypisz()
{
	this->Widget::wypisz();
	cout << "zakres SL: " << zakres << ", wartosc: " << wartosc << endl;
}


void Slider::pobierzWartosc(int wa)
{
	wartosc = wa;
}

void Slider::pobierzZakres(int za)
{
	zakres = za;
}

int Slider::ZwrocZakres()
{
	return zakres;
}
int Slider::ZwrocWartosc()
{
	return wartosc;
}

class PasswordTextBox: public TextBox
{
private:
	char znakMaska;
public:
	PasswordTextBox()
	{
		znakMaska = 'x';
		cout << "PasswordTextBox domniemany" << endl;
	}
	PasswordTextBox(char c)
	{
		znakMaska = c;
		cout << "PasswordTextBox z argumentem" << endl;
	}
	~PasswordTextBox()
	{
		cout << "PasswordTextBox destruktor" << endl;
	}

};