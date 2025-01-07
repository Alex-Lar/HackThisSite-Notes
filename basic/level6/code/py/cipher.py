def encrypt(string: str):
    offset = 0
    char_list = []

    for char in string:
        char_list.append(chr(ord(char) + offset))
        offset += 1

    return "".join(char_list)

def decrypt(string: str):
    offset = 0
    char_list = []

    for char in string:
        char_list.append(chr(ord(char) - offset))
        offset += 1

    return "".join(char_list)
