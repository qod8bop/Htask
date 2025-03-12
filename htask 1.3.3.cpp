#include <iostream>
#include <windows.h>


using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "RU");
	
	char sex;
	string ZZ;
	short age;

	cout << "Введите пол: ";
	cin >> sex;
	cout << endl;

	cout << "Введите знак зодиака (С большой буквы, а то всё сломается): ";
	cin >> ZZ;
	cout << endl;

	cout << "Введите ваш возраст: ";
	cin >> age;
	cout << endl;
	cout << endl;

	if ((ZZ == "Козерог") || (ZZ == "Дева") || (ZZ == "Телец")) {
		ZZ = "er";
	}
	else if ((ZZ == "Овен") || (ZZ == "Лев") || (ZZ == "Стрелец")) {
		ZZ = "fr";
	}
	else if ((ZZ == "Рак") || (ZZ == "Скорпион") || (ZZ == "Рыбы")) {
		ZZ = "wt";
	}
	else { ZZ = "ar"; }


	cout << "Ваше предсказание: ";



	//Мужжкой пол
	if ((sex == 'м')||(sex == 'М')) {
		if (ZZ == "er") {
			if (age > 40) {
				cout << "prd10";
			}

			else {
				cout << "Сегодня очень плодотворный день. Можно добиться того, что прежде казалось почти невозможным.";
			}
		}
		
		
		else if (ZZ == "fr") { cout << "СЛАВА ИННОСУ"; }
		
		
		else if (ZZ == "wt"){
			if (age > 40) {
				cout << "prd1";
			}
			else {
				cout << "prd2";
			}
		}
		else if (ZZ == "ar") {
			if (age > 40) {
				cout << "prd3";
			}
			else {
				cout << "prd4";
			}
		}
	}

	//Женжкий пол
	else {
		if (ZZ == "er") {
			if ((age >= 15) && (age <= 30)) {
				cout << " Сегодняшний вечер подходит для общения с друзьями, проведения домашних праздников и импровизированных вечеринок.\n Будет не только весело, но и интересно : найдётся дело, которое увлечёт всех.";
			}

			else {
				cout << "prd5";
			}
		}


		else if (ZZ == "fr") { cout << "СЛАВА ИННОСУ"; }


		else if (ZZ == "wt") {
			if (age > 40) {
				cout << "prd6";
			}
			else {
				cout << "prd7";
			}
		}
		else if (ZZ == "ar") {
			if (age > 40) {
				cout << "prd8";
			}
			else {
				cout << "prd9";
			}
		}
	}

	return 0;
}