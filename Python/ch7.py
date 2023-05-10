# 1. จงเขียนโค้ด โดยกำหนดตัวแปรสตริงค์ newton_quote เก็บคำพูดของเซอร์ไอแซกนิวตัน
# import random # random คือโมดูลที่สามารถสุ่มค่าต่างๆ ที่เรากำหนดไว้ได้ เช่น ค่าตัวเลขระหว่าง 1-100

# number = random.randint(0, 100) # สร้างตัวเลขสุ่มระหว่าง 0 ถึง 100.
# print("ลองทายตัวเลขปริศนาระหว่าง 0 ถึง 100")
# print(number)

# ### BEGIN SOLUTION
# guess=int(input("ขอทายว่าตัวเลขตัวเลขปริศนาคือ "))
# while guess!=number:
#     while guess<number: 
#         print("ค่าที่คีย์ต่ำเกินไป")
#         guess=int(input("ขอทายว่าตัวเลขตัวเลขปริศนาคือ "))
#     while guess>number:
#         print("ค่าที่คีย์สูงเกินไป")
#         guess=int(input("ขอทายว่าตัวเลขตัวเลขปริศนาคือ "))    
# print("ถูกต้อง", "ตัวเลขปริศนาคือ", guess)
### END SOLUTION







# CHAT GPT
# Define the function f(x) and its derivative f'(x)
# def f(x):
#     return x**2 + 6*x + 5

# def f_prime(x):
#     return 2*x + 6

# # Set the initial guess for the root
# x0 = 1.0

# # Set a tolerance for the error and a maximum number of iterations
# tolerance = 1e-6
# max_iterations = 100

# # Initialize the iteration counter and the error
# iteration = 0
# error = abs(f(x0) / f_prime(x0))

# # Start the loop
# while error > tolerance and iteration < max_iterations:
#     x1 = x0 - f(x0) / f_prime(x0)  # Compute the next approximation of the root
#     error = abs((x1 - x0) / x1)    # Compute the relative error
#     x0 = x1                        # Update the approximation of the root
#     iteration += 1                 # Increment the iteration counter

# Print the result
# if iteration == max_iterations:
#     print("Failed to converge to a root within the maximum number of iterations.")
# else:
#     print("The root is approximately:", x0)


a = float(input(">>"))
x0 = a

error = 1e-10
f= abs((x0**2+6*x0+5)/(2*x0+6))

while f > error:
    x1 = x0 - ((x0**2+6*x0+5)/(2*x0+6))
    f = abs((x1-x0)/x1)
    x0=x1
print( "sqrt(",a,") =", x0 )
