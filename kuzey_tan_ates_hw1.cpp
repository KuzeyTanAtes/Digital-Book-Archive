#include<iostream>
using namespace std;
class DigitalBookArchive{
	private:
		string name,type;
		int DigitalBookCount=20;
		public:
		DigitalBookArchive(string name){
			cout<<"Digital book archive name set to : "<<name<<endl;
			
		}
		DigitalBookArchive(string name,string type){
			cout<<"Digital book archive name is : "<<name<<endl;
			cout<<"Digital book type is : "<<type<<endl;
			
		}
		void addBook();
		void readBook();
		string getName();
		void print();
		
};
void DigitalBookArchive::addBook(){
	DigitalBookCount++;
}
void DigitalBookArchive::readBook(){
	DigitalBookCount--;
}
string DigitalBookArchive::getName(){
	return name;
}
void DigitalBookArchive::print(){
	cout<<DigitalBookCount;
}
int main(){
string n,t;
char x;
cout<<"Enter the name of the digital book archive :";
cin>>n;
cout<<"Enter the type of the digital book archive :";
cin>>t;
	DigitalBookArchive object(n,t);
	do{
	cout<<"Do you want to add or read a digital book (a/r),or enter (c) for exit the system : ";
	cin>>x;
	if(x=='a'||x=='A'){
	object.addBook();
	cout<<"A new digital book is added"<<endl;	
	}
	if(x=='r'||x=='R'){
	object.readBook();
	cout<<"You've read a digital book"<<endl;	
	}
	if (x=='c'||x=='C'){
		cout<<"the number of remaining books is : ";
		object.print();
	
	}

}while(x!='c'&& x!='C');
	

	
	return 0;
}

