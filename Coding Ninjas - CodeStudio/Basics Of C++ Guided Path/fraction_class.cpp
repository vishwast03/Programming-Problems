#include<iostream>
#include<algorithm>

using namespace std;

class Fraction {
	int num, den;
    
    public:
    
    Fraction(int a, int b){
        num=a;
        den=b;
    }
    
    void add(Fraction f1){
        int c  = f1.num;
        int d =  f1.den;        
        int res = (num*d + den*c);
        int gcd = __gcd(res, (d*den));
        num = res / gcd;
        den = (d*den) / gcd;
    }
    
    void mult(Fraction f2){
        int c = f2.num;
        int d = f2.den;
        int res = num*c;
        int res2 = den*d;
        int gcd = __gcd(res, res2);
      	num = res/gcd;
		den = res2/gcd;        
    }
    
    void print(){
		cout<<num<<"/"<<den<<endl;
    }
};

int main() {
    
    int n, d;
    cin>>n>>d;
    
    Fraction f1(n, d);
    int q;
    cin>>q;
    
    while(q--){
    	int type; 
        cin>>type;
        int a,b;
        cin>>a>>b;
        
        Fraction f2(a,b);
        if(type==1){
			f1.add(f2);
            f1.print();
        }
        else{
            f1.mult(f2);
            f1.print();
        }
    }

    return 0;
}