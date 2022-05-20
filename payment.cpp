//IT21289620 - Dissanayaka Mudiyanselage R.O.D.M
//Class implementation of Payment
Payment::Payment()
{
	cardNo = “ ” ;
	invoiceNo = “ ” ;
}
Payment::Payment (string cardNo, string invoiceNo)
{
	cardNo = cardNo;
	invoiceNo = invoiceNo;
}
void Payment::choosePaymentMethod() {}
void Payment::receiveRefund() {}
float Payment::calculateDiscount() {}
Payment::~Payment() {}