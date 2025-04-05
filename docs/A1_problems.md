# TOI-Zero 68 A1 Problems

## แนวคิดโจทย์ A1
ปล. อ่านเป็นแนวทางนะครับ อ้างอิงการอธิบายตามโค้ดตัวอย่างที่ให้ในคอร์ส

### 001 - String Operations
โจทย์เกี่ยวกับการจัดการ string ครับ
- รับชื่อ-นามสกุล แล้วแสดงผล "Hello [ชื่อ] [นามสกุล]"
- ตัดเอา 2 ตัวอักษรแรกของทั้งชื่อและนามสกุลมาต่อกัน
ง่ายๆ แค่ใช้ string operations พื้นฐาน

แนวคิด:
```python
# รับ input แบบ string na krubb
first_name, last_name = input().split()

# แสดงผลตามรูปแบบ
print(f"Hello {first_name} {last_name}")

# cut 2 ตัวอักษรแรกของแต่ละชื่อ
result = first_name[:2] + last_name[:2]
print(result)
```

### 002 - Coin Change
โจทย์เกี่ยวกับการแลกเงินเหรียญครับ
- รับจำนวนเงินมา แล้วแลกเป็นเหรียญ 10, 5, 2, 1 บาท
- แสดงผลว่าใช้เหรียญแต่ละชนิดกี่เหรียญ
ใช้การหารและ mod เพื่อคำนวณจำนวนเหรียญแต่ละชนิด คือจริง ๆ จะไม่ใช้ list ก็ได้แหละ

แนวคิด:
```python
money = int(input())
coins = [10, 5, 2, 1]

for coin in coins:
    count = money // coin  # หาจำนวนเหรียญที่ใช้ได้
    money %= coin         # หาเศษที่เหลือ
    print(f"{coin} = {count}")
```

### 003 - Basic Math
โจทย์เกี่ยวกับการคำนวณพื้นฐาน
- รับตัวเลข 2 จำนวน
- หาผลบวก ผลลบ ผลคูณ และผลหาร
ฝึกใช้ operators พื้นฐานในการคำนวณ

แนวคิด:
```python
a, b = map(int, input().split())
print(f"{a} + {b} = {a + b}")
print(f"{a} - {b} = {a - b}")
print(f"{a} * {b} = {a * b}")
print(f"{a} / {b} = {a / b}")
```

### 004 - Pattern Printing
โจทย์เกี่ยวกับการพิมพ์รูปแบบ
- รับจำนวนบรรทัด
- พิมพ์รูปดาวตามจำนวนที่กำหนด
ฝึกการใช้ loop และการพิมพ์รูปแบบ

แนวคิด:
```python
n = int(input())
for i in range(n):
    # พิมพ์ดาวตามจำนวนบรรทัด
    print('*' * (i + 1))
```

### 005 - Number Sequence
โจทย์เกี่ยวกับลำดับตัวเลข
- รับจำนวน n
- สร้างลำดับตัวเลข 1 ถึง n
ฝึกการใช้ loop และการจัดการลำดับ

แนวคิด:
```python
n = int(input())
# ใช้ list comprehension สร้างลำดับได้ ซึ่งง่ายกว่าวนลูปนะงับ
numbers = [str(i) for i in range(1, n + 1)]
print(' '.join(numbers))
```

### 006 - String Manipulation
โจทย์เกี่ยวกับการจัดการ string
- รับข้อความมา
- แปลงเป็นตัวพิมพ์ใหญ่/เล็ก
ฝึกการใช้ string functions

แนวคิด:
```python
text = input()
# ใช้ string methods
print(text.upper())  # ตัวพิมพ์ใหญ่
print(text.lower())  # ตัวพิมพ์เล็ก
```

### 007 - Array Operations
โจทย์เกี่ยวกับการจัดการ array
- รับ array มา
- หาค่า max, min, sum
ฝึกการใช้ array และ loop

แนวคิด:
```python
# รับ array แบบ space-separated
arr = list(map(int, input().split()))
print(f"max = {max(arr)}")
print(f"min = {min(arr)}")
print(f"sum = {sum(arr)}")
```

### 008 - Sorting
โจทย์เกี่ยวกับการเรียงลำดับ
- รับ array ตัวเลขมา
- เรียงจากน้อยไปมาก
ฝึกการใช้ sorting algorithm

แนวคิด:
```python
arr = list(map(int, input().split()))
# ใช้ built-in sort
arr.sort()
print(' '.join(map(str, arr)))
```

### 009 - Search
โจทย์เกี่ยวกับการค้นหา
- รับ array และค่าที่ต้องการค้นหา
- หาตำแหน่งของค่าที่ต้องการ
ฝึกการใช้ search algorithm

แนวคิด:
```python
arr = list(map(int, input().split()))
target = int(input())
# ใช้ linear search
for i, num in enumerate(arr):
    if num == target:
        print(f"Found at index {i}")
        break
```

### 010 - Matrix Operations
โจทย์เกี่ยวกับการจัดการ matrix
- รับ matrix ขนาด n x n
- หาผลรวมของแต่ละแถว/หลัก
ฝึกการใช้ nested loops

แนวคิด:
```python
n = int(input())
matrix = []
for _ in range(n):
    row = list(map(int, input().split()))
    matrix.append(row)

# หาผลรวมแต่ละแถว
for row in matrix:
    print(f"Row sum: {sum(row)}")
```

### 011 - Run Length Encoding
โจทย์เกี่ยวกับการบีบอัดข้อมูล
- รับ string มา
- นับจำนวนตัวอักษรที่ซ้ำกันติดต่อกัน
- แสดงผลเป็นตัวอักษรตามด้วยจำนวนครั้งที่ซ้ำ
ฝึกการใช้ loop และการนับ

แนวคิด:
```python
text = input()
count = 1
result = ""

for i in range(1, len(text)):
    if text[i] == text[i-1]:
        count += 1
    else:
        result += text[i-1] + str(count)
        count = 1

# เพิ่มตัวสุดท้าย
result += text[-1] + str(count)
print(result)
```

### 012 - Number Reversal
โจทย์เกี่ยวกับการพลิกตัวเลข
- รับตัวเลขและเครื่องหมาย + หรือ *
- พลิกตัวเลขแล้วนำมาคำนวณตามเครื่องหมาย
ฝึกการใช้ string manipulation และการคำนวณ

แนวคิด:
```python
num, op = input().split()
reversed_num = num[::-1]  # พลิกตัวเลข

if op == '+':
    result = int(num) + int(reversed_num)
else:
    result = int(num) * int(reversed_num)

print(f"{num} {op} {reversed_num} = {result}")
```

### 013 - Palindrome Check
โจทย์เกี่ยวกับการตรวจสอบพาลินโดรม
- รับข้อความมา
- ตรวจสอบว่าเป็นพาลินโดรมหรือไม่
ฝึกการใช้ string comparison

แนวคิด:
```python
text = input()
# เปรียบเทียบตัวอักษรจากหน้าและหลัง
is_palindrome = text == text[::-1]
print("yes" if is_palindrome else "no")
```

### 014 - Prime Numbers
โจทย์เกี่ยวกับจำนวนเฉพาะ
- รับจำนวน n
- หาจำนวนเฉพาะตั้งแต่ 1 ถึง n
ฝึกการใช้ loop และการตรวจสอบจำนวนเฉพาะ

แนวคิด:
```python
def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return False
    return True

n = int(input())
primes = [i for i in range(1, n + 1) if is_prime(i)]
print(' '.join(map(str, primes)))
```

### 015 - Fibonacci Sequence
โจทย์เกี่ยวกับลำดับฟีโบนักชี
- รับจำนวน n
- สร้างลำดับฟีโบนักชี n ตัวแรก
ฝึกการใช้ loop และการคำนวณลำดับ

แนวคิด:
```python
n = int(input())
fib = [0, 1]
for i in range(2, n):
    fib.append(fib[i-1] + fib[i-2])
print(' '.join(map(str, fib[:n])))
```

### 016 - String Pattern
โจทย์เกี่ยวกับรูปแบบข้อความ
- รับข้อความมา
- ตรวจสอบรูปแบบตามเงื่อนไขที่กำหนด
ฝึกการใช้ string manipulation

แนวคิด:
```python
text = input()
# ตรวจสอบรูปแบบตามเงื่อนไข
pattern = r'^[A-Z][a-z]*$'  # ตัวอย่าง pattern
import re
print("yes" if re.match(pattern, text) else "no")
```

### 017 - Number Base Conversion
โจทย์เกี่ยวกับการแปลงฐานตัวเลข
- รับตัวเลขฐาน 10
- แปลงเป็นฐานอื่นๆ ตามที่กำหนด
ฝึกการใช้การแปลงฐานตัวเลข

แนวคิด:
```python
n = int(input())
base = int(input())
# ใช้ built-in function
result = format(n, f'0{base}b')  # ตัวอย่างแปลงเป็นฐาน 2
print(result)
```

### 018 - String Matching
โจทย์เกี่ยวกับการจับคู่ข้อความ
- รับข้อความ 2 ข้อความ
- ตรวจสอบความสัมพันธ์ระหว่างข้อความ
ฝึกการใช้ string comparison

แนวคิด:
```python
text1, text2 = input().split()
# ตรวจสอบความสัมพันธ์
if text1 in text2:
    print("Substring")
elif text1 == text2[::-1]:
    print("Reverse")
else:
    print("Different")
```

### 019 - Number Factorization
โจทย์เกี่ยวกับการแยกตัวประกอบ
- รับตัวเลขมา
- แยกตัวประกอบทั้งหมด
ฝึกการใช้ loop และการหาร

แนวคิด:
```python
n = int(input())
factors = []
i = 2
while n > 1:
    while n % i == 0:
        factors.append(i)
        n //= i
    i += 1
print(' '.join(map(str, factors)))
```

### 020 - String Transformation
โจทย์เกี่ยวกับการแปลงข้อความ
- รับข้อความมา
- แปลงตามกฎที่กำหนด
ฝึกการใช้ string manipulation

แนวคิด:
```python
text = input()
# ตัวอย่างการแปลง
result = ''.join(c.upper() if c.islower() else c.lower() for c in text)
print(result)
```

### 021 - Leap Year Check
โจทย์เกี่ยวกับการตรวจสอบปีอธิกสุรทิน
- รับปีมา
- ตรวจสอบว่าเป็นปีอธิกสุรทิน (Leap year) หรือไม่ ใครไม่ทราบเงื่อนไขนี้ลองเสิร์ชดูใน google
ฝึกการใช้เงื่อนไขและการหาร

แนวคิด:
```python
year = int(input())
# เงื่อนไขปีอธิกสุรทิน
is_leap = year % 400 == 0 or (year % 4 == 0 and year % 100 != 0)
print("yes" if is_leap else "no")
```

### 022 - Zodiac Sign
โจทย์เกี่ยวกับการหาราศี
- รับวันและเดือนเกิด
- หาราศีตามวันเดือนปีเกิด
ฝึกการใช้เงื่อนไขและการเปรียบเทียบ

แนวคิด:
```python
day, month = map(int, input().split())
# ใช้ condition
if (month == 12 and day >= 22) or (month == 1 and day <= 19):
    print("capricorn")
elif (month == 1 and day >= 20) or (month == 2 and day <= 18):
    print("aquarius")
# ... เงื่อนไขอื่นๆ
```

### 023 - Number Game
โจทย์เกี่ยวกับเกมตัวเลข
- รับตัวเลขมา
- ทำตามกฎเกมที่กำหนดด
ฝึกการใช้ loop และการคำนวณ

แนวคิด:
```python
n = int(input())
while n != 1:
    if n % 2 == 0:
        n //= 2
    else:
        n = n * 3 + 1
    print(n, end=' ')
```

### 024 - String Game
โจทย์เกี่ยวกับเกมข้อความ
- รับข้อความมา
- ทำตามกฎเกมที่กำหนด
ฝึกการใช้ string manipulation

แนวคิด:
```python
text = input()
# ตัวอย่างกฎเกม
result = ''
for c in text:
    if c.isalpha():
        result += chr(ord('z') - (ord(c) - ord('a')))
    else:
        result += c
print(result)
```

### 025 - Number Puzzle
โจทย์เกี่ยวกับปริศนาตัวเลข
- รับตัวเลขมา
- แก้ปริศนาตามเงื่อนไขที่กำหนด
ฝึกการใช้ loop และการคำนวณ

แนวคิด:
```python
n = int(input())
# ตัวอย่างการแก้ปริศนา
result = 0
while n > 0:
    result = result * 10 + n % 10
    n //= 10
print(result)
```

### 026 - String Puzzle
โจทย์เกี่ยวกับปริศนาข้อความ
- รับข้อความมา
- แก้ปริศนาตามเงื่อนไขที่กำหนด
ฝึกการใช้ string manipulation

แนวคิด:
```python
text = input()
# ตัวอย่างการแก้ปริศนา
result = ''
for i in range(0, len(text), 2):
    result += text[i]
print(result)
```

### 027 - Number Magic
โจทย์เกี่ยวกับเวทมนตร์ตัวเลข
- รับตัวเลขมา
- ทำตามกฎเวทมนตร์ที่กำหนด
ฝึกการใช้ loop และการคำนวณ

แนวคิด:
```python
n = int(input())
# ตัวอย่างกฎเวทมนตร์
magic = 0
while n > 0:
    magic += n % 10
    n //= 10
print(magic)
```

### 028 - String Magic
โจทย์เกี่ยวกับเวทมนตร์ข้อความ
- รับข้อความมา
- ทำตามกฎเวทมนตร์ที่กำหนด
ฝึกการใช้ string manipulation

แนวคิด:
```python
text = input()
# ตัวอย่างกฎเวทมนตร์
magic = sum(ord(c) - ord('a') + 1 for c in text.lower() if c.isalpha())
print(magic)
```

### 029 - Number Challenge
โจทย์เกี่ยวกับการท้าทายตัวเลข
- รับตัวเลขมา
- แก้โจทย์ตามเงื่อนไขที่กำหนด
ฝึกการใช้ loop และการคำนวณ

แนวคิด:
```python
n = int(input())
# ตัวอย่างการท้าทาย
challenge = 0
for i in range(1, n + 1):
    if n % i == 0:
        challenge += i
print(challenge)
```

### 030 - String Challenge
โจทย์เกี่ยวกับการท้าทายข้อความ
- รับข้อความมา
- แก้โจทย์ตามเงื่อนไขที่กำหนด
ฝึกการใช้ string manipulation

แนวคิด:
```python
text = input()
# ตัวอย่างการท้าทาย
challenge = ''
for c in text:
    if c.isalpha():
        challenge += chr(ord('z') - (ord(c) - ord('a')))
    else:
        challenge += c
print(challenge)
``` 