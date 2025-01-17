#include <iostream>
#include <string>
#include "ArrayBag.h"
//@author: Will Widener

using namespace std;


void bagTester(ArrayBag<int>& bag);

int main()
{
	ArrayBag<int> bag;
	int items[] = {1, 33, 6, 9, 2, 65, 4, 29, 5, 8, 39, 88, 7, 25, 51, 3, 99, 14, 11, 10};
	
	
	cout << "Adding positive integers to the bag: " << endl;
	for (int i = 0; i < 20; i++)
	{
		bag.add(items[i]);
	}  // end for
	
	
	bagTester(bag);
	
	bag.doSomething();
	bag.clear();
	bag.isEmpty();

   return 0;
   
}  // end main


void bagTester(ArrayBag<int>& bag)
{
	cout << "The bag is not empty; isEmpty: returns " << bag.isEmpty() << endl;

	cout << "About to clear the bag, ";
	bag.clear();
   
	cout << "isEmpty: returns " << bag.isEmpty() << endl;
}  // end bagTester



