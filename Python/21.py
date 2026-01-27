#ques 1
# word = input("Enter a word: ")
# reversed_word = ""

# for i in range(len(word) - 1, -1, -1):
#     reversed_word += word[i]

# print("Reversed word:", reversed_word)

#ques 2
# n=int(input("enter the no of elements in list"))
# a=[]
# eve=[]
# odd=[]
# for i in range(n):
#     b=int(input("enter the elements"))
#     a.append(b)
# for i in a:
#     if i>0:
#         eve.append(i)
#     else:
#         odd.append(i)
# print(eve)
# print(odd)

num = int(input("Enter a number: "))
original = num
rev = 0

while num > 0:
    digit = num % 10
    rev = rev * 10 + digit
    num = num // 10

if rev == original:
    print("Palindrome number")
else:
    print("Not a palindrome number")
