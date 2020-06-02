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
	{ 1, "��������� ������� ���������� "      , true, true, true},
	{ 2, "������ ������ �����������    "        , true, true, true},
	{ 3, "������� ������ ���������"      , true, true, true},
	{ 4, "��������� ����� ���������", false, true, false},
	{ 5, "������� ���� ����������   "    , false, true, true},
	{ 6, "������ ����� ��������    "        , true, false, true},
	{ 7, "������ ����� ��������"    , true, true, true},
	{ 8, "������� ������� �����������"   , true, true, true},
	{ 9, "���������� ����� ����������"  , true, true, true},
	{10, "����� ��� ���������"      , true, true, true},
	{11, "��������� ����� ��������   "         , true, true, false},
	{12, "�������� ������� ����������"   , true, false, false},
	{13, "�������� �������� ����������" , true, true, true},
	{14, "����������� �������� �������" , true, true, true},
	{15, "������� ������� ������������", false, true, true},
	{16, "�������� ������ ����������", false, true, false},
	{17, "������� ���� �����������"   , true, true, true},
	{18, "�������� ���� ���������"      , true, true, true},
	{19, "������ ������ ���������"      , true, true, true},
	{20, "������� ����� ����������"     , false, true, true},
	{21, "������� ����� �����������"  , false, false, true},
	{22, "������ ������ ��������", true, false, false},
	{23, "����� ������ ����������" , true, true, true},
	{24, "������� ������� ��������" , false, true, true},
	{25, "������ ������� �����������    "        , true, true, true}
	};
    cout << "№" << "\tName                        \tMath\tPhysics\tEnglish\n";
	for (i = 0; i < n; i++)
		cout << a[i].number << "\t" << a[i].name << "\t" << a[i].math << "\t" << a[i].physic << "\t" << a[i].english << "\n";
	cout << "-------------------------------------" << endl;
	cout << "Pupils who were unable to complete more than one subject:\n";
	cout << "№" << "\tName\tMath\tPhysics\tEnglish\n";
	for (i = 0; i < n; i++)
		if (!((int)a[i].math + (int)a[i].physic + (int)a[i].english > 1))
			cout << a[i].number << "\t" << a[i].name << "\t" << a[i].math << "\t" << a[i].physic << "\t" << a[i].english << "\n";
    cout << "-------------------------------------" << endl;
    return 0;
}


