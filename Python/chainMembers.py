
class Member:
    def __init__(self, name: str, amount: int, hasChildren=False):
        self.name = name
        self.amount = amount
        self.hasChildren = hasChildren
        self.children: list[Member] = []


name = input("Enter parent-member name: ")
choice = input(f"Does {name} have child members [y/n]: ")
head = Member(name, 0, True if choice == "y" else False)


def getChildDetails(node):
    q = [node]
    while len(q):
        cur = q.pop()
        if cur.hasChildren:
            childrenNames = input(f"Enter children of {cur.name}: ").replace(
                " ", "").split(",")

            for childName in childrenNames:
                choice = input(f"Does {childName} have child members [y/n]: ")
                member = Member(childName, 0, True if choice == "y" else False)
                cur.children.append(member)
                q.append(member)


def setAmount(node):
    if not node.hasChildren:
        node.amount = 250
        return

    for child in node.children:
        node.amount += 500
        setAmount(child)


getChildDetails(head)


def printTree(node, level):
    if not node:
        return
    print("   "*level, node.name, node.amount)
    for child in node.children:
        printTree(child, level+1)


printTree(head, 0)
