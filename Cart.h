class Cart
{
	private:
		string customerId;
		string bookName;
		Books*Books1;

	public:
		Cart();
		Cart (string customerId, string bookName);
		void addToCart();
		~Cart();
};