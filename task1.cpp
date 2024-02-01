#include<iostream>
using namespace std;

class x{
	public:
		int x,y,z;
	    int aa,ab,ac;
        int sum;
};

class y : public x{
	public:
		setdata(){
			cout << "Enter the first no:-";
			cin >> x;
			
			cout << "Enter the second no:-";
			cin >> y;
			
			cout << "Enter the third no:-";
			cin >> z;	
		}  
        
        getdata(){
        	aa=a*a*a;
        	ab=b*b*b;
        	ac=c*c*c;
        	
        	cout << "Cube three number is " << aa << "  " << ab << "  " << ac  << endl;
        	
        	sum = aa+ab+ac;
        	
            cout << "Sum of all cube is " << sum ;      
		}


};


int main(){
	y y1;
	
	
	y1.setdata();
	y1.getdata();
	return 0;
}

