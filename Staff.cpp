//IT21322730 H.M.D.P.NISSANKE
Staff::Staff()
{
	Name = “ ” ;
	Id = “ ” ;
	Address = “ ” ;
	NIC = “ ” ;
	Strcpy(ContactNo, “ ”) ;
}
Staff::Staff() : ExistingCustomer (Name, Id, Address, NIC, ContactNo); {}
void Staff::manageRecords() {}
void Staff::updateStore() {}
Staff::~Staff() {}