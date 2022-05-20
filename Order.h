//IT21223426 - Chamodi W.A.K.D
//class implimentation of Order

class Order
{
	private:
		string BookId;
		string CustomerId;
		string OrderId;
		Payment*payment;
		Books*books
		ExistingCustomer*customer;
		Shipment*ship;
		Report*report1;

	public:
		Order();
		Order (string BookId, string CustomerId, string OrderId) ;
		void purchaseBook();
		void checkoutOrder();
		void confirmOrder();
		void cancelOrder();
		void selectDelivery();
		~Order();
};