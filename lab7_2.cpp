#include <iostream>
using namespace std;

struct student
{
	int number;
	const char* name;
	bool math;
	bool physic;
	bool english; 
};

int main()
{
  setlocale(LC_ALL, "Rus");
	const int n = 25;
    int i;
	student a[n] = { 
	{ 1, "Рачинский Филарет Васильевич "      , true, true, true},
	{ 2, "Шишков Мариан Емельянович    "        , true, true, true},
	{ 3, "Сипягин Степан Ермилович"      , true, true, true},
	{ 4, "Гродецкий Эразм Антипович", false, true, false},
	{ 5, "Каменев Фока Теодорович   "    , false, true, true},
	{ 6, "Кремер Лукий Ефимович    "        , true, false, true},
	{ 7, "Кремер Лукий Ефимович"    , true, true, true},
	{ 8, "Лодыгин Анаклет Корнилиевич"   , true, true, true},
	{ 9, "Ивановский Тихон Гвидонович"  , true, true, true},
	{10, "Мацко Иов Анфимович"      , true, true, true},
	{11, "Гендриков Фотин Евсеевич   "         , true, true, false},
	{12, "Лашкевич Ахрамей Аврелиевич"   , true, false, false},
	{13, "Горюшкин Ферапонт Лукьянович" , true, true, true},
	{14, "Загоровский Поликарп Кузьмич" , true, true, true},
	{15, "Бурунов Боголеп Валентинович", false, true, true},
	{16, "Левицкий Моисей Артемиевич", false, true, false},
	{17, "Апрелев Егор Анатольевич"   , true, true, true},
	{18, "Захарчук Адам Тимурович"      , true, true, true},
	{19, "Пашков Горазд Андреевич"      , true, true, true},
	{20, "Мякинин Приск Ларионович"     , false, true, true},
	{21, "Шевелев Ренат Артемонович"  , false, false, true},
	{22, "Краузе Ларион Фролович", true, false, false},
	{23, "Басов Адриан Софронович" , true, true, true},
	{24, "Путилов Иерофей Игоревич" , false, true, true},
	{25, "Шевчук Северин Евсевиевич°    "        , true, true, true}
	};
    cout << "в„–" << "\tName                        \tMath\tPhysics\tEnglish\n";
	for (i = 0; i < n; i++)
		cout << a[i].number << "\t" << a[i].name << "\t" << a[i].math << "\t" << a[i].physic << "\t" << a[i].english << "\n";
	cout << "-------------------------------------" << endl;
	cout << "Pupils who were unable to complete more than one subject:\n";
	cout << "в„–" << "\tName\tMath\tPhysics\tEnglish\n";
	for (i = 0; i < n; i++)
		if (!((int)a[i].math + (int)a[i].physic + (int)a[i].english > 1))
			cout << a[i].number << "\t" << a[i].name << "\t" << a[i].math << "\t" << a[i].physic << "\t" << a[i].english << "\n";
    cout << "-------------------------------------" << endl;
    return 0;
}


