from string import ascii_letters
ALPHABET = ascii_letters[:len(ascii_letters)//2]


def merge_and_set_char_values(min_char_indexes, max_char_indexes):
    min_char_i, max_char_i = 0, 0
    merged_list = []
    
    while min_char_i < len(min_char_indexes) and max_char_i < len(max_char_indexes):
        if min_char_indexes[min_char_i] < max_char_indexes[max_char_i]:
            merged_list.append(-1)
            min_char_i += 1
        else:
            merged_list.append(1)
            max_char_i += 1
    
    while min_char_i < len(min_char_indexes):
        merged_list.append(-1)
        min_char_i += 1

    while max_char_i < len(max_char_indexes):
        merged_list.append(1)
        max_char_i += 1
    
    return merged_list


n = int(input())
text = input()

char_indexes = {char: [] for char in ALPHABET}
for i, char in enumerate(text):
    char_indexes[char].append(i)

res = 0

# przechodzimy przez każdą parę liter
# min_char to znak, ktorego ma byc jak najmniej w szukanym podciagu
# max_char to znak, ktorego ma byc jak najwiecej w szukanym podciagu
for min_char in ALPHABET:
    for max_char in ALPHABET:
        if max_char == min_char: continue

        min_char_indexes = char_indexes[min_char]
        max_char_indexes = char_indexes[max_char]

        # Tutaj łączymy obie listy indexów w ten sposób:
        # [1, 4, 6], [2, 5, 10] => [1, 2, 4, 5, 6, 10]
        # ale jednoczesnie zamieniamy indexy minimalizujace na -1, a maksymalizujace na 1:
        # [1, 4, 6], [2, 5, 10] => [-1, 1, -1, 1, -1, 1]
        char_values = merge_and_set_char_values(min_char_indexes, max_char_indexes)

        temp_res = 0                                # najlepszy wynik w trakcie petli
        sum_to_current_char = 0                  # aktualna suma od poczatku ciagu
        sum_to_current_substring_start = 0          # suma od poczatku ciagu do poczatku rozwazanego podciagu
        sum_to_best_substring_start = float('inf')  # suma od poczatku ciagu do poczatku najbardziej oplacalnego podciagu 
        for char_value in char_values:
            sum_to_current_char += char_value

            if char_value == -1: # To moze byc poczatek nowego podciagu
                sum_to_best_substring_start = min(sum_to_best_substring_start, sum_to_current_substring_start)
                sum_to_current_substring_start = sum_to_current_char
            temp_res = max(temp_res, sum_to_current_char - sum_to_best_substring_start)
        
        res = max(res, temp_res)
print(res)