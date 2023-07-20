
count = int(input("Enter number of Candies in the JAR: "))
min = int(input("Enter minimum value: "))

sold = int(input("Enter the number of Candies sold: "))

print(
    f"Number of candies in the jar are {count-sold if count-sold >= min else count}")
