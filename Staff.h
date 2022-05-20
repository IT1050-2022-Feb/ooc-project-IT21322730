//IT21322730 H.M.D.P.NISSANKE
class Staff : public ExistingCustomer 
{
	public:
		Staff();
		Staff() : ExistingCustomer (Name, Id, Address, NIC, ContactNo);
		void manageRecords();
		void updateStore();
		~Staff();
};
