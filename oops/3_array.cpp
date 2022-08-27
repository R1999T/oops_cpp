// cpp object memory allocation and using array in class

#include <iostream>
using namespace std;

class Shop
{
    int item_id[100];
    int item_price[100];
    int counter; // note: extra member with an inclass initializer must be constant(static const int counter = 0 is correct)

public:
    void init_counter(void) { counter = 0; }
    void set_price(void);
    void display_price_items(void)
    {
        cout << "Item ID    Item price"<<endl;
        for (int i = 0; i < counter; i++)
        {
            cout << item_id[i] << "        " << item_price[i]<<endl;
        }
    }
};

void Shop ::set_price(void)
{
    cout << "enter Id: " << counter + 1 << endl;
    cin >> item_id[counter];
    cout << "enter the price of the item: " << endl;
    cin >> item_price[counter];
    counter++;
}



int main()
{
    Shop one;
    int number_of_items = 2;
    for (int i = 0; i < number_of_items; i++)
    {
        one.set_price();
    }

    //single product id and price
    one.display_price_items();
    

    return 0;
}