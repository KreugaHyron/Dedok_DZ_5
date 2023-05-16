#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    //Task_1
    double filmSizeinGB{};
    double SpeedofInternetMbps{};

    cout << "Введите размер фильма в гигабайтах: ";
    cin >> filmSizeinGB;
    cout << "Введите скорость интеренета в мегабитах в секунду: ";
    cin >> SpeedofInternetMbps;

    double filmSizeinMb = filmSizeinGB * 1024;

    double downloadTimeinSec = filmSizeinGB / SpeedofInternetMbps;

    int hours = static_cast<int>(downloadTimeinSec / 3600);
    int minutes = static_cast<int>((downloadTimeinSec - hours * 3600) / 60);
    int seconds = static_cast<int>(downloadTimeinSec - hours * 3600 - minutes * 60);

    cout << "Время скачивания: " << hours << " часов, " << minutes << " минут, " << seconds << " секунд." << "\n";
    cout << "\n";

    //Task_2
    double flashDriveSizeGB;
    const int filmSizeMB = 760;

    cout << "Введите объем флешки в гигабайтах: ";
    cin >> flashDriveSizeGB;
    double flashDriveSizeMB = flashDriveSizeGB * 1024;

    int numFilms = static_cast<int>(flashDriveSizeMB / filmSizeMB);

    cout << "На флешку ёмкостью в " << flashDriveSizeGB << " гигабайт поместится " << numFilms << " фильма(ов) размером " << filmSizeMB << " мегабайт." << "\n";
    cout << "\n";

    //Task_3
    double number{};

    cout << "Введите дробное число: "; 
    cin >> number;

    double roundedNumber = round(number * 100) / 100;

    cout << "Округленное число: " << setprecision(2) << roundedNumber << "\n";
    cout << "\n";

    //Task_5
    int secondsPassed{};
    cout << "Введите количество секунд, прошедших с начала дня: ";
    cin >> secondsPassed;

    int remainingSeconds = 86400 - secondsPassed;
    int hours_1 = remainingSeconds / 3600;
    int minutes_1 = (remainingSeconds % 3600) / 60;
    int seconds_1 = (remainingSeconds % 60) % 60;

    cout << "До полуночи осталось: " << hours_1 << " часов, " << minutes_1 << " минут, " << seconds_1 << " секунд." << "\n";
    cout << "\n";

    //Task_7
    const double pi = 3.141592653589793;
    const int radius = 6371000;

    double surfaceArea = 4 * pi * pow(radius, 2);
    cout << "Площадь поверхности Земли: " << surfaceArea << " м^2" << "\n";
    cout << "\n";
}
