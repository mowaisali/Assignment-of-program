#include <iostream>
using namespace std;
// give grade to student
int main (){
	int score;
	cout<< "enter score"<<endl;
	cin >> score;
	if (score >= 90){
		cout << 'A';
	}else if(score>=80){
		cout << 'B';
	}else if ( score>=70){
		cout << 'C';
	}else if (score>=60){
		cout << 'D';
	}else {
		cout << 'F';
	}
	return 0;
}