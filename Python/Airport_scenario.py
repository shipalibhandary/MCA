#python program for the given scenarion.
#At an airport a traveller is allowed entry into the flight only if he clears the following checks:
#a) Baggage Check
#b) Immigration Check
#c) Security Check

def chk_baggage(baggage_amt):
    if baggage_amt>=0 and baggage_amt<=40:
        return True
    else:
        return False

def chk_immigration(exp_year):
    if exp_year>=2001 and exp_year<=2025:
        return True;
    else:
        return False
def chk_noc(noc_status):
    if noc_status=="Yes":
        return True
    else:
        return False
        
baggage_amt=int(input("Enter the baggage amount:"))
exp_year=int(input("Enter the year:"))
noc=input("Enter the noc status:")

if chk_baggage(baggage_amt) and chk_immigration(exp_year) and chk_noc(noc_status):
    print("Allowed to board")
else:
    print("Not allowed")

