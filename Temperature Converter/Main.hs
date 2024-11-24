module Main where 

import System.IO (readLn, hFlush, stdout)

celsiusToFahrenheit :: Double -> Double 
celsiusToFahrenheit c = (c * (9 / 5)) + 32

fahrenheitToCelsius :: Double -> Double 
fahrenheitToCelsius f = (f - 32) * (5 / 9)

main :: IO ()
main = do 
    putStrLn "Celsius to Fahrenheit CLI Program"
    putStrLn "Choose Celsius or Fahrenheit"
    putStrLn "1)Celsius to Fahrenheit"
    putStrLn "2)Fahrenheit to Celsius"
    putStr "Enter choice: "
    hFlush stdout
    choice <- (readLn :: IO Int) 
    case choice of 
        1 -> do 
              celsius <- do 
                          putStr "Enter Celsius: "
                          hFlush stdout 
                          readLn :: IO Double 
              let fahrenheit = round $ celsiusToFahrenheit celsius
              putStrLn $ (show celsius) ++ " Celsius = " ++ (show fahrenheit) ++ " Fahrenheit."
        2 -> do 
              fahrenheit <- do 
                             putStr "Enter Fahrenheit: "
                             hFlush stdout 
                             readLn :: IO Double 
              let celsius = round $ fahrenheitToCelsius fahrenheit 
              putStrLn $ (show fahrenheit) ++ " Fahrenheit = " ++ (show celsius) ++ " Celsius."
        _ -> do 
              putStrLn "Invalid input. Try again"
              return ()
                    