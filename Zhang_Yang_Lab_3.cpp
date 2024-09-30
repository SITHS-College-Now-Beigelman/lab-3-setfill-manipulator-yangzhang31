// Yang Zhang 
// Lab 1
// 9.10.2024

#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    //Top hashtag bar
    cout << setw(84) << setfill('#') << "#" << endl;

    //Using no set fill (main text)
    cout << setfill(' ') << "#" << setw(83) << "#" << endl;
    cout << "#" << setw(83) << "#" << endl;
    cout << "#" << " Ways to access the Task Manager on your Windows computer:" << setw(25) << "#" << endl;
    cout << "#" << setw(83) << "#" << endl;
    cout << "#" << setw(54) << "Press the key combination Ctrl + Shift + Escape" << setw(29) << "#" << endl;
    cout << "#" << setw(83) << "#" << endl;
    cout << "#" << setw(78) << "Press the key combination Ctrl + Alt + Delete and select \"Task Manager\"" << setw(5) << "#" << endl;
    cout << "#" << setw(83) << "#" << endl;
    cout << "#" << setw(59) << "Type \"Task Manager\" in the Windows Start menu search" << setw(24) << "#" << endl;
    cout << "#" << setw(83) << "#" << endl;
    cout << "#" << setw(83) << "#" << endl;

    //Bottom hastag bat
    cout << setw(84) << setfill('#') << "#" << endl;

    cout << endl;

    return 0;

}