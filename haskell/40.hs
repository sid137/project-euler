#!/usr/bin/env runhaskell
import Data.Char

main = do
  let ch = concat $ map show  [1..]
      chars = [ch !! 0, ch !! 9, ch !! 99, ch !! 999, ch !! 9999, ch !! 99999, ch !! 999999]
  putStrLn $ show . product $ map digitToInt chars
