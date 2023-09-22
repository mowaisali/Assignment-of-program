#include<iostream>
#include<cmath>
using namespace std;
// character is vowel or consonant
 int main()
 {
 	char alphabet;
 	cout << "enter alphabet";
 	cin >> alphabet;
 	alphabet = tolower(alphabet);
 	
 	switch (alphabet){
 		case 'a':
 		case 'e':
 	    case 'i':
 	    case 'o':
 	    case 'u':	
 	cout << "alphabet is vowel";
 	break;
 	default :
 	cout << "alphabet is consonant";
	 }
 	
 	return 0;
 	
 }
