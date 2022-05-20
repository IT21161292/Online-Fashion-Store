// Payment class

#include<iostream>

using namespace std;

class Payment{
	private:
		int Payment_Id;
		double Payment_Amount;
		string Payment_Date;
	public:
		payment();
		payment(int ppayment_id, double ppayment_amount, string ppayment_date);
		void add_Payment();
		void cancel_Payment();
		void edit_Payment();
};
