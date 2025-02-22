#include <iostream>

using namespace std;

class clsCalculator {

private:

	float _Results = 0;
	float _NumUser = 0;
	string _LastOperation = "Clear";
	float _PreviousResults = 0;

	bool IsZero(float Number) {

		return (Number == 0);
	}

	
public:

	void Clear() {

		_NumUser = 0;
		 _Results = 0;
		 _LastOperation = "Clear";
		 _PreviousResults = 0;
	}

	void Add(float NumAdd) {

		_NumUser = NumAdd;
		_PreviousResults = _Results;
		_LastOperation = "Adding";
		 _Results += NumAdd;

	}

	void Subtract(float NumSub) {

		_NumUser = NumSub;
		_PreviousResults = _Results;
		_LastOperation = "Subtracting";

		 _Results -= NumSub;
	}

	void Multiply(float NumMult) {

		_NumUser = NumMult;
		_PreviousResults = _Results;
		_LastOperation = "Multiplying";

		

		 _Results *= NumMult;
	}

	void Divinding(float NumDiv) {

		if (IsZero(NumDiv)) {

			NumDiv = 1;
		}
			

		_NumUser = NumDiv;
		_PreviousResults = _Results;
		_LastOperation = "Divinding";

		 _Results /= NumDiv;
	}

	float GetFinalResults() {

		return _Results;
	}

	void CancelLastOperation() {

		_NumUser = 0;
		_LastOperation = "Canceling Last Operation";
		_Results = _PreviousResults;
	}

	void PrintResult()
	{
		cout << "Result ";
		cout << "After " << _LastOperation << " " <<
			_NumUser << " is: " << _Results << "\n";
	}
};


int main() {

	clsCalculator Calculator;

	Calculator.Clear();

	Calculator.Add(10);
	Calculator.PrintResult();

	Calculator.Add(20);
	Calculator.PrintResult();

	Calculator.Clear();

	Calculator.Add(10);
	Calculator.PrintResult();

	Calculator.Divinding(0);
	Calculator.PrintResult();

	Calculator.Multiply(2);
	Calculator.PrintResult();

	Calculator.Subtract(10);
	Calculator.PrintResult();

	Calculator.CancelLastOperation();
	Calculator.PrintResult();

	system("pause>0");
}