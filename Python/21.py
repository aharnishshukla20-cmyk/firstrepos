# #ques 3
# n=int(input("enter the number of elements"))
# num=[]
# for i in range(n):
#     b=int(input("enter the element"))
#     num.append(b)
# for i in num:
#     if i<0:
#         break
# print(num)


# numbers = [10, 20, 0, 5, 0, 25]
# divisor = 5

# for num in numbers:
#     # Short-circuit logic prevents division by zero
#     if num != 0 and divisor / num > 0:
#         print(f"{divisor} / {num} = {divisor / num}")
#     else:
#         print(f"Cannot divide by {num}")

# while True:
#     user_input = input("Enter something (type 'exit' to stop): ")

#     if user_input.lower() == "exit":
#         print("Program stopped.")
#         break

#     print(f"You entered: {user_input}")



# while True:
#     print("\n---- MENU ----")
#     print("1. Addition")
#     print("2. Subtraction")
#     print("3. Multiplication")
#     print("4. Exit")

#     choice = input("Enter your choice (1-4): ")

#     if choice == "4":
#         print("Exiting program. Bye!")
#         break

#     if choice not in ("1", "2", "3"):
#         print("Invalid choice! Try again.")
#         continue

#     a = float(input("Enter first number: "))
#     b = float(input("Enter second number: "))

#     if choice == "1":
#         print("Result:", a + b)

#     elif choice == "2":
#         print("Result:", a - b)

#     elif choice == "3":
    #         print("Result:", a * b)




