num_to_string :: (Show a, Num a)  => a -> String
num_to_string x = show x::String


palindrome :: (Eq a) => [a] -> Bool
palindrome xs = xs == reverse xs  


palindrome_number :: (Show a, Integral a)  => a -> Bool
palindrome_number x = palindrome (num_to_string x)


-- Euler 4
-- maximum $  filter  palindrome_number [x*y | x <- [10..99], y <- [10..99]]

largest_3_digit_palindrome = 
  maximum $  filter  palindrome_number [x*y | x <- [100..999], y <- [100..999]]
