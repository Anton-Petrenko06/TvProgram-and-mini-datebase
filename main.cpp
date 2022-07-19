#include <Windows.h>
#include <string>
#include <fstream>
#include "B1.h"
#include "Administration.h"
#include "Frames.h"
#include "Engineer.h"
#include "Worker.h"
#include "TvProgram.h"
#include "Education.h"
#include "Children.h"
#include "Show.h"
#include "Movie.h"
#include "Time.h"
using namespace std;
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(0, "");
	/*D3 B(1, 2, 3, 4, 5);
	B.showInfoD3();*/
	/*Frames A("Антон");
	Worker B("Дима", "Электрик", "B22");
	Engineer C("Денис", "Бакалавр", "Конструкторский отдел");
	Administration D("Владислав", "Менеджер");
	A.showInfo();
	cout << "-------------------------------------------------\n";
	B.showInfo();
	cout << "-------------------------------------------------\n";
	C.showInfo();
	cout << "-------------------------------------------------\n";
	D.showInfo();*/
	TvProgram A("Animal Planet", Time_(17, 49, 12,"utc") );
	Children B("Animal Planet", Time_(17, 49, 12, "utc"), 6, 15);
	A.showInfo();
	cout << "---------------------------------\n";
	B.showInfoCl();
	cout << B.toStringCl();
	/*Show B("Animal Planet", Time_(17, 49, 12, "utc"),"Leopard and his life");
	cout << "----------------------------------------------------------\n";
	B.showInfoSh();*/
	return 0;
}