#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Item {
  protected:
    string modelName;
    int price;
    string itemId; //“modelName-seqNumber”
    static int seqNumber; // initialValue = 1
  public:
    const int sizeorspeed;
    Item(const string& _modelName, const int _price, const int _sizeorspeed): modelName(_modelName), price(_price),  sizeorspeed(_sizeorspeed) {
      string str = to_string(seqNumber);
      string str1=modelName;
      itemId = str1.append("-").append(str);
      seqNumber++;}
    void print(){
      cout<<modelName<<", "<< itemId <<", "<<price<<", "<<sizeorspeed <<endl;
    }
};
int Item::seqNumber=1;

class Monitor : public Item {
	  const int size;
  public:
    Monitor(const string& _modelName, const int _price, const int _size): Item(_modelName, _price,_size), size(_size) {}
    using Item::Item;
};
class CPU : public Item {
	  const int speed;
  public:
    CPU(const string& _modelName, const int _price, const int _speed): Item(_modelName, _price, _speed),speed(_speed){}
    using Item::Item;
};
class ItemList {
  	vector<Item*> items;
  public:
    void addItem(Item* const c) {
      items.push_back(c);
    }
    void removeItem(string item){
      int a= item.back()-'0'-1;
      items.erase(items.begin()+a);
    }
    void print() {
      int i;
      for (i=0;i< items.size();i++){
        items[i]->print();  
      }
    }
};

int main() {
	ItemList list1;
	{	
		CPU cpu1("Intel", 200, 5); // modelName, price, speed
		CPU cpu2("Intel", 300, 7);
		list1.addItem(&cpu1); list1.addItem(&cpu2);
		Monitor monitor1("Samsung", 1000, 40); //modelName, price, size
		list1.addItem(&monitor1);
	}
	cout << "Section 1" << endl;
	list1.print();
	{
		ItemList list2(list1);
		cout << "Section 2" << endl;
		list2.print();
		list2.removeItem("Intel-2");
		cout << "Section 3" << endl;
		list2.print();
  }
	{	
		ItemList list3;
		list3 = list1;
	}
	cout << "Section 4" << endl;
	list1.print();
}