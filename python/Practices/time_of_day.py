# AW time of day

time = int(input("What is the hour in military time: "))

if time < 12:
    print("Good Morning!")
elif time > 12 and time < 17:
    print("Good Afternoon!")
elif time > 17:
    print("Good Evening!")
