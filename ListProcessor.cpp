// ListProcessor.cpp

// Krishna Sai Chemudupati
// 9/21/2017
// Exercise the List class with verbose Node constructor
//   and destructor.

#include "LinkedList.h"


int main()
{
	List cows;
	cout<<"-------------------------------------------------------------------"<<endl;
	cout << "cows list  :  " << cows << endl << endl;
	cout << "The size of the list 'cows' is now: " << cows.sizeOfList() << endl;
    cout << "The sum of the entries in the list 'cow' is now: " << cows.sum() << endl;
	cout<<"-------------------------------------------------------------------"<<endl;
	cows.insertAsFirst(1.23);
	cout << "The size of the list 'cows' is now: " << cows.sizeOfList() << endl;
	cout << "The sum of the entries in the list 'cow' is now: " << cows.sum() << endl;
	cout<<"-------------------------------------------------------------------"<<endl;
	cows.insertAtLast(4.55);
	cows.insertAsFirst(2.34);
	cout << "cows list  :  " << cows << endl << endl;
	cout << "The size of the list 'cows' is now: " << cows.sizeOfList() << endl;
	cout << "The sum of the entries in the list 'cow' is now: " << cows.sum() << endl;
	cout<<"-------------------------------------------------------------------"<<endl;
	cows.removeFirst();
	cows.insertAtLast(6.13);
	cout << "cows list  :  " << cows << endl << endl;
	cout << "The size of the list 'cows' is now: " << cows.sizeOfList() << endl;
	cout << "The sum of the entries in the list 'cow' is now: " << cows.sum() << endl;
    cout<<"-------------------------------------------------------------------"<<endl;
	List horses(cows);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl << endl;
    cout<<"-------------------------------------------------------------------"<<endl;
	horses.removeFirst();
	horses.insertAsFirst(5.67);
	cows.insertAsFirst(6.78);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl << endl;
    cout<<"-------------------------------------------------------------------"<<endl;
	List pigs;
	pigs.insertAtLast(9.87);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;
    cout<<"-------------------------------------------------------------------"<<endl;
	pigs = cows;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;
    cout<<"-------------------------------------------------------------------"<<endl;
	pigs = horses;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;
    cout<<"-------------------------------------------------------------------"<<endl;
	cout << "End of code" << endl;

	return 0;
}
