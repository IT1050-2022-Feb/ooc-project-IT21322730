//IT21289620 - Dissanayaka Mudiyanselage R.O.D.M
//Class implementation of books
Books::Books()
{
	bookId = “ ” ;
	bookName = “ ” ;
	bookType = “ ” ;
	price = 0;
}
Books::Books (string bookId, string bookName, char bookType, float price);
{
	bookId = bookId;
	bookName = bookName;
	bookType = bookType;
	price = price;
}
void Books::addBooks() {}
void Books::removeBooks() {}
void Books::updateCollections() {}
void Books::searchBooks() {}
void browseBooks() {}
Books::~Books() {}