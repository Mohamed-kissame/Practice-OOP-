#include <iostream>
#include <string>

using namespace std;


class clsPerson {

private :

	int _Id = 0;
	string _FirstNAme;
	string _LastNAme;
	string _Email;
	string _Phone;

	string FullName() {

		return _FirstNAme + " " + _LastNAme;
	}

public:

	clsPerson(int Id, string FirstName, string LastName, string Email, string Phone) {

		_Id = Id;
		_FirstNAme = FirstName;
		_LastNAme = LastName;
		_Email = Email;
		_Phone = Phone;
	}

	int Id() {

		return _Id;
	}

	void SetFirstName(string FirstName) {

		_FirstNAme = FirstName;
	}

	string FirstName() {

		return _FirstNAme;
	}

	void SetLastName(string LastNAme) {

		_LastNAme = LastNAme;
	}

	string LastName() {

		return _LastNAme;
	}

	void SetEmail(string Email) {

		_Email = Email;
	}

	string Email() {

		return _Email;
	}

	void SetPhone(string Phone) {

		_Phone = Phone;
	}

	string Phone() {

		return _Phone;
	}

	void SendEmail(string subj, string body) {

		cout << "\nThe following message sent successfully to email : " << Email() << endl;
		cout << "Subject : " << subj;
		cout << "\nBody  : " << body;
	}

	void SendSMS(string Message) {

		cout << "\n\nThe following SMS sent successfully to phone : " << Phone() << endl;
		cout << Message;
	}

	void Print() {

		cout << "\nInfo :\n";

		cout << "___________________________________\n";
		cout << "ID        : " << Id() << endl;
		cout << "FirstName : " << FirstName() << endl;
		cout << "LastName  : " << LastName() << endl;
		cout << "Full Name : " << FullName() << endl;
		cout << "Email     : " << Email() << endl;
		cout << "Phone     : " << Phone() << endl;
		cout << "___________________________________\n";

	}


};

int main() {


	clsPerson Person1(10, "Mohamed", "Kissame", "mkissame9@gmail.com", "0675739888");
    
	Person1.Print();

	Person1.SendEmail("Hi", "How Are You?");
	Person1.SendSMS("How Are You?");

	system("pause>0");

	return 0;
}