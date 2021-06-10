#include <iostream>
#include <conio.h>
using namespace std;
template <typename T> void printArray(const T* array, int count)
{
	for (int i = 0; i < count; i++)
		cout << array[i] << " ";
	cout << endl;
}
template <typename T> void Sigh(const T* array, int count)
{
	for (int i = 0; i < count; i++)
	{
		if (array[i] > array[i+1])
		{
			cout << ">\n";
		}
		else if (array[i] > array[i + 1])
		{
			cout << "<\n";
		}
		else
		{
			cout << "=\n";
		}
	}
}
int main()
{
	const int iSIZE = 10, dSIZE = 7, fSIZE = 10, cSIZE = 5;
	

	int iArray[iSIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	double dArray[dSIZE] = { 1.2345,2.234,3.57,4.67876,5.346,6.1545,7.7682 };
	float fArray[fSIZE] = {
   1.34f,2.37f,3.23f,4.8f,5.879f,6.345f,73.434f,8.82f,9.33f,10.4f };
	char cArray[cSIZE] = { "MARS" };
	cout << "\n\t Використання шаблонiв функцiй:\n";
	cout << "\n\tМасив типу int:\n\t";

	printArray<int>(iArray, iSIZE);
	cout << "\n\tМасив типу double:\n\t";
	printArray<double>(dArray, dSIZE);
	cout << "\n\tМасив типу float:\n\t";
	printArray<float>(fArray, fSIZE);
	cout << "\n\tМасив типу char:\n\t";
	printArray<char>(cArray, cSIZE);
	
	Sigh<int>(iArray, iSIZE);
	Sigh<double>(dArray, dSIZE);
	Sigh<float>(fArray, fSIZE);
	Sigh<char>(cArray, cSIZE);
	system("pause");
	return 0;
}
