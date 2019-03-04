#include "MusicDB.h"
#include "song.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;
void help() {
//list options user can input
	cout << "Type list and press enter to list stored songs.\n"
	"Type save and press enter to save the songs to the database.\n"
	"Type add and press enter to add stored songs.\n"
	"Type exit and press enter to exit the program.\n" << endl;
}

void list() {
//list songs in the database
	ofstream MusicDatabase;
	MusicDatabase.open("MusicDatabase.txt", ios::out | ios::app);
	string line;

	ofstream MusicDatabase("MusicDatabase.txt");
	if (MusicDatabase.is_open())
	{
		while (true)
		{
			getline(cin, line);
			cout << line << '\n';
		}
		MusicDatabase.close();
	}

	else cout << "Unable to open file";

}

void save() {
//saves songs to the database
	ofstream MusicDataBase;
	MusicDataBase.open("MusicDataBase.txt");
	MusicDataBase << "Tutorial.\n";
	MusicDataBase.close();
	/*return 0*/;
	}

string add() {
//add songs to DB

	cout << "Type the song's name: " << endl;

}

void exit() {
//closes the program
	cout << "Closing the program." << endl;
}