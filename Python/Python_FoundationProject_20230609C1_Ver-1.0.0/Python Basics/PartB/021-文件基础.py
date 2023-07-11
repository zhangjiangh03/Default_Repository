"""
Version: 1.0
Author: 张江寒Zhang
Creation Date: 2023-07-07
Update Date: 2023-07-08
Update Log:
    - Update the code
"""

"""
test_file = open("files/test.txt", "r", encoding="UTF-8")
print(test_file.readline())
print(test_file.readline())
test_file.close()

with open("files/test.txt", "r", encoding="UTF-8") as flies:
    for line in flies:
        print(f"{line}")



with open("files/test.txt", "r", encoding="UTF-8") as flies:
    count = 0
    for line in flies:
        line = line.strip()
        words = line.split(" ")
        print(f"{words}")
        for word in words:
            for char in word:
               if char == "5":
                   count += 1
    print(count)
    
"""

# with open("files/test.txt", "w", encoding="UTF-8") as flies:
#     flies.write(input("请输入："))
#     flies.flush()

f = open("files/test.txt", "a", encoding="UTF-8")
f.write(input("请输入："))
f.flush()
f.close()