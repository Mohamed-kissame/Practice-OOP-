#include <iostream>
#include <string>

using namespace std;

class clsEmployee {

private:

	int _Id = 0;
	string _FirstNAme;
	string _LastName;
	string _Title;
	string _Email;
	string _Phone;
	string _Department;
	float _Salary;

	string FullName() {

		return _FirstNAme + " " + _LastName;
	}

public:

	clsEmployee(int Id ,string FirstName, string LastName, string Title, string Email, string Phone, string Department, float salary) {

		_Id = Id;
		_FirstNAme = FirstName;
		_LastName = LastName;
		_Title = Title;
		_Email = Email;
		_Phone = Phone;
		_Department = Department;
		_Salary = salary;
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

	void SetLastName(string LastName) {

		_LastName = LastName;
	}

	string LastNames() {

		return _LastName;
	}

	void SetTitle(string Title) {

		_Title = Title;
	}

	string Title() {

		return _Title;
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

	void SetDepartment(string Department) {

		_Department = Department;
	}

	string Department() {

		return _Department;
	}

	void SetSalary(float salary) {

		_Salary = salary;
	}

	float Salary() {

		return _Salary;
	}

	void SendEmail(string Subj, string Body) {

		cout << "\nThe following message sent successfully to email : " << Email() << endl;
		cout << "Subject : " << Subj;
		cout << "\nBody  : " << Body;
	}

	void SendSMS(string TextMessage) {

		cout << "\n\nThe following SMS sent successfully to phone : " << Phone() << endl;
		cout << TextMessage;

	}

	void print() {

		cout << "\n================================\n";
		cout << "\tEmployee Info \t";
		cout << "\n================================\n";

		cout << "ID         : " << Id();
		cout << "\nFirst Name : " << FirstName();
		cout << "\nLast Name  : " << LastNames();
		cout << "\nFull Name  : " << FullName();
		cout << "\nTitle      : " << Title();
		cout << "\nEmail      : " << Email();
		cout << "\nPhone      : " << Phone();
		cout << "\nSalary     : " << Salary() << " $ ";
		cout << "\nDepartment : " << Department();

		cout << "\n================================\n";


	}


};

int main() {


	clsEmployee Employee(10, "Mohamed", "Kissame", "FGCS", "mkissame9@gmail.com", "0675739888", "Ingenieur IT", 9000);

	Employee.print();

	Employee.SendEmail("Meeting", "Meeting is come at 9 PM");

	Employee.SendSMS("Look To Your Email For See The Time Of The Meeting Please.");

	system("pause>0");
}
