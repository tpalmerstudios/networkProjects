#include <iostream>
#include <string>
#include "Person.h"

int newPerson ();
int openPerson (int);
int editPerson (Person, int);
int deletePerson (int);
int savePerson (Person, int);
int callsSet ();

std::string filename = "logfile.txt";

int main ()
{
		/*Person johny;
		johny.setID (filename);
		float exampleID = johny.getID ();*/
		callsSet ();
		return 0;
}
int callsSet ()
{
		Person johny;
		johny.setID (filename);
		float exampleID = johny.getID ();
		std::cout << exampleID << std::endl;
		return 0;
}
int newPerson ()
{
		Person chosen;
		int cursor = 0;
		// Generate an ID based on previous last item
		// Ask questions for each item
		// Place cursor at end
		bool failure = savePerson (chosen, cursor);
		return !failure;
}

int openPerson (int openID)
{
		Person search;
		int cursor= 0;
		// Look through file
		// retrieve data
		// place in class
		bool failure = editPerson (search, cursor);
		return !failure;
}

int editPerson (Person chosen, int cursor)
{
		// Load a piece of data
		// Get input to change or skip
		// Remove all from start of this data to start of next
		//Place cursor in file correctly
		// Save entire Person to file at once
		bool failure = savePerson (chosen, cursor);
		return !failure;
}

int deletePerson (int deleteID)
{
		// open file
		// find id in file
		// find next id as ending point
		// delete all between those cursors
		return 0;
}

int savePerson (Person toSave, int cursor)
{
		// Open file
		// Place cursor
		// Place each piece of data in file

		return 0;
}
