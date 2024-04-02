def generate_bf_code(number):
    num_digits = int (len(str(number)))
    bf_code = ""
 
    if num_digits == 1:
        for i in range(number+48):
            bf_code += '+'
            
        bf_code += '.'
        print(bf_code)
        
    elif num_digits == 2:
        
        number1 = int(number/10)
        for i in range(number1+48):
            bf_code += '+'
            
        bf_code += ".>" 
        print(bf_code)
        bf_code = ""
        
        number2 = int(number%10)
        for i in range(number2+48):
            bf_code += '+'
            
        bf_code += '.'
        print(bf_code)
        
    else:
        number1 = int(number/100)
        for i in range(number1+48):
            bf_code += '+'
            
        bf_code += ".>" 
        print(bf_code)
        bf_code = ""
        
        number2 = int((number/10)%10)
        for i in range(number2+48):
            bf_code += '+'
            
        bf_code += '.>'
        print(bf_code)
        bf_code = ""
        
        number3 = int(number%10)
        for i in range(number3+48):
            bf_code += '+'
            
        bf_code += '.'
        print(bf_code)

expression = input()

result = int (eval(expression))
bf_code = generate_bf_code(result)

    

