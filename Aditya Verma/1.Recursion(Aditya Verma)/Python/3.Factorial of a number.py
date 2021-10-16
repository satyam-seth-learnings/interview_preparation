def Fact(n):
    if n==1:
        return 1
    return n*Fact(n-1)
if __name__ == "__main__":
    num=int(input('Enter the number:'))
    print('Factorial:',Fact(num))