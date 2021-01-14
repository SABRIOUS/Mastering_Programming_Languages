# you have and integer number represent days
# and we want to get Year Month Day

n = int(input("Enter a number: "))

years = n // 360
reminder_days = n % 360
months = reminder_days //30
days = reminder_days % 30
print("Years",years)
print("Months",months)
print("Days",days)
