#include <iostream>
#include <string>
#include <cstdlib>
#include <Windows.h>

using namespace std;

int main() {
	int varInt = 123456;
	string varString = "DefaultString";
	char arrChar[128] = { "Long char array right there ->" };
	int* ptr2int = &varInt;
	int** ptr2ptr = &ptr2int;
	int*** ptr2ptr2 = &ptr2ptr;
	bool again = true;
	do {
		DWORD pid = GetCurrentProcessId();

		cout << "Process ID: " << dec << pid << '\n';

		cout << "varInt (0x" << hex << uppercase << &varInt << ") = " << varInt << '\n';
		cout << "varString (0x" << hex << uppercase << &varString << ") = " << varString << '\n';
		cout << "varChar (0x" << hex << uppercase << (void*)&arrChar << ") = " << arrChar << '\n';

		cout << "ptr2int (0x" << hex << uppercase << &ptr2int << ") = " << "0x" << ptr2int << '\n';
		cout << "ptr2ptr (0x" << hex << uppercase << &ptr2ptr << ") = " << "0x" << ptr2ptr << '\n';
		cout << "ptr2ptr2 (0x" << hex << uppercase << &ptr2ptr2 << ") = " << "0x" << ptr2ptr2 << '\n';

		cout << "Press ENTER to print again.\n\n\n";
		getchar();

		cout << "-----------------------------------\n\n";
	} while (again == true);
}