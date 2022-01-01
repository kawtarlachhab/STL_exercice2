// STL_Exercice2.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <string>
#include <iterator>
#include <list>
#include <algorithm>
#include <vector>
using namespace std;
/*string capitalizeString(string s)
{

	transform(s.begin(), s.end(), s.begin(),
		[](unsigned char c) { return toupper(c); });
	return s;
}*/
void replace(string& s)
{
	int i;
	for (i= 0; i <s.size(); i++)
	{
		if (s.at(i) == 'a' || s.at(i) == 'e' || s.at(i) == 'i' || s.at(i) == 'o' || s.at(i) == 'u' || s.at(i) == 'y') {
			s.replace(i,i, "*");
		}
	}
}
void capitaliser(string& s)
{
	std::transform(s.begin(), s.end(), s.begin(), std::toupper);
}
/*
list is sequence container that allow  non-contiguous memory allocation
list is faster compared to others (vector deque )
 */
int main()
{
	///list 
	list <string>  Mesmots;
	Mesmots.push_back("c++");
	Mesmots.push_back("java");
	Mesmots.push_back("paython");
	Mesmots.push_back("php");

	list <string>  list1;
	list <string>  list2;
	list1.resize(Mesmots.size());
	list2.resize(Mesmots.size());
	// Affichage des éléments contenus dans la liste
	list<string>::iterator it1,it2;
	for (it1 = Mesmots.begin(); it1 != Mesmots.end(); it1++)
	{
		cout << *it1 << endl;
	}
	/*Remplacer voyales par */
	/*transform(Mesmots.begin(), Mesmots.end(), list1.begin(), [](string& s) {  replace(s); return s; });
	for (it1 = Mesmots.begin(); it1 != Mesmots.end(); it1++)
	{
		cout << *it1 << endl;
	}*/

	//Transformer la phrase en Majiscule
	transform(Mesmots.begin(), Mesmots.end(), list2.begin(), [](string& s) {  capitaliser(s); return s; });
	for (auto val : list2)
	{
		cout <<" " << val;
	}
}
