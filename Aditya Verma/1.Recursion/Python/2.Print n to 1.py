def Print(n):
    if n==1:
        print(1)
        return
    else:
        print(n)
        Print(n-1)
if __name__ == "__main__":
    n=int(input('Enter the value of n:'))
    Print(n)