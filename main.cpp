#include <iostream>
#include <string>
using namespace std; 
int main()
{
    std::cout << "Hello, C++!" << std::endl;
    return 0;
}

void inputStudent(){
    int n = 0; 
    string names[20];
    string ids[20];
    string phones[20]; 
    std :: cout << "Input the number of students:" << std::endl;
    std :: cin >> n; 

    if (n>0){
        for (int i = 0; i<n;i++){
            cout << "Enter information of student " << i + 1;
            cout << "Name:";
            cin >> names[i]; 
            cout << "ID: ";
            cin >> ids[i];
            cout << "Phone : ";
            cin >> phones[i];
        }
        cout << "Number of inputted students: " << n;

    }
    else{
        cout << "The number of students must be more than 0";
    }
    
}

#include <iostream>
using namespace std;
void printNames() {
cout << "tran duc viet" << endl;
}
void solveLinearEquation(double a, double b) {
if (a == 0) {
if (b == 0) {
cout << "Equation has infinitely many solutions (Vo so nghiem)." << endl;
        } else {
cout << "Equation has no solution (Vo nghiem)." << endl;
        }
    } else {
double x = -b / a;
cout << "Equation has one root x = " << x << endl;
    }
}
int main() {
    // Test Exercise 1
cout << "--- Exercise 1 ---" << endl;
printNames();
cout << endl;
    // Test Exercise 2
cout << "--- Exercise 2 ---" << endl;
double a, b;
cout << "Enter a: ";
cin >> a;
cout << "Enter b: ";
cin >> b;
solveLinearEquation(a, b);
return 0;
}gi