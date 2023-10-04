

#appending
f = open("myfile.txt", "a")
f.write(" 2022")
f.close


# open and read the file after the appending
f= open("myfile.txt","r")
print(f.read())
