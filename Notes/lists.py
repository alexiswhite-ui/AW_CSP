numbers = [3,67,89,1000,3456738765,26,354,48565,232,152,25,2,5,6,5,9]
names = ["Alex", "Ally", "Max", "Emily", "Kambree", "Kynlee", "Vienna"]

names[0] = "Eric"
names.append("Ella") #adds to end of the list
index = names.index("Ally")
names.pop(index)
print(len(names))
print(names)

for name in names:
    print(f"Hello {name}")

for number in numbers:
    print(f"{number} - 10 = {number-10}")

for i in range(20):
    print(f"this is the {i} iteration of this loop")