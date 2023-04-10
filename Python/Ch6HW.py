
# [HW] Ch6_Conditions(if_else)_v01
# 1 จงเขียนฟังก์ชั่นส่งค่าคืนกลับเป็นวันในสัปดาห์ get_day_week() ตาม Flowchart ต่อไปนี้ โดยกำหนดให้อาร์กิวเมนต์วันเดือนปีที่ส่งให้ฟังก์ชั่นที่เป็นตัวเลข

# เช่น ถ้าเป็น 5 พ.ค. 2022 ก็ให้กดคีย์เป็น

# 5 ⏎

# 5 ⏎

# 2022 ⏎

# (⏎ คือ ปุ่ม Enter (เอ็นเทอร์))


            # from datetime import datetime
            # from random import choice

            # def get_day_week(d, m, y):
            #     weekdays = ["Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"]

            #     if m < 3:
            #         y -= 1
            #         m += 12
            #     k = y % 100
            #     j = y // 100
                
            #     # w = ((d + ((13 * (m + 1)) // 5) + k + (k // 4) + (j // 4) + (5 * j)) % 7)-1
            #     w =((d+(26*(m+1)//10)+k+(k//4)+(j//4)+(5*j))%7)-1
                
            #     return weekdays[w]
            
            # d = int(input("Date  = "))
            # m = int(input("Month Number = "))
            # y = int(input("Year (A.D.) = "))
            # test_N = 10
            # print(get_day_week(d, m, y))
                
            # if (d >29 and m == 2):
            #     print ("error")
            # elif ( d>31 and m in (1, 3, 5, 7, 8, 10, 12)):
            #     print ("error")
            # elif ( d>30 and m in (4, 6, 9, 11)):
            #     print ("error")
            # else:
            #     for i in range(test_N):
            #         # สุ่มโดยเช็คปีว่าเป็นปี leap-year หรือไม่ และกำหนดจำนวนวันของแต่ละเดือน เพื่อไม่ให้วันที่เกิน 
            #         years = list(range(1950, 2101)) # years 1950~2100
            #         y = choice(years)
            #         # Check for leap-year
                    
            #         if (((y % 4 == 0) and (y % 100 != 0))) or (y % 400 == 0):
            #             leap_flag = True
            #         else:
            #             leap_flag = False

            #         # if y % 4 != 0:
            #         #   leap_flag=False
            #         # elif y % 100 != 0:
            #         #     leap_flag=True
            #         # elif y % 400 == 0:
            #         #     leap_flag=True
            #         # else:
            #         #     leap_flag=False  
                        
            #         months = list(range(1, 13)) # 12 months list
            #         m = choice(months)
                    
            #         if m in (1, 3, 5, 7, 8, 10, 12):
            #             m_length = 31
            #         elif m == 2:
            #             if leap_flag:
            #                 m_length = 29
            #             else:
            #                 m_length = 28
            #         else:
            #             m_length = 30


            #         dates = list(range(1, m_length+1)) 
            #         d = choice(dates)
            #         # print(dates)

            #         print('{}/{}/{}'.format(d, m, y), end=' ')
                    
            #         ans = datetime(y,m,d).date().strftime('%A')
            #         ans_flag = (get_day_week(d,m,y) == ans)
                    
            #         # print(ans)
            #         # print(type(ans))
            #         # print(get_day_week(d,m,y))
            #         # print(ans_flag)
                    
            #         print('-> {} \t {}'.format(d, ans_flag))

# 3. จงใช้เมธอดของสตริง สร้างฟังก์ชัน upside_down() โดยมีพารามิเตอร์ 1 ตัว คือ input_string เป็นตัวแปรเก็บข้อความภาษาอังกฤษใดๆ (ก่อนการกลับหัวกลับหาง) 
# และคืนค่ากลับเป็นข้อความที่กลับหัวกลับหางแล้ว กล่าวคือ เปลี่ยนตัวอักษร a เป็น z, เปลี่ยน b เป็น y ... เปลี่ยน y เป็น b, เปี่ยน z เป็น a (เฉพาะอักษรตัวเล็กเท่านั้น)

# ตัวอย่างการกลับหัวกลับหาง เช่น

# upside_down('abcdefghijklmnopqrstuvwxyz') --> 'zyxwvutsrqponmlkjihgfedcba'
# โดยเขียนโค้ตเพิ่มลงในช่องว่างที่เตรียมไว้ระหว่าง ### BEGIN SOLUTION และ ### END SOLUTION

        # def upside_down(input_string):
        #     answer = ""
        #     for char in input_string:
        #         if 'a' <= char <= 'z':
        #             rev = chr(219-ord(char))
        #             answer += rev
        #         else:
        #             answer += char
            
        #     return answer
        #     ### END SOLUTION
            
        # string = 'abcdefghijklmnopqrstuvwxyz'
        # print(upside_down(string)) # ผลลัพธ์ที่คาดหวัง 'zyxwvutsrqponmlkjihgfedcba'
