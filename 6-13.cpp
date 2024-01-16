// Date class test program.
#include <iostream>
#include <conio.h>

using std::cout;
using std::endl;
using std::ostream;
//////////////////////////////////////////////////////////////
class Date {
	private:
	   int month;
	   int day;
	   int year;
	
	   static const int days[];       // array of days per month
	   void helpIncrement();          // utility function
	   
	public:
	   Date( int m = 1, int d = 1, int y = 1900 ); 
	   void setDate( int, int, int ); 
	
	   Date &operator++();            // preincrement operator
	   Date operator++( int );        // postincrement operator
	
	   const Date &operator+=( int ); // add days, modify object
	
	   bool leapYear( int ) const;    // is this a leap year?
	   bool endOfMonth( int ) const;  // is this end of month?

   friend ostream &operator<<( ostream &, const Date & );

}; 
///////////////////////////////////////////////////////////////////////////
// initialize static member at file scope; 
// one class-wide copy
const int Date::days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
///////////////////////////////////////////////////////////////////////////
Date::Date( int m, int d, int y ) 
{ 
   setDate( m, d, y ); 
} 
///////////////////////////////////////////////////////////////////////////
void Date::setDate( int mm, int dd, int yy )
{
   month = ( mm >= 1 && mm <= 12 ) ? mm : 1;
   
   year = ( yy >= 1900 && yy <= 2100 ) ? yy : 1900;
  
   // test for a leap year
   if ( month == 2 && leapYear( year ) )
      day = ( dd >= 1 && dd <= 29 ) ? dd : 1;
   else
      day = ( dd >= 1 && dd <= days[ month ] ) ? dd : 1;
} 
///////////////////////////////////////////////////////////////////////////
// overloaded preincrement operator 
Date &Date::operator++()
{
   helpIncrement();

   return *this;  // reference return to create an lvalue
} 
///////////////////////////////////////////////////////////////////////////
// overloaded postincrement operator; 
// note that the dummy integer parameter does not have a parameter name
Date Date::operator++( int )
{
   Date temp = *this;
   helpIncrement();  // hold current state of object

   // return unincremented, saved, temporary object
   return temp;   // value return; not a reference return
} 
///////////////////////////////////////////////////////////////////////////
// add specified number of days to date
const Date &Date::operator+=( int additionalDays )
{
   for ( int i = 0; i < additionalDays; i++ )
      helpIncrement();

   return *this;    // enables cascading
} 
///////////////////////////////////////////////////////////////////////////
// if the year is a leap year, return true; otherwise, return false
bool Date::leapYear( int y ) const
{
   if ( y % 400 == 0 ||  ( y % 100 != 0 && y % 4 == 0 ) )
      return true;  
   else
      return false; 
} 
///////////////////////////////////////////////////////////////////////////
// determine whether the day is the last day of the month
bool Date::endOfMonth( int testDay ) const
{
   if ( month == 2 && leapYear( year ) )
      return testDay == 29; // last day of Feb. in leap year
   else
      return testDay == days[ month ];
} 
///////////////////////////////////////////////////////////////////////////
// function to help increment the date
void Date::helpIncrement()
{
   // day is not end of month
   if ( !endOfMonth( day ) )
      ++day;
   else  
      // day is end of month and month < 12
      if ( month < 12 ) {
         ++month;
         day = 1;
      }
      // last day of year
      else {
         ++year;
         month = 1;
         day = 1;
      }
} 
///////////////////////////////////////////////////////////////////////////
// overloaded output operator
ostream &operator<<( ostream &output, const Date &d )
{
   static char *monthName[ 13 ] = 
    { 
   	  "", "January", "February", "March", "April", "May", "June",
      "July", "August", "September", "October","November", "December" 
	};

   output << monthName[ d.month ] << ' '<< d.day << ", " << d.year;

   return output;   
}
/////////////////////////////////////////////////////////////////////////
int main()
{
   Date d;  // defaults to January 1, 1900
   cout<<d<<endl;
   
   cout << ( d += 2 )<<endl;
	
   cout << ++d<<endl;
   
   Date d1( 7, 11, 2002 );
   cout <<  d1++ <<endl;
   cout<<d1;
   
   getch();
} 
