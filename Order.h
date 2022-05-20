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