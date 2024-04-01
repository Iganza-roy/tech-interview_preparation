def roman_to_int(rom_str):
    """converts a roman number to integer"""

    if not rom_str or type(rom_str) != str:
        return 0
    num = {'M': 1000, 'D': 500, 'C': 100, 'L': 50, 'X': 10, 'V': 5, 'I': 1}
    total = 0
    prev_val = 0

    for char in reversed(rom_str):
        value = num[char]
        total += value if value >= prev_val else -value
        prev_val = value
    return total


