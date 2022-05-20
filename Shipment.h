//IT21322730 H.M.D.P.NISSANKE
class Shipment 
{
	private:
		string customerId;
		string orderId;
		string deliveryNo;
		string shippingNo;
		string shippingDate;
	public:
		Shipment();
		Shipment (string customerId, string orderId, string deliveryNo,
		String shippingNo, string shippingDate);
		void addShippingDetails();
		void shipoutOrder();
		void trackDelivery();
		~Shipment();
};