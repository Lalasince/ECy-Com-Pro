def fahrenheit(celcius):
    """ คืนค่ากลับเป็นอุณหภูมิองศาฟาเรนไฮต์ (F) """
    ### BEGIN SOLUTION
    eq=((9/5)*celcius+32)
    pass
    return eq
    ## END SOLUTION

    
celcius = int(input('ใส่อุณหภูมิในหน่วยองศาเซลเซียส (C):'))
print('อุณหภูมิในหน่วยองศาฟาเรนไฮต์คือ ', fahrenheit(celcius), 'F')
