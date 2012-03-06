#!/usr/bin/env runhaskell

import Data.List

triangle n = sum [1..n]

factors :: Num a -> [Num a]
factors n = [x | x <- [1..(floor $ sqrt n)], n `mod` x == 0]

answer = find many_factors
  where
    tri = triangle [1..]
    many_factors = length factors(n) > 500


main = do
  putStrLn answer
