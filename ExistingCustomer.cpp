//IT21223426 - Chamodi W.A.K.D
//class implimentation of ExistingCustomer
ExistingCustomer::ExistingCustomer();
{
	Name = “ ” ;
	Customerid = “ ” ;
	Address = “ ” ;
	NIC = “ ” ;
	strcpy(ContactNo, “ ”);
}
ExistingCustomer::ExistingCustomer (string Name, string CustomerId, string Address, string NIC, char ContactNo[]) 
{
Name = Name;
CustomerId = CustomerId;
Address = Address;
NIC = NIC;
strcpy(ContactNo,ContactNo);
}
void ExistingCustomer::createAccount() {}
void ExistingCustomer::login() {}
void ExistingCustomer::removeAccount() {}
void ExistingCustomer::updateDetails() {}
ExistingCustomer::~ExistingCustomer() {}