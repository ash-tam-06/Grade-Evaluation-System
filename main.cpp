#include <iostream>

using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    int inputScore;
    cout<< "What is the score?" << endl;
    cin>> inputScore;
    if (inputScore >= 90)
        cout<< "Excelent" << endl;
    else if (inputScore >= 70)
        cout<<"Good" << endl;
    else if (inputScore >= 60)
        cout<<"Pass" << endl;
    else cout<<"Fail" << endl;

    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.