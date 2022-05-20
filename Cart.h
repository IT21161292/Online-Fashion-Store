// cart class

class Cart{
	private:
		int Cart_Id;
		int Product_Id;
		int Quantity;
	public:
		cart();
		cart(int pcartId, int pproductId, int pquantity);
		void Add_cart_item();
		int Update_quantity(int pquantity);
		void Checkout();	
};
