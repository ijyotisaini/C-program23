#include <iostream>
#include<string>

using namespace std;

class pntr_obj{
	int roll_no;
	string name;
	
	public:
		void set_data(int r, string s){
			roll_no=r;
			name=s;
		}
		
		void print(){
			cout<<"Roll no.:"<<roll_no;
			cout<<"Name:"<<name;
		}
};

int main() {
	pntr_obj obj;
	obj.set_data(101,"Jyoti");
	obj.print();
	
	return 0;
}
