
def code(input):
    input = input.lower()
    output = []
    for character in input:
        number = ord(character) - 96
        output.append(number)
    str1 = ''.join(str(e) for e in output)
    print(str1)

input = input('Enter text : ')
code(input)