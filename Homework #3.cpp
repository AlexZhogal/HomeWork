#include<iostream> // Подключает библиотеку iostream
#include<fstream> // Подключает библиотеку fstream
#include<string> // Подключает библиотеку string
#include<cmath> // Подключает библиотеку cmath
using namespace std; // Использует пространство имен std


void task3_1() {
    float S,p,n;
    cin >> S >> p >> n;
    r = p/100;
    m = ((S * r) * pow(1 + r , n) )/ (12 * (pow(1 + r, n) - 1));
    cout << "m = " << m; 
}

void task3_2(){
    float p, S, m, n;
    for (i = 0, i < 100, i +=1){
        p = i;
        r = p / 100;
        m_potential = ((S * r) * pow(1 + r , n) )/ (12 * (pow(1 + r, n) - 1));
        endl;
        if (m_potential = m){
            cout << i;
            break;
        }
    }   
}


void task3_3() // Объявляет функцю main
{
	setlocale(0,""); // Дает возможность использовать русские символы
	ofstream fout; // Cоздает объект fout класса ofstream
	fout.open("text_files_for_problem_3/text_file_1.txt"); // Открывает файл из директории text_files_for_problem_3 c названием text_file_1.txt
	fout<<"Содержимое файла"; // Выводит в файл "Содержимое файла"
	fout.close(); // Закрывает запись в файл
	ifstream fin; // Cоздает объект fin класса ifstream
	fin.open("text_files_for_problem_3/text_file_1.txt"); // Открывает файл из директории text_files_for_problem_3 c названием text_file_1.txt
	string s; // Инициализирует строку s
	while(!fin.eof()) // Пока файл не кончился
	{
		fin>>s; // Заполняет сроку с из файла
		cout<<s<<' '; // Выводит в консоль s и ' '
	}
	fin.close();// Закрывает чтение из файла




bool check(string s) // Создает логическую функцию check, которая принимает на вход строку s
{
	bool f1 = true, f2 = true; // Инициализирует логические переменные f1 и f2 со значениями true и true соответственно
	for(int i = 0; i < s.length(); i++) // Запускает цикл со счетчиком i от 0 до s.length() по правилу i++
		if(s[i] == '.' && f2) // Если s[i] == '.' и f2
			f2 = false; // Присваивает переменной f2 значение false
		else if(s[i] == '.') // Иначе если s[i] == '.'
			f1 = false; // Присваивает переенной f1 значение false
		else if(s[i]>'9' || s[i]<'0') // Иначе если s[i]>'9' или s[i]<'0'
			f1 = false; // Присваивает переменной f1 значение false
	return f1; // Возвращает значение переменной f1
}

void task3_4() // Объявляет функцию
{
	ifstream fin; // Cоздает объект fin класса ifstream
	fin.open("text_files_for_problem_4/text_file_1.txt"); // Открывает файл из директории text_files_for_problem_3 c названием text_file_1.txt
	string s; // Инициализирует строку s
	while(!fin.eof()) // Пока файл не кончился
	{
		fin>>s; // Заполняет сроку s из файла
		if(check(s)) // Если в s число
			cout<<s<<' '; // Выводит в консоль s и ' '
	}
}



void task3_5() // Объявляет функцю 
{
	ifstream fin; // Cоздает объект fin класса ifstream
	fin.open("text_files_for_problem_4/text_file_1.txt"); // Открывает файл из директории text_files_for_problem_3 c названием text_file_1.txt
	string s; // Инициализирует строку s
	while(!fin.eof()) // Пока файл не кончился
	{
		fin>>s; // Заполняет сроку s из файла
		if(check(s)) // Если в s число
			cout<<s<<' '; // Выводит в консоль s и ' '
	}
}