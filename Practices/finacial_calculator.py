# AW finacial calculator

income = float(input("What is your monthly income: $"))

rent = float(input("What is your monthly rent/mortgage: $"))

utilities = float(input("What is your monthly untilities: $"))
                  
food = float(input("What is your monthly groceries: $"))

car = float(input("What is your monthly transportation: $"))

savings =  round(income*.1, 2)

print(income, rent, utilities, food, car)

print("your rent is $", rent, "and that is", (rent/income)*100), 2), "% of your income")

print("your utilities are $", utilities, "and that is", (utilities/income)*100),  2), "% of your income") 

print("your groceries are $", food, "and that is", (food/income)*100), 2), "% of your income")

print("your transportations are $", car, "and that is", (car/income)*100), 2), "% of your income")

print("you should be saving $", savings)

print("you will now have $", (income-food-car-utilities-rent-savings), "left to spend!")