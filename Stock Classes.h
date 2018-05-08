class Company
{
	private:
	std::string name;
	BST* buyList;
	BST* sellList;
	
	public:
	void findData (std::string a)
	void pullData (BST* &a, Customer &b)
	void pushData (BST* &a, Customer b)
};



class Customer 
{
	std::string name;
	std::int quantity;
	std::double price;
	std::string BuyOrSell;
};



struct BST*
{
	Customer a;
	BST* left;
	BST* right;
	
};



// Store companies in a vector
// i.e. Vector<Company> Stocks;