f= open("F://Other//Images//WIN_20230114_22_53_33_Pro.jpg","rb")

print(f.read())

f= open("F://Other//Images//WIN_20230114_22_53_33_Pro.jpg","wb")
data = b"\x48\x65\x6c\x6c\x6f"
print(f.write(data))