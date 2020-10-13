import sys
import random as r
import pyperclip

i = sys.argv
inter = ' '.join(sys.argv[1:])
out = ''


for c in range(len(inter)):
    x = r.random()
    if x < 0.5:
        out = out + inter[c].lower()
    else:
        out = out + inter[c].upper()

print(inter)
print(out)
pyperclip.copy(out)
