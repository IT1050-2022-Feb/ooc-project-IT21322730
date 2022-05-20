//IT21193118 Hettiarachchi H. A. A. I.
//Class of Cart
Class Cart
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