
using namespace std;
class Foo{
	private: 
		int aVal;
	public:
		Foo(){
			aVal = 0;
		}
		Foo(int val){
			aVal = val;
		}
		// not allowed. but just to make you understand 
		friend Foo& operator=(Foo& left, Foo& right);		
};
// Just for the shake of understanding the issue.
Foo& operator=(Foo& left, Foo& right){
	left.aVal = right.aVal;
}	
 
int main(){
	Foo f1(5);
	6 = f1; // will make a call to the friend function operator =,
			// since, there is a mismatch for the left operand, compiler 	
            // will try to convert 6 into Foo object and since we have 
		    // supplied one-arg constructor in Foo, compiler will use that 
			// and will convert 6 to Foo object and then will modify that 
			// by making a call to assignment operator, in this way, we 
			// will e able to modify a constant and that is totally 
			// illegal as constants are constants they are not modifiable
			// in any way, hence, they RESTRICTED OVERLOADING ASSIGNMENT
			// OPERATOR AS FRIEND FUNCTION, AS THAT WILL FACILITATE 
			// MODIFYING A CONSTANT.
			 
 
}