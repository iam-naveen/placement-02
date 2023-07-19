def calc(a, op, b):
    if op == "+":
        return a + b
    elif op == "-":
        return a - b
    elif op == "*":
        return a * b
    elif op == "/":
        return a / b


operations = {"+", "-", "*", "/"}
exp = []


# Program Starts Here


# taking input
input = input("Enter the expression: ")

# converting input to list of numbers and operators
fromIndex = 0
for i, n in enumerate(input):
    if not n.isdigit():  # checking if the n is an operator
        num = int(input[fromIndex:i])
        exp.append(num)  # adding number to the list
        exp.append(n)  # adding operator to the list
        fromIndex = i+1
    if i == len(input)-1:
        exp.append(input[fromIndex:])  # adding last number to the list

print()

i = -1
while len(exp) > 1:

    i += 1  # move position

    # checking if the current element is an operator
    if exp[i] in operations:
        a = int(exp[i-1])  # first number
        b = int(exp[i+1])  # second number
        operator = exp[i]  # operator
        res = calc(a, operator, b)

        print(f"{a} {operator} {b} = {res}")

        exp[i-1] = res  # replacing first number with result
        exp.pop(i)  # removing operator
        exp.pop(i)  # removing second number

        i = -1  # reset position

# printing the result
print(f"\nThe Result is {exp[0]}")
