#include <iostream>
using namespace std;

class Date {
public:
    Date(int mes, int dia, int año) : day{dia},year{año}{
        if (mes < 1 || mes > 12) {
            month=mes;

    }
        else{
            month=mes;
        }
    }

    int getMonth() {
        return month;
    }

    void setDay(int dia) {
        day = dia;
    }

    int getDay() {
        return day;
    }

    void setYear(int año) {
        year = año;
    }

    int getYear() {
        return year;
    }

    void displayDate() {
        cout << month << "/" << day << "/" << year << endl;
    }

    private:
    int month{1}, day{1}, year{1};
};