#include<iostream>

using namespace std;

class ComplexNumbers {
	private:
    	int r, i;
    public:
    	ComplexNumbers(int real, int imaginary) {
            r = real;
            i = imaginary;
        }
    	void plus(ComplexNumbers obj) {
            r = r + obj.r;
            i = i + obj.i;
        }
    	void multiply(ComplexNumbers obj) {
            int x = r * obj.r;
            int yi = r * obj.i + i * obj.r;
            int z = (i * obj.i) * (-1);
            r = x + z;
            i = yi;
        }
    	void print() {
            cout << r << " + i" << i << endl;
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