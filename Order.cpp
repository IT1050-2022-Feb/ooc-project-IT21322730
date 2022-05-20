//IT21223426 - Chamodi W.A.K.D
//class implimentation of Order

Order::Order()
{
	bookId = “ ” ;
	customerId = “ ” ;
	orderId = “ ” ;
}
Order::Order (string bookId, string customerId, string orderId)
{
	bookId = bookId;
	customerId = customerId;
	orderId = orderId;

	payment = new Payment (cardNo, invoiceNo);
	ship = new Shipment (customerId, orderId, deliveryNo, shippingNo, 
	shippingDate);
}
void Order::purchaseBook() {}
float Order::checkoutOrder() {}
void Order::confirmOrder() {}
void Order::cancelOrder() {}
void Order::selectDelivery() {}
Order::~Order() {}