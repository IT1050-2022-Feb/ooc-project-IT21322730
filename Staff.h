class Staff : public ExistingCustomer 
{
	public:
		Staff();
		Staff() : ExistingCustomer (Name, Id, Address, NIC, ContactNo);
		void manageRecords();
		void updateStore();
		~Staff();
};
