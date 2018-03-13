test=input("Enter the string")
for eachLetter in test: # eachLetter can be replaced with any other name
        if eachLetter in ['a','e','i','o','u']:
                test = test.replace(eachLetter, '')
test1=test[::-1]
print(test1)
