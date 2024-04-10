def close_parenthesis(result):
    global is_parenthesis_opened

    result.append(')')
    is_parenthesis_opened = False
    return result

def open_parenthesis(result):
    global is_parenthesis_opened
    
    result.append('(')
    is_parenthesis_opened = True
    return result


length = int(input())
result, is_parenthesis_opened = [], False


for _ in range(length-1):
    char = input()

    if char == '+' and not is_parenthesis_opened:
        open_parenthesis(result)

    elif char == '-' and is_parenthesis_opened:
        close_parenthesis(result)

    result.append('-')

if is_parenthesis_opened:
    close_parenthesis(result)

print(''.join(result))
