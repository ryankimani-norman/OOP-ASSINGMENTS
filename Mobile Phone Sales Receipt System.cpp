#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string customerName, phoneModel;
    int quantityBought;
    double pricePerPhone, totalSalesAmount;

    // Input
    cout << "Enter Customer Name: ";
    getline(cin, customerName);

    cout << "Enter Phone Model Purchased: ";
    getline(cin, phoneModel);

    cout << "Enter Quantity Bought: ";
    cin >> quantityBought;

    cout << "Enter Price Per Phone: ";
    cin >> pricePerPhone;

    // Processing
    totalSalesAmount = quantityBought * pricePerPhone;

    // Output Receipt
    cout << "\n====================================";
    cout << "\n       MOBILE PHONE RECEIPT";
    cout << "\n====================================";
    cout << "\nCustomer Name      : " << customerName;
    cout << "\nPhone Model        : " << phoneModel;
    cout << "\nQuantity Bought    : " << quantityBought;
    cout << "\nPrice Per Phone    : " << fixed << setprecision(2)
         << pricePerPhone;
    cout << "\nTotal Sales Amount : " << totalSalesAmount;
    cout << "\n====================================";

    return 0;
}