s = input().upper()

mx = 0
cnt = 0
sr = 0
sb = 0 
ok = 1 
ccnt = 0  
id = 0
unn = 1  

for i in range(len(s)):
    if s[i] not in ['I', 'T']:
        unn = 0

    if sb and s[i] not in ['I', 'T'] and ccnt == 0:
        ok = 0
        break

    if sr and s[i] != 'A' and cnt == 0:
        ok = 0
        break

    if s[i] == 'R':
        sr = 1
        cnt = 0

    elif s[i] == 'A':
        if not sr:
            ok = 0
            break
        cnt += 1
        mx = max(mx, cnt)

    elif s[i] == 'B':
        sb = 1
        ccnt = 0

    elif s[i] in ['I', 'T'] and sb:
        ccnt += 1

    id += 1

if not ok or (sr and cnt == 0) or (sb and ccnt == 0):
    print("no", min(id, len(s) - 1))

elif unn:
    print("unknown", len(s))

else:
    print("yes", mx)
# WRONG OUTPUT in Case 2 7 9
# RECOMMENDED C++
