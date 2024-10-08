/***************************************************************
** File Name: CS121Lab1Driver1
**
** This program computes the number of bits and bytes in primitive data types
**
**
** Programmer : Mohammed Shahir Ahsan
**
** Date created :09/05/23
**
** Date last revised: 
**
****************************************************************/

#include <iostream>
using namespace std;

int main()
{
	cout << "Waz up ? \n ";

	cout << "We are computing bits and bytes of the primitive data types \n ";
	cout << endl <<endl;

	cout << "Number of bytes in a short integer = " << sizeof(short)
		 << "; number of bits = " << sizeof(short) * 8 << "\n\n";

	cout << "Number of bytes in an unsigned short integer = "
		 << sizeof(unsigned short)
		 << "; number of bits = " << sizeof(unsigned short) * 8 << "\n\n";

	cout << "Number of bytes in an integer = " << sizeof(int)
		 << "; number of bits = " << sizeof(int) * 8 << "\n\n";

	cout << "Number of bytes in an unsigned integer = "
		 << sizeof(unsigned)
		 << "; number of bits = " << sizeof(unsigned) * 8 << "\n\n";

	cout << "Number of bytes in an unsigned = " << sizeof(unsigned)
		 << "; number of bits = " << sizeof(unsigned) * 8 << "\n\n";

	cout << "Number of bytes in a long integer = " << sizeof(long)
		 << "; number of bits = " << sizeof(long) * 8 << "\n\n";

	cout << "Number of bytes in an unsigned long integer = "
		 << sizeof(unsigned long)
		 << "; number of bits = " << sizeof(unsigned long) * 8 << "\n\n";

	cout << "Number of bytes in a character = " << sizeof(char)
		 << "; Number of bits = " << sizeof(float) * 8 << "\n\n";

	cout << "Number of bytes in a float = " << sizeof(float)
	     << "; number of bits = " << sizeof(double) * 8 << "\n\n";    
	 
	cout << "Number of bytes in a double = " << sizeof(double)
		 << "; number of bits = " << sizeof(double) * 8 << "\n\n"; 

	cout << "Number of bytes in a long double = " << sizeof(long double);
	cout << "; number of bits in a long double = " << sizeof(long double) * 8 << "\n\n";
	
	return 0;
}// end main