# AW p7 finacial calculator



def payment(cost):
    return float( input(f"What is your monthly {cost}"))


income = payment("income: ")
rent = payment("rent: ")
utilities = payment("utilities: ")
food = payment("food: ")
car = payment("transpertation: ")
savings = income/10
total = car + food + utilities + rent + savings


def percent(amount):
    return round(amount/income*100)

print("Your rent is $", rent, "and that is", percent(rent), "% of your income.")

print("Your utilities is $", utilities, "and that is", round(utilities/income*100), "% of your monthly income.")

print("Your food is $", food, "and that is", round(food/income*100), "% of your monthly income.")

print("Your transpertation is $", car, "and that is", round(car/income*100), "% of your monthly income.")

print("You shoudl save $",savings,", this is 10%of your monthly income.")

print("You will have $", income-total, "to use as spending money each month!")