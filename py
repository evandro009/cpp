

def safe_divide(numerator,denominator):
    try:
        result = numerator /denominator
        return result
    except ZeroDivisionError:
        print("Error: Cannot divide byzero.")
        return None
numerator=int(input("Enter the numerator value:- "))
denominator=int(input("enter the denominator value:-"))    
print(safe_divide(numerator,denominator))

    
