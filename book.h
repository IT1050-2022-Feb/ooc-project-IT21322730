// IT21289620 - Dissanayaka Mudiyanselage D.M.R.O 
//Class of book
class Books
{
	private:
		string bookId;
		string bookName;
		char bookType;
		float price;
		Order*order2;

	public:
		Books();
		Books (string bookId, string bookName, char bookType, float 
price);
void addBooks();
void removeBooks();
void updateCollections();
void searchBooks();
void browseBooks(); 
~Books();
};
