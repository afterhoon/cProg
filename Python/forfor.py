num = int(input('수를 입력하시오: '))

for i in range(num):
    for j in range(i+1):
        print('*', end ="")
    print('')