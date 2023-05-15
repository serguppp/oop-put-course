#include <iostream>
#include <vector>

class Product {
private:
	std::string name;
	double price;
	int productID;

public:
	Product(std::string name, double price, int productID) : name(name), price(price), productID(productID) {}
	
	std::string getName() { return this->name; }
	double getPrice() { return this->price; }
	int getProductID() { return this->productID;  }
};

class Customer {
private:
	std::string name;
	std::string email;
	int customerID;

public:
	Customer(std::string name, std::string email, int customerID) : name(name), email(email), customerID(customerID) { }

	std::string getName() { return this->name; }
	std::string getEmail() { return this->email; }
	int getCustomerID() { return this->customerID; }
};

class Order {
private:
	int orderID;
	Customer customer;
	std::vector<Product> products;
public:
	Order(int orderID, Customer customer) : orderID(orderID), customer(customer) {}

	void addProduct(Product product) {
		products.push_back(product);
	}

	int getOrderID() { return this->orderID;  }

	Customer getCustomer() { return this->customer;  }

	double calculateCost() {
		double cost = 0.0;
		for (Product product : products) {
			cost += product.getPrice();
		}
		return cost;
	}
};

int main() {
	Product apple("Apple", 3, 1);
	Product banana("Banana", 5, 2);
	Product watermelon("Watermelon", 10, 3);
	Product lemon("Lemon", 4, 4);

	Customer customer("Mike", "Mike@gmail.com", 1);

	Order order(1, customer);
	order.addProduct(apple);
	order.addProduct(banana);
	order.addProduct(watermelon);
	order.addProduct(lemon);

	std::cout << "Order Details:" << std::endl;
	std::cout << "Order ID: " << order.getOrderID() << std::endl;
	std::cout << "Customer ID: " << order.getCustomer().getCustomerID() << std::endl;
	std::cout << "Customer Email: " << order.getCustomer().getEmail() << std::endl;
	std::cout << "Customer Name: " << order.getCustomer().getName() << std::endl;
	std::cout << "Total Cost: $" << order.calculateCost() << std::endl;

	return 0;
}
