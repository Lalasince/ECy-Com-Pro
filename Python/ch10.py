msg_test = "What is a true meaning of home? A House Is Not a Home! A house is made of bricks and beams. A home is made of hopes and dreams. Home is where our story begins. Home is the starting place of love, hope and dreams. The magic thing about home is that it feels good to leave, and it feels even better to come back. Home is where love resides, memories are created, friends always belong, and laughter never ends. I love my home."

# Skeleton code
class analysedText:
    ### BEGIN SOLUTION
    def __init__ (self, text):
        pass
        word_only_text = text.replace('.','').replace(',','').replace('!','').replace('?','') # <--ต้องแก้เพิ่มเติม
        print(word_only_text)
        word_only_text = word_only_text.lower()
        print(word_only_text)
        self.formated_text = word_only_text
    
    def freqAll(self):
        word_list = self.formated_text.split(' ')
        print(word_list)
        dict1 = {}
        for e in word_list:
            if e not in dict1:
                dict1[e] = 1
            else:
                dict1[e] += 1
        return dict1
        pass
    
    def freqOf(self,word):
        pass
    
    ### END SOLUTION


    
a = analysedText(msg_test) # แค่ไว้เช็ค 
print(a.formated_text)# แค่ไว้เช็ค 
a.freqAll() # แค่ไว้เช็ค 
a.freqOf('love')# แค่ไว้เช็ค
# ถ้าเขียนแล้วใช้งานได้จริง Test-run 