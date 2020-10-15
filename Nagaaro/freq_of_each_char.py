def freq(str):
   
    s_list = str.split()
    unique_words = set(s_list)
    
    for words in unique_words:
        print('Frequency of ', words, 'is :',s_list.count(words))
        
str = 'apple mango orange orange apple apple peach'
freq(str)