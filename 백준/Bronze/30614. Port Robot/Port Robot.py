log_length = int(input())
logs = input().strip()

def calculate():
    log_stack = []
    result = False
    if (log_length % 2):
        return result
    
    diff = ord('a') - ord('A')
    
    for log in logs:
        if 'a' <= log <= 'z':
            log_stack.append(log)
        else:
            if not log_stack:
                return result
            
            if (ord(log_stack[-1]) - diff) == ord(log):
                log_stack.pop()
            else:
                return result
    result = not log_stack
    return result

if __name__ == "__main__":
    if calculate():
        print(1)
    else:
        print(0)
