// operator overloading
#include<iostream>
using namespace std;
class Complex
{
    private:
    int real,imag;
    public: 
    Complex(int r=0, int i=0)
    {
        real=r;
        imag=i;
    }
    Complex operator+(Complex const& obj)
    {
        Complex res;
        res.real=real+obj.real;
        res.imag=imag+obj.imag;
        return res;
    }
    void print()
    {
        cout<<real<<" + i"<<imag<<'\n';
        
    }
};

int main()
{
    Complex c1(10,5),c2(2,4);
    Complex c3=c1+c2;
    c1.print();
    c2.print();
    cout<<"Sum of the two complex number is: ";
    c3.print();
}

/*
10 + i5
2 + i4
Sum of the two complex number is: 12 + i9
*/
