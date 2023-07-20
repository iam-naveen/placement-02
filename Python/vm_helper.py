class Item:
    def __init__(self, name: str, price: int, quantity: int):
        self.name = name
        self.price = price
        self.quantity = quantity


class Category:
    def __init__(self, name: str, items: list[Item]):
        self.name = name
        self.options = items


class Bill:
    def __init__(self, order: list[Category]):
        self.order = order
        self.total = 0.0
        self.tax = 0

    def generateBill(self):
        print("\n\n============================================")
        print("                   BILL                     ")
        print("============================================")
        for category in self.order:
            for item in category.options:
                if item.quantity > 0:
                    print(f"{item.price} x {item.quantity}\t{item.name}")
                    self.total += item.price * item.quantity
        self.tax = self.total * 0.05


categories = [
    Category("Coffee", [
        Item("Espresso Coffee", 30, 0),
        Item("Cappuccino Coffee", 50, 0),
        Item("Latte Coffee", 70, 0),
    ]),
    Category("Soups", [
        Item("Hot and Sour Soup", 50, 0),
        Item("Veg Corn Soup", 60, 0),
        Item("Tomato Soup", 50, 0),
        Item("Spicy Tomato Soup", 70, 0),
    ]),
    Category("Tea", [
        Item("Plain Tea", 30, 0),
        Item("Assam Tea", 40, 0),
        Item("Ginger Tea", 50, 0),
        Item("Cardamom Tea", 70, 0),
        Item("Masala Tea", 80, 0),
        Item("Lemon Tea", 80, 0),
        Item("Green Tea", 90, 0),
        Item("Organic Darjeeling Tea", 120, 0),
    ]),
    Category("Beverages", [
        Item("Hot Chocolate Drink", 70, 0),
        Item("Badam Drink", 80, 0),
        Item("Badam-Pista Drink", 90, 0),
    ])
]