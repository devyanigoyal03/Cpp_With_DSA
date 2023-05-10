#include <bits/stdc++.h>
#include <iostream>

using namespace std;

class ComplexNumbers {
  // Complete this class
private:
  int real1, imaginary1, real2, imaginary2;

public:
  int real, imaginary;
  ComplexNumbers(int real1, int imaginary1) {
    this->real = real1;
    this->imaginary = imaginary1;
  }

  void plus(ComplexNumbers obj) {
    int real_num = real + obj.real;
    int imaginary_num = imaginary + obj.imaginary;
    real = real_num;
    imaginary = imaginary_num;
  }

  void multiply(ComplexNumbers obj) {
    int real_num = real * obj.real - imaginary * obj.imaginary;
    int imaginary_num = real * obj.imaginary + imaginary * obj.real;
    real = real_num;
    imaginary = imaginary_num;
  }

  void print() {
    cout << real << " + i" << imaginary << endl;
  }
};

int main() {
  int real1, imaginary1, real2, imaginary2;

  cin >> real1 >> imaginary1;
  cin >> real2 >> imaginary2;

  ComplexNumbers c1(real1, imaginary1);
  ComplexNumbers c2(real2, imaginary2);

  int choice;
  cin >> choice;

  if (choice == 1) {
    c1.plus(c2);
    c1.print();
  } else if (choice == 2) {
    c1.multiply(c2);
    c1.print();
  } else {
    return 0;
  }
}