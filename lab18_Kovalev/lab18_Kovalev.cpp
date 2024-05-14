#include <iostream>
using namespace std;

class Number
{
    int FirstNumber, SecondNumber;
public:
    Number() {};
    Number(int FN, int SN)
    {
        FirstNumber = FN;
        SecondNumber = SN;
    }
    void Check()
    {
        if (FirstNumber % 2 == 0 || FirstNumber % 3 == 0)
        {
            cout << "First number - '" << FirstNumber << "' - simple" << endl;
        }
        else
        {
            cout << "First number - '" << FirstNumber << "' - not simple" << endl;
        }
        if (SecondNumber % 2 == 0 || SecondNumber % 3 == 0)
        {
            cout << "Second number - '" << SecondNumber << "' - simple" << endl;
        }
        else
        {
            cout << "Second number - '" << SecondNumber << "' - not simple" << endl;
        }
    }
    void Show()
    {
        cout << "First number = " << FirstNumber << endl;
        cout << "Second number = " << SecondNumber << endl;
    }
    Number operator==(Number ob2);
    Number operator+(Number ob2);
    Number operator-(Number ob2);
    Number operator/(Number ob2);
    Number operator*(Number ob2);
};
Number Number::operator==(Number ob2)
{
    Number temp;
    temp.FirstNumber = FirstNumber;
    temp.SecondNumber = FirstNumber;
    return temp;
}
Number Number::operator+(Number ob2)
{
    Number temp;
    temp.FirstNumber = ob2.FirstNumber + FirstNumber;
    temp.SecondNumber = ob2.SecondNumber + SecondNumber;
    return temp;
}
Number Number::operator-(Number ob2)
{
    Number temp;
    temp.FirstNumber = ob2.FirstNumber - FirstNumber;
    temp.SecondNumber = ob2.SecondNumber - SecondNumber;
    return temp;
}
Number Number::operator/(Number ob2)
{
    Number temp;
    temp.FirstNumber = ob2.FirstNumber / FirstNumber;
    temp.SecondNumber = ob2.SecondNumber / SecondNumber;
    return temp;
}
Number Number::operator*(Number ob2)
{
    Number temp;
    temp.FirstNumber = ob2.FirstNumber * FirstNumber;
    temp.SecondNumber = ob2.SecondNumber * SecondNumber;
    return temp;
}


int main()
{
    Number ob1(10, 15), ob2(20,49), ob3(0,0);
    ob1.Check();
    ob2.Check();
    ob3 = ob1 + ob2;
    cout << "Result of the operation '+':" << endl;
    ob3.Show();
    cout << "Result of the operation '-':" << endl;
    ob3 = ob1 - ob2;
    ob3.Show();
    cout << "Result of the operation '/':" << endl;
    ob3 = ob1 / ob2;
    ob3.Show();
    cout << "Result of the operation '*':" << endl;
    ob3 = ob1 * ob2;
    ob3.Show();
    cout << "Result of appropriation" << endl;
    ob3 = ob1;
    ob3.Show();
    cout << "Result of appropriation" << endl;
    ob3 = ob2;
    ob3.Show();
}