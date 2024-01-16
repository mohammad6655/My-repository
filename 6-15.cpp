// Overloading the stream-insertion and stream-extraction operators.
#include <iostream>
#include <iomanip>
#include <conio.h>

using std::cout;
using std::cin;
using std::endl;
using std::setw;

using std::ostream;
using std::istream;

///////////////////////////////////////////////////////////////////////
class PhoneNumber {
	private:
   		char areaCode[ 4 ];  
   		char exchange[ 4 ];  
   		char line[ 5 ]; 
   
   friend ostream &operator << ( ostream&, const PhoneNumber & );
   friend istream &operator >> ( istream&, PhoneNumber & );
}; 
///////////////////////////////////////////////////////////////////////
// overloaded stream-insertion operator; 
// cannot be a member function if we would like to invoke it with cout << somePhoneNumber;

ostream &operator << ( ostream &output, const PhoneNumber &n )
{
   output << "(" << n.areaCode << ") " << n.exchange << "-" << n.line;

   return output;     // enables cout << a << b << c;
} 
///////////////////////////////////////////////////////////////////////
// overloaded stream-extraction operator; 
istream &operator >> ( istream &input, PhoneNumber &n )
{
   input.ignore();                     		// skip (
   
   input >> setw( 4 ) >> n.areaCode; 		// input area code
   
   input.ignore( 2 );                  		// skip ) and space
   
   input >> setw( 4 ) >> n.exchange; 		// input exchange
   
   input.ignore();                     		// skip dash (-)
   
   input >> setw( 5 ) >> n.line;    	    // input line

   return input;      						// enables cin >> a >> b >> c;
} 
///////////////////////////////////////////////////////////////////////
int main()
{
   PhoneNumber phone; 

   cout << "Enter phone number in the form (123) 456-7890:\n";

   cin >> phone;

   cout << phone;

getch();
} 
