


#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

struct FoodItem {
	string name;
	int quantity;
	float price;
	
};

class OrderManagement{
	private:
		vector<FoodItem> items;
	public:
		void addOrder(const string& name, int quantity, double price) {
			items.push_back({name, quantity, price});
		}
		void updateQuantity(cons string& name , int newQuantity) {
			auto it = find_if(items.begin() , items.end() , )
		}
};
