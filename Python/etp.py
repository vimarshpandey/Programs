num_words = 0
 
f = open("E://file.txt", 'r')
for line in f:
    f.readline()
    words = line.split()
    num_words += len(words)
print("Number of words:")
print(num_words)