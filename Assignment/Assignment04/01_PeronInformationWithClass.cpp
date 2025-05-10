#include <bits/stdc++.h>
using namespace std;

class Person
{
private:
    string name;
    long long int mobile;
    long long int idNumber;
    string sex;
    string birthDate;
    string nationality;
    string address;

public:
    // Constructor to initialize all values
    Person(string n, long long int mob, long long int id, string s, string dob, string nat, string addr)
    {
        name = n;
        mobile = mob;
        idNumber = id;
        sex = s;
        birthDate = dob;
        nationality = nat;
        address = addr;
    }

    // Method to display person details
    void displayInfo() const
    {
        cout << "\n--- Person Information ---\n";
        cout << "Name        : " << name << endl;
        cout << "Mobile      : " << mobile << endl;
        cout << "ID Number   : " << idNumber << endl;
        cout << "Sex         : " << sex << endl;
        cout << "Birthdate   : " << birthDate << endl;
        cout << "Nationality : " << nationality << endl;
        cout << "Address     : " << address << endl;
    }
};

int main()
{
    // Create object and pass values through constructor
    Person p("Taskin Ahmad Al Faruqe", 18652842502, 242910701126, "Male", "2001-10-13", "Bangladesh", "Zhenjiang, Jiangsu, China");

    p.displayInfo();
    return 0;
}
