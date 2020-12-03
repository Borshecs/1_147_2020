using namespace std;
#include <iostream>
#include <string>






class FilmSelect
{
private:

	int year;
	string name;
	string famousactor;
	double raiting1;
	double raiting2;
	string selectfilm;


public:
	FilmSelect(int Y, string N, string F, double R1, double R2)
	{

		year = Y;
		name = N;
		famousactor = F;
		raiting1 = R1;
		raiting2 = R2;
	}


	void message()
	{
		cout << "Enter name of film: Tenet, Bloodshot, Code8." << "\n";

	}



	void print()
	{
		cout << "You entered" << "\n";
		
		cout << "Name: " << name <<"\n" << "year: " << year << "\n" << "famous actors: " << famousactor << "\n" << "raiting on kinoposk: " << raiting1 << "\n" << "raiting on ivi: " << raiting2 << endl;

		cout << "\n" <<"the movie is playing";
	}





};


/*class FilmTenet
{
public:
	int year = 2020;
	string name = "Tonet";
	string famousactor = "John David Washington, Robert Pattinson, Elizabeth Debicki";
	double raiting1 = 7.9;
	double raiting2 = 8.1;

	void print()
	{
		cout << "name film: " << name << "\n" << "year: " << year << "\n" << "raiting on kinopoisk: " << raiting1 << "\n" << "raiting on ivi" << raiting2 << endl;

	}

};

class FilmBloodshot
{
private:
	int year = 2020;
	string name = "Bloodshot";
	string famousactor = "Vin Diesel, Guy Pearce, Lamorne Morris";
	double raiting1 = 5.6;
	double raiting2 = 7.5;

public:
	FilmBloodshot()
	{
		year;
		name;
		famousactor;
		raiting1;
		raiting2;

	}
	void print()
	{
		cout << "name film: " << name << "\n" << "year: " << year << "\n" << "raiting on kinopoisk: " << raiting1 << "\n" << "raiting on ivi " << raiting2 << endl;
	}

}; */

int main()
{
	string selectfilm;

	setlocale(LC_ALL, "rus");
	FilmSelect choose{ 0, "","", 0, 0 };
	FilmSelect tenet{ 2020, "Tenet ","John David Washington, Robert Pattinson, Elizabeth Debicki ", 7.9, 8.1 };
	FilmSelect bloodshot{ 2020, "Bloodshot ", "Vin Diesel, Guy Pearce, Lamorne Morris ", 5.6, 7.5 };
	FilmSelect code8{ 2019, "Code 8 ", "Kari Matchett, Robbie Amell, Lawrence Bayne ", 6.1, 6.7 };

	FilmSelect get(choose);
	get.message();
	

	
	
	cin >> selectfilm;
	if (selectfilm == "Tenet" || selectfilm == "tenet")
	{
		
		tenet.print();

	}

	else if (selectfilm == "Bloodshot" || selectfilm == "bloodshot")
	{
		bloodshot.print();

	}

	else if (selectfilm == "Code8" || selectfilm == "code8")
	{
		code8.print();

	}















	/*
	int c;

	cout << "Choose a movie" << "\n";
	cout << "write 1 if the movie is Tenet or 2 if the movie is Bloodshot" << "\n";



	cin >> c;
	if (c == 1)
	{
		FilmTenet choose1;
		choose1.print();
	}
	else if (c == 2)
	{
		FilmBloodshot choose2;
		choose2.print();
	}

	else
	{
		cout << "Error";
	}

	return 0; */
}
