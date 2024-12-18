#include <iostream>
#include <string>
using namespace std;
struct Item {
    int number;
    string name;
    int price;
};
class Restaurant{
private:
    Item menu[4];
    int orders[10][2];
    int orderCount = 0;
public:
    Restaurant() {
        menu[0] = {1, "Paneer Pakoda", 220};
        menu[1] = {2, "Palak Paneer", 170};
        menu[2] = {3, "Veg Burger", 110};
        menu[3] = {4, "Masala Dosa", 90};
    }
    void displayMenu() {
        cout << "\n--- Menu ---\n";
        for (int i = 0; i < 4; i++) {
            cout << menu[i].number << ". " << menu[i].name << " - " << menu[i].price << " Rs\n";
        }
    }
    void orderDish() {
        int dishNumber, quantity;
        int validDish = 0;  
        cout << "Enter Dish Number: ";
        cin >> dishNumber;
        cout << "Enter Quantity: ";
        cin >> quantity;
        for (int i = 0; i < 4; i++) {
            if (menu[i].number == dishNumber) {
                orders[orderCount][0] = dishNumber;
                orders[orderCount][1] = quantity;
                orderCount++;
                cout << "Order confirmed for " << menu[i].name << " x" << quantity << "\n";
                validDish = 1;  
                break;
            }
        }
        if (validDish == 0) {
            cout << "Invalid Dish Number.\n";
        }
    }
    void showOrders() {
        cout << "\n--- Current Orders ---\n";
        int total = 0;
        for (int i = 0; i < orderCount; i++) {
            for (int j = 0; j < 4; j++) {
                if (menu[j].number == orders[i][0]) {
                    int amount = menu[j].price * orders[i][1];
                    total += amount;
                    cout << menu[j].name << " x" << orders[i][1] << " = " << amount << " Rs\n";
                    break;
                }
            }
        }
        cout << "Total: " << total << " Rs\n";
    }
    void makeBill() {
        int total = 0;
        for (int i = 0; i < orderCount; i++) {
            for (int j = 0; j < 4; j++) {
                if (menu[j].number == orders[i][0]) {
                    total += menu[j].price * orders[i][1];
                    break;
                }
            }
        }
        double gst = total * 0.18;
        double totalWithGST = total + gst;
        cout << "\n--- Bill ---\n";
        for (int i = 0; i < orderCount; i++) {
            for (int j = 0; j < 4; j++) {
                if (menu[j].number == orders[i][0]) {
                    cout << menu[j].name << " x" << orders[i][1] << " = " << menu[j].price * orders[i][1] << " Rs\n";
                    break;
                }
            }
        }
        cout << "GST (18%): " << gst << " Rs\n";
        cout << "Total with GST: " << totalWithGST << " Rs\n";
        cout << "\nThank you for visiting!\n";
    }
};
int main() {
    Restaurant restaurant;
    int choice;
    while (true) {
        cout << "\n1. View Menu\n2. Order Dish\n3. View Orders\n4. Make Bill\n0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                restaurant.displayMenu();
                break;
            case 2:
                restaurant.orderDish();
                break;
            case 3:
                restaurant.showOrders();
                break;
            case 4:
                restaurant.makeBill();
                break;
            case 0:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }
    return 0;
}