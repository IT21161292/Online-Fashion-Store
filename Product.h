// Product class

#include<iostream>

using namespace std;

class Product{
	private:
		int Product_Id;
		string Quantity_Available;
		float price;
	public:
		product();
		product(int pproduct_id, string pquantity_available, float pprice);
		void add_new_product();
		void remove_product();
};
