num_to_string :: Num a => a -> String
num_to_string x = show x::String


palindrome :: [a] -> Bool
palindrome xs = 


palindrome_number :: Integral a => a -> Bool
palindrome_number x = palindrome (num_to_string x)
