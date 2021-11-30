#include<iostream>

using namespace std;

class Polynomial {
    public:
    int * degCoeff; // Name of your array (Don't change this)
	int size;
    // Complete the class
	Polynomial() {
        this->degCoeff = new int[100];
        this->size = 0;
    }
    Polynomial(const Polynomial& p) {
        this->size = p.size;
        this->degCoeff = new int[100];
        for(int i = 0; i < this->size; i++) {
            this->degCoeff[i] = p.degCoeff[i];
        }
    }
    void setCoefficient(int deg, int coeff) {
        if(size <= deg)
            size = deg + 1;
        degCoeff[deg] = coeff;
    }
    Polynomial operator +(Polynomial p2) {
        Polynomial result;
        result.size = (size > p2.size) ? size : p2.size;
        for(int i = 0; i < result.size; i++) {
            result.degCoeff[i] = degCoeff[i] + p2.degCoeff[i];
        }
        return result;
    }
    Polynomial operator -(Polynomial p2) {
        Polynomial result;
        result.size = (size > p2.size) ? size : p2.size;
        for(int i = 0; i < result.size; i++) {
            result.degCoeff[i] = degCoeff[i] - p2.degCoeff[i];
        }
        return result;
    }
    Polynomial operator * (Polynomial p2){
        Polynomial result;
        result.size = size+p2.size-1;
        for(int i=0; i<size; i++){
			for(int j=0; j<p2.size; j++)
                result.degCoeff[i+j] += degCoeff[i] * p2.degCoeff[j];
        }
        return result;
    }
    Polynomial& operator = (const Polynomial& p2){
        this -> size = p2.size;
       	this -> degCoeff = new int[100];
        for(int i=0; i<p2.size; i++)
			this->degCoeff[i] = p2.degCoeff[i];
            
      	return *this;        
    }
    void print(){
        if(size==0)
            return;
        for(int i=0; i<size; i++){
            if(degCoeff[i]!=0)
                cout<<degCoeff[i]<<"x"<<i<<" ";            
        }
    }
};

int main() {
    int count1, count2, choice;
    cin >> count1;

    int * degree1 = new int[count1];
    int * coeff1 = new int[count1];

    for (int i = 0; i < count1; i++) {
        cin >> degree1[i];
    }

    for (int i = 0; i < count1; i++) {
        cin >> coeff1[i];
    }

    Polynomial first;
    for (int i = 0; i < count1; i++) {
        first.setCoefficient(degree1[i], coeff1[i]);
    }

    cin >> count2;

    int * degree2 = new int[count2];
    int * coeff2 = new int[count2];

    for (int i = 0; i < count2; i++) {
        cin >> degree2[i];
    }

    for (int i = 0; i < count2; i++) {
        cin >> coeff2[i];
    }

    Polynomial second;
    for (int i = 0; i < count2; i++) {
        second.setCoefficient(degree2[i], coeff2[i]);
    }

    cin >> choice;

    Polynomial result;
    switch (choice) {
        // Add
    case 1:
        result = first + second;
        result.print();
        break;
        // Subtract
    case 2:
        result = first - second;
        result.print();
        break;
        // Multiply
    case 3:
        result = first * second;
        result.print();
        break;

    case 4: // Copy constructor
    {
        Polynomial third(first);
        if (third.degCoeff == first.degCoeff) {
            cout << "false" << endl;
        } else {
            cout << "true" << endl;
        }
        break;
    }

    case 5: // Copy assignment operator
    {
        Polynomial fourth(first);
        if (fourth.degCoeff == first.degCoeff) {
            cout << "false" << endl;
        } else {
            cout << "true" << endl;
        }
        break;
    }

    }

    return 0;
}