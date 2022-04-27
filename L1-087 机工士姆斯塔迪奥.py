N,M,count = [int(i) for i in input().split()]
hang = 0
lie = 0
hangcf = []
liecf = []
sum = 0
for i in range(0,count):
    panduan,num = [int(i) for i in input().split()]
    if panduan == 0:
        if num not in hangcf:
            hangcf.append(num)
            hang += 1
    else:
        if num not in liecf:
            liecf.append(num)
            lie +=1
sum = M*N + hang*lie - lie*N - hang*M
print(sum)
