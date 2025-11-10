// Local Scope:
// 	•	Variables declared inside a function/block.
// 	•	Accessible only inside that function/block.
// 	•	Destroyed when the function/block. ends.

//eg.
// #include <iostream>
// using namespace std;

// void func() {
//     int x = 10; // local variable
//     cout << x << endl;
// }

// int main() {
//     func();
//     // cout << x; // ❌ Error: x is not accessible here
// }



// Global Scope:
// 	•	Variables declared outside all functions.
// 	•	Accessible anywhere in the file (after declaration).

//eg.
// #include <iostream>
// using namespace std;

// int x = 5; // global variable

// void func() {
//     x = 10; // modifies global x
// }

// int main() {
//     cout << x << endl; // 5
//     func();
//     cout << x << endl; // 10
// }

	// •	Avoid overusing globals — they can make debugging tricky.
	// •	Use local variables whenever possible.