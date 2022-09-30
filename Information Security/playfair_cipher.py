def create(key):
    key = key.upper()
    matrix = [[0 for i in range(5)] for j in range(5)]
    letters = []
    row = 0
    col = 0

    for let in key:
        if let not in letters:
            matrix[row][col] = let
            letters.append(let)
        else:
            continue
        if col == 4:
            col = 0
            row += 1
        else:
            col += 1
    for let in range(65, 91):
        if let == 74:
            continue
        if chr(let) not in letters:
            letters.append(chr(let))

    index = 0
    for i in range(5):
        for j in range(5):
            matrix[i][j] = letters[index]
            index += 1
    # print(matrix)
    return matrix


def separate_same_letters(message):
    index = 0
    while index < len(message):
        l1 = message[index]
        if index == len(message) - 1:
            message = message + 'X'
            index += 2
            continue
        l2 = message[index + 1]
        if l1 == l2:
            message = message[:index + 1] + "X" + message[index + 1:]
        index += 2
    return message


def indexOf(letter, matrix):
    for i in range(5):
        try:
            index = matrix[i].index(letter)
            return i, index
        except:
            continue


def playfair(key, message, encrypt=True):
    inc = 1
    if not encrypt:
        inc = -1
    matrix = create(key)
    message = message.upper()
    message = message.replace(' ', '')
    message = separate_same_letters(message)
    cipher_text = ''
    for (l1, l2) in zip(message[0::2], message[1::2]):
        row1, col1 = indexOf(l1, matrix)
        row2, col2 = indexOf(l2, matrix)
        if row1 == row2:
            cipher_text += matrix[row1][(col1 + inc) % 5] + matrix[row2][(col2 + inc) % 5]
        elif col1 == col2:
            cipher_text += matrix[(row1 + inc) % 5][col1] + matrix[(row2 + inc) % 5][col2]
        else:
            cipher_text += matrix[row1][col2] + matrix[row2][col1]

    return cipher_text


plainText = str(input("Enter Plain Text : "))
key = str(input("Enter key : "))
encrypt_msg = playfair(key, plainText)
print("*"*60)
print()
print("Encrypted : "+encrypt_msg)
print()
print('Decrypted : '+playfair(key, encrypt_msg, False))
print()
print("*"*60)