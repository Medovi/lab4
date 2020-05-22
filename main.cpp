#include "Stack.h"

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int menu, menu1, size, celoe = 0;
	float veschestv = 0;
	char symbol =0;

	while (1){
		cout << "Vvedite 1 dlya celogo steka;" << endl;
		cout << "Vvedite 2 dlya veschestvennogo steka;" << endl;
		cout << "Vvedite 3 dlya symbolnogo steka;" << endl;
		cout << "Vvedite 4 dlya vihoda;" << endl;
		cout << "Vvedite:";
		cin >> menu;
		if((menu >= 5)||(menu <= 0))
		cout << "Please, vvedite chislo ot 1 do 4!"<< endl;
		cout << endl;
		switch (menu) {
		case 1:
		{
			cout << "Razmer: ";
			cin >> size;
			Stack<int> p(size);
			if (size <= 0)
            size = 5;
            else
            size = size;
			cout << "Vi vveli stek s razmerom: " << size << endl << endl;
			p.Print();
			while (1) {
				cout << "Vvedite 1 dlya vvoda odnogo elementa;" << endl;
				cout << "Vvedite 2 dlya viborki iz steka;" << endl;
				cout << "Vvedite 3 dlya polucheniya znacheniya bez viborki;" << endl;
				cout << "Vvedite 4 dlya proverki elementov;" << endl;
				cout << "Vvedite 5 dlya togo, ctobi uznat razmer steka;" << endl;
				cout << "Vvedite 6 dlya otchistki;" << endl;
				cout << "Vvedite 7 dlya vihoda;" << endl;
				cout << "vvedite:";
                cin >> menu1;
                if((menu1 >= 8)||(menu1 <= 0))
                cout << "Please, vvedite chislo ot 1 do 7!"<< endl;
                cout << endl;
				switch (menu1){
				case 1:
					cout << "Vvedite chislo:";
					cin >> celoe;
					p.Push(celoe);
					cout << endl;
					break;
				case 2:
					cout << "Viborka:" << endl;
					p.Pop();
					cout << endl;
					break;
				case 3:
					cout << "Verhniy element: " << p.Top() << endl;
					break;
				case 4:
					if (p.isEmpty())
                    cout << "Pustoy stek." << endl;
					else
                    cout << "Stek ne pustoy.";
					cout << endl;
					break;
				case 5:
					cout << "Razmer steka: " << p.Size() << endl;
					break;
				case 6:
					cout << "Ochischaem stek" << endl;
					p.Clear();
					cout << endl;
					break;
				case 7:
					cout << "Zakritie." << endl;
					return 0;
					break;
				}
				cout << "Stek: " << endl << endl;
				p.Print();
			}
		}
			break;
		case 2:
		{
			cout << "Razmer: ";
			cin >> size;
			Stack<float> p(size);
			if (size <= 0)
            size = 5;
            else
            size = size;
			cout << "Vi vveli stek s razmerom: " << size << endl << endl;
			p.Print();
			while (1) {
				cout << "Vvedite 1 dlya vvoda odnogo elementa;" << endl;
				cout << "Vvedite 2 dlya viborki iz steka;" << endl;
				cout << "Vvedite 3 dlya polucheniya znacheniya bez viborki;" << endl;
				cout << "Vvedite 4 dlya proverki elementov;" << endl;
				cout << "Vvedite 5 dlya togo, ctobi uznat razmer steka;" << endl;
				cout << "Vvedite 6 dlya otchistki;" << endl;
				cout << "Vvedite 7 dlya vihoda;" << endl;
				cout << "vvedite:";
                cin >> menu1;
                if((menu1 >= 8)||(menu1 <= 0))
                cout << "Please, vvedite chislo ot 1 do 7!"<< endl;
                cout << endl;
				switch (menu1) {
				case 1:
					cout << "Vvedite veschestvennoe chislo: ";
					cin >> veschestv;
					p.Push(veschestv);
					cout << endl;
					break;
				case 2:
					cout << "Viborka:" << endl;
					p.Pop();
					cout << endl;
					break;
				case 3:
					cout << "Verhniy element: " << p.Top() << endl;
					break;
				case 4:
					if (p.isEmpty())
                    cout << "Pustoy stek." << endl;
					else
                    cout << "Stek ne pustoy.";
					cout << endl;
					break;
				case 5:
					cout << "Razmer steka: " << p.Size() << endl;
					break;
				case 6:
					cout << "Ochischaem stek" << endl;
					p.Clear();
					cout << endl;
					break;
				case 7:
					cout << "Zakritie." << endl;
					return 0;
					break;
				}
				cout << "Stek: " << endl << endl;
				p.Print();
			}
		}
			break;
		case 3:
		{
			cout << "Razmer: ";
			cin >> size;
			Stack<char> p(size);
			if (size <= 0)
            size = 5;
            else
            size = size;
			cout << "Vi vveli stek s razmerom: " << size << endl << endl;
			p.Print();
			while (1) {
				cout << "Vvedite 1 dlya vvoda odnogo elementa;" << endl;
				cout << "Vvedite 2 dlya viborki iz steka;" << endl;
				cout << "Vvedite 3 dlya polucheniya znacheniya bez viborki;" << endl;
				cout << "Vvedite 4 dlya proverki elementov;" << endl;
				cout << "Vvedite 5 dlya togo, ctobi uznat razmer steka;" << endl;
				cout << "Vvedite 6 dlya otchistki;" << endl;
				cout << "Vvedite 7 dlya vihoda;" << endl;
				cout << "vvedite:";
                cin >> menu1;
                if((menu1 >= 8)||(menu1 <= 0))
                cout << "Please, vvedite chislo ot 1 do 7!"<< endl;
                cout << endl;
				switch (menu1){
				case 1:
					cout << "Vvedite symbol: ";
					cin >> symbol;
					p.Push(symbol);
					cout << endl;
					break;
				case 2:
					cout << "Viborka:" << endl;
					p.Pop();
					cout << endl;
					break;
				case 3:
					cout << "Verhniy element: " << p.Top() << endl;
					break;
				case 4:
					if (p.isEmpty())
                    cout << "Pustoy stek." << endl;
					else
                    cout << "Stek ne pustoy.";
					cout << endl;
					break;
				case 5:
					cout << "Razmer steka: " << p.Size() << endl;
					break;
				case 6:
					cout << "Ochischaem stek" << endl;
					p.Clear();
					cout << endl;
					break;
				case 7:
					cout << "Zakritie." << endl;
					return 0;
					break;
				}
				cout << "Stek: " << endl << endl;
				p.Print();
			}
		}
		break;
		case 4:
			cout << "Zakritie." << endl;
			return 0;
		break;
		}
	}
	return 0;
}
