//IT21289620 - Dissanayaka Mudiyanselage D.M.R.O 
//Class of Payment
class Payment
{
	private:
		string orderId;
		string invoiceNo;
		string cardNo;
		float totalPrice;
		Report*report2;
	public:
		Payment();
		Payment (string cardNo, string invoiceNo)
		void choosePaymentMethod();
		void receiveRefund();
		float calculateDiscount();
		~Payment();
};