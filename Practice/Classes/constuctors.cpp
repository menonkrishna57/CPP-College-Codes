#include <iostream>

using namespace std;
class Complex {
   private: double real;
   double imaginary;

   public: 
   Complex() {
      real = 0;
      imaginary = 0;
   }

   Complex(double r, double i) {
      real = r;
      imaginary = i;
   }

   Complex add(Complex n1, Complex n2) {
      Complex result;
      result.real = n1.real + n2.real;
      result.imaginary = n1.imaginary + n2.imaginary;
      return result;
   }

   void print() {
      cout << real << " + " << imaginary << "i" << endl;
   }
};

int main() {
   Complex n1(4, 2); // Parameterized constructor
   Complex n2(3.5, 1.5); // Parameterized constructor

   Complex sum = n1.add(n1, n2);
   sum.print();
   return 0;
}