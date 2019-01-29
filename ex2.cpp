#include <iostream>

class Student
{
public:
    int id;
    int iloscOcen;
    int* oceny;
public:
    // dokończ konstruktor
    // napisz destruktor
    // napisz konstruktor kopiujący
    // napisz metode wyswietlajaca dane
    Student(int i, int iloscO, int* ocen)
    {
        // 
    }
    ~Student()
    {
        //
    }
};

int main()
{
    int ocenyJasia[5] = { 1, 2, 3, 4, 5 };
    
    Student jas(22, 5, ocenyJasia);
    for(int i = 0; i < jas.iloscOcen; i++)
    {
        std::cout << jas.oceny[i] << std::endl;
    }
}
