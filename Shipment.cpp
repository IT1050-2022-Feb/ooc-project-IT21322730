Shipment::Shipment()
{
	customerId = “ ” ;
	orderId = “ ” ;
	deliveryNo = “ ” ;
	shippingNo = “ ” ;
	shippingDate = “ ” ;
}
Shipment::Shipment (string customerId, string orderId, string deliveryNo,
string shippingNo, string shippingDate)
{
	customerId = customerId;
	orderId = orderId;
	deliveryNo = deliveryNo;
	shippingNo = shippingNo;
	shippingDate = shippingDate;
}
void Shipment::addShippingDeatails() {}
void Shipment::shipoutOrder() {}
void Shipment::trackDelivery() {}
Shipment::~Shipment() {}
