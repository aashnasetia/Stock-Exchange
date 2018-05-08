class Company
{
	private:
	std::string name;
	BST* buyList; // Max sorted heap
	BST* sellList; // Min sorted heap
	
	public:
	void findData (std::string a);
	void minSort (BST* &a, Customer b);
	void maxSort (BST* &a, Customer b);
	void pullData (BST* &a, Customer &b);
	void pushData (BST* &a, Customer b);
	void Create(std::string n)
	{
		name = n;
		buyList* = new BST;
		sellList* = new BST;
	}
};



class Customer 
{
	private:
	std::string name;
	std::string pass;
	std::int quantity;
	std::double price;
	std::int BuyOrSell; // 0 for buy, 1 for sell
	
	public:
	std::string getName() {return name;}
	std::string getPass() {return pass;}
	std::int getQuantity() {return quantity;}
	std::double getPrice() {return price;}
	std::string getType() {return BuyOrSell;}
	
	// Add input validation to setQuantity, and setPrice
	void setName(std::string a) 
	{
		name = a;
	}
	void setQuantity(std::int a)
	{
		quantity = a;
	}
	void setPrice(std::double a) 
	{
		price = a;
	}
	void setType(std::int a)
	{
		while ((!a)||(a<0)||(a>1))
		{
			if(std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore(numeric_limits<streamsize>::max(),'\n');
			}
			std::cout << "Please enter a valid value (0: Buy, 1: Sell) : ";
			std::cin >> a;
			cin.ignore();
		}
		BuyOrSell = a;
	}	
};



class BST*
{
	private:
	Customer a;
	BST* left;
	BST* right;
	
	public:
	void minSort (BST* &a, Customer b);
	void maxSort (BST* &a, Customer b);
	void Insert (BST* &a, Customer b);
	bool Find (BST* a, Customer b);
};

// Input validation code, replace parameters with relevant values
/* 
	while ((!a)||(a<0)||(a>1))
		{
			if(std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore(numeric_limits<streamsize>::max(),'\n');
			}
			std::cout << "Please enter a valid value (0: Buy, 1: Sell) : ";
			std::cin >> a;
			cin.ignore();
		}
*/


// Store companies in a vector
// i.e. Vector<Company> Stocks;