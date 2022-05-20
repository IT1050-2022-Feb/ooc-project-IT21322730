class ExistingCustomer
{
	private:
		string Name;
		string CustomerId;
		string Address;
		string NIC;
		char ContactNo[10];
		Order*order1;

	Public:
		ExistingCustomer();
		ExistingCustomer(string Name, string CustomerId, string Address,
		string NIC, char ContactNo[]);
		void createAccount;
		void login;
		void removeAccount;
		void updateDetails;
		~ExistingCustomer();
};