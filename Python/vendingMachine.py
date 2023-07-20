
from vm_helper import *

print("Welcome to the Vending Machine")
print("============================================")

while True:

    print("\nPlease select a category from the following: ")
    print("============================================")
    for i, category in enumerate(categories):
        print(f"{i+1}. {category.name}")
    print(f"{len(categories)+1}. Exit")
    print("============================================")

    choice = int(input("Enter your choice: "))
    if choice < 1 or choice > len(categories)+1:
        print("Invalid choice")
        continue

    if choice == len(categories)+1:
        break

    options = categories[choice-1].options

    while True:
        print("\nPlease select an item from the following: ")
        print("============================================")
        for i, item in enumerate(options):
            print(f"{i+1}. {item.name} - Rs {item.price}")
        print(f"{len(options)+1}: Go back")
        print(f"{len(options)+2}. Proceed to Pay")
        print("============================================")

        ch = int(input("Enter your choice: "))
        if ch < 1 or ch > len(options)+2:
            print("Invalid choice")
            continue

        if ch == len(options)+1:
            break

        if ch == len(options)+2:
            bill = Bill(categories)
            bill.generateBill()
            print("============================================")
            print(f"Your bill amount is {bill.total} + {bill.tax} (tax)")
            print("============================================")
            c = input("Are you a student or faculty member?[y/n]: ")
            if c == "y":
                bill.total -= bill.total * 0.1
                print("============================================")
                print("Ten percent discount applied")
                print(f"Your bill amount is {bill.total} + {bill.tax} (tax)")
                print("============================================")
            print("Please select a payment option: ")
            print("1. Card")
            print("2. Cash")
            print("3. Sodexo")
            print("4. Credit Card")
            print("============================================")
            ch = int(input("Enter your choice: "))
            if ch < 1 or ch > 4:
                print("Invalid choice")
                continue

            if ch != 2:
                print("Please enter your card details: ")
                print("============================================")
                cardNo = input("Enter your card number: ")
                pin = input("Enter your card pin: ")
                print("============================================")
                if cardNo != "123456789012" or pin != "1234":
                    print("Invalid card details")
                    continue

            print("Payment successful")
            break

        options[ch-1].quantity += 1
        print("Item added to cart")

print("Thank you for using the Vending Machine")
