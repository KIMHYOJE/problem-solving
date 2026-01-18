n,m = map(int,input().split( ))

if m <= 2:
    print("NEWBIE!")
elif m > 2 and m <= n:
    print("OLDBIE!")
else:
    print("TLE!")