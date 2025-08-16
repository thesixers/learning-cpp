sales = 95000
state_tax = 4/100
county_tax = 2/100

total_tax_paid = sales * (state_tax + county_tax)
state_tax_paid = sales * state_tax
county_tax_paid = sales * county_tax


def check():
    if 5 == 3:
        print("wrong")
    else:
        print("correct")
    return 0

print([x for x in range(1, 21) if x % 2 == 0])
c = 3
print("even" if c % 2 == 0 else "odd")

print(f"Sales: ${sales}")
print(f"State tax paid: ${state_tax_paid}")
print(f"County tax paid: ${county_tax_paid}")
print(f"Total tax paid: ${total_tax_paid}")
check()