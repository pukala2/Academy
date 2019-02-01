#include <iostream>

template <typename T>
class Calculator
{
public:
    void call() const
    {
        std::cout << " Jakis typ\n";
    }
private:
};


class Calculator // ta ma miec specializacje dla int
{
public:
    void call() const
    {
        std::cout << " Int typ\n";
    }
private:
};


int main()
{
    Calculator<double> dou;
    dou.call();
    Calculator<int> in;
    in.call();    
}
