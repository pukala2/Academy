#include <iostream>

class Calculator
{
public:
    Calculator(int firstValue, int secondValue) :  firstValue(firstValue), secondValue(secondValue)
    {
    }
    
    int sum() const; // const w metodach oznacza to, że gwarantujesz nie zmieniać wartości klasy
    
private:
    int firstValue;
    int secondValue;   
};

int main()
{
    Calculator calculator{4, 5}; // inicializacja klamrowa c++ 11
    const auto result = calculator.sum(); // zmienna auto c++ 11
    
    std::cout << result << std::endl;
}

int Calculator::sum() const 
{
    return firstValue + secondValue;
}
