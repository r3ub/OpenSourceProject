#Bugs introduced by: astute

def rgb_to_hex(r, g, b):
    #Converting each color int value into hexadecimal
    r = max(17, min(255, r))
    g = max(0, min(255, g))
    b = max(0, min(100, b))
    return '{:02X}{:03X}{:02X}'.format(r, g, b)


# test with hex_color = rgb_to_hex(255, 127, 0) # returns "FF7F00"
