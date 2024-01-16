// HugeInt test program.
#include <iostream>
#include <cctype>      // isdigit function prototype
#include <cstring>     
#include <conio.h>

using std::cout;
using std::endl;

using std::ostream;
/////////////////////////////////////////////////////////////////
class HugeInt {
	friend ostream &operator<<( ostream &, const HugeInt & );

	private:
   		short integer[ 30 ];
   
	public:
	   HugeInt( long = 0 );      
	   
	   HugeInt( const char * );  
	
	   
	   HugeInt operator+( const HugeInt & );   //  HugeInt + HugeInt
	
	   HugeInt operator+( int );      	       //  HugeInt + int
         
	   HugeInt operator+( const char * );      // HugeInt + string that represents large integer value
  
}; 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
// default constructor; conversion constructor that converts  a long integer into a HugeInt object
HugeInt::HugeInt( long value )
{
  for ( int i = 0; i <= 29; i++ )
      integer[ i ] = 0;   

   // place digits of argument into array 
   for ( int j = 29; value != 0 && j >= 0; j-- ) {
      integer[ j ] = value % 10;
      value /= 10;
   } 
} 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
// conversion constructor that converts a character string representing a large integer into a HugeInt object
HugeInt::HugeInt( const char *string )
{
   for ( int i = 0; i <= 29; i++ )
      integer[ i ] = 0;

   int length = strlen( string );

   for ( int j = 30 - length, k = 0; j <= 29; j++, k++ )

      if ( isdigit( string[ k ] ) )
         integer[ j ] = string[ k ] - '0';
} 
/////////////////////////////////////////////////////////////////
HugeInt HugeInt::operator+( const HugeInt &op2 )
{
   HugeInt temp;   // temporary result
   int carry = 0;

   for ( int i = 29; i >= 0; i-- ) {
      temp.integer[ i ] = 
         integer[ i ] + op2.integer[ i ] + carry;

      // determine whether to carry a 1
      if ( temp.integer[ i ] > 9 ) 
	  {
         temp.integer[ i ] %= 10;  // reduce to 0-9
         carry = 1;
      } 
      // no carry 
      else
         carry = 0;
   }
   return temp;  // return copy of temporary object
} 
/////////////////////////////////////////////////////////////////////////////////
HugeInt HugeInt::operator+( int op2 )
{ 
   // convert op2 to a HugeInt, then invoke operator+ for two HugeInt objects
   return *this + HugeInt( op2 ); 
} 
/////////////////////////////////////////////////////////////////////////////////
HugeInt HugeInt::operator+( const char *op2 )
{ 
    return *this + HugeInt( op2 ); 
}
////////////////////////////////////////////////////////////////////////////////
// overloaded output operator
ostream& operator<<( ostream &output, const HugeInt &num )
{
   int i;

   for ( i = 0; ( num.integer[ i ] == 0 ) && ( i <= 29 ); i++ )
      ; // skip leading zeros

   if ( i == 30 )
      output << 0;
   else
      for ( ; i <= 29; i++ )
         output << num.integer[ i ];
   return output;
} 
////////////////////////////////////////////////////////////////////////////////
int main()
{
   HugeInt n1( 7654321 );
   HugeInt n2( 7891234 );
   HugeInt n3( "99999999999999999999999999999" );
   HugeInt n4( "1" );
   HugeInt n5;

  
   n5 = n1 + n2;
   cout << n1 << " + " << n2 << " = " << n5 << "\n\n";

   cout << n3 << " + " << n4 << "= " << ( n3 + n4 ) << "\n\n";

   n5 = n1 + 9;
   cout << n1 << " + " << 9 << " = " << n5 << "\n\n";

   n5 = n2 + "10000";
   cout << n2 << " + " << "10000" << " = " << n5 ;

   getch();
} 
