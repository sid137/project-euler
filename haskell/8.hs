#!/usr/bin/env runhaskell

import Data.List
import System.IO


iterate_5 :: [Char] -> [[Char]]
iterate_5 input@(x:xs) 
  | size > 5 = first_5 ++ rest
  | otherwise = [input]
  where 
    size = length input
    first_5 = [take 5 input] 
    rest = iterate_5 xs
    

product_list xs = productive numerical_list
  where
    numerical_list = [read [x] :: Int | x <- xs]
    productive = foldr1 (*) 

main = do 
  contents <- readFile "8.input" 
  let number = intercalate "" (lines contents)
      collection = iterate_5 number
      products = [product_list x | x <- collection]
  putStrLn $ show $ maximum products
