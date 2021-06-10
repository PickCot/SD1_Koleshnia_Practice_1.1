#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    char s[100];
    double d = 100.234;

    setlocale(0, "ukr");

    std::cout << endl << d << endl;;

    sprintf(s, "\n Рядок - %lf", d);

    strcat_s(s, " - це рядок, отриманий з дійсного числа. \n");

    cout << s << endl;

    std::string pi = "pi is " + to_string(3.1415926);
    std::string perfect = to_string(1 + 2 + 4 + 7 + 14) + " is a perfect number";
    std::cout << pi << '\n';
    std::cout << perfect << '\n';
/*
https://dist1.krok.edu.ua/pluginfile.php/76473/mod_resource/content/1/Lek12-fstreams-ukr.pdf


    оstringstream
        Використовуються функції
        explicit ostringstream(ios::openmode mode = ios::out); // за замовчуванням з порожнім рядком
    explicit ostringstream(const string & buf, ios::openmode mode = ios::out);
    // з ініціалізацією рядка
    string str()const; // Get контест
    void str(const string & str); // Set контекст
    Приклад
        // конструктор вихідного рядка stream (buffer) – потрібно підключити header <sstream>
        ostringstream sout;
    // Запис в string буфер
    sout << "apple" << endl;
    sout << "orange" << endl;
    sout << "banana" << endl;
    // Отримати контест
    cout << sout.str() << endl;

    istringstream
        explicit istringstream(ios::openmode mode = ios::in); // за замовчуванням з порожнім рядком
    explicit istringstream(const string & buf,
        ios::openmode mode = ios::in); // з початковим рядком
    Наприклад
        // створює вхідний рядок потоку (буфер) – потрібен заголовок <sstream>
        istringstream sin("123 12.34 hello");
    // Читаємо з буфера
    int i;
    double d;
    string s;
    sin >> i >> d >> s;
    cout << i << "," << d << "," << s << endl;

    */
    return 0;
}