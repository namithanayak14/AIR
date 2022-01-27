f = input("Enter file name with extension: ")
file = open(f, "r")
text = file.read().lower().split()

word = input("Enter the word: ")

def word_count(word, text):
    count = 0
    if word in text:
        for word in text:
            count += 1
    return count

print(word_count(word, text))


