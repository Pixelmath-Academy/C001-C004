def expand_around_center(s, left, right):
    while left >= 0 and right < len(s) and s[left] == s[right]:
        left -= 1
        right += 1
    return s[left + 1:right]

s = input().strip()
longest = s[0]  # At least one character will be palindrome

for i in range(len(s)):
    # Odd length palindromes
    palindrome1 = expand_around_center(s, i, i)
    if len(palindrome1) > len(longest):
        longest = palindrome1
    
    # Even length palindromes
    if i < len(s) - 1:
        palindrome2 = expand_around_center(s, i, i + 1)
        if len(palindrome2) > len(longest):
            longest = palindrome2

print(len(longest)) 