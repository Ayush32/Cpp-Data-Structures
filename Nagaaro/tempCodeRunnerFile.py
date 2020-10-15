def feq(str):
    s_list = str.split()
    unique_words = set(s_list)
    
    for words in unique_words:
        print('Frequency of ', words, 'is :',s_list.count(words))
        
str = 'I am a good boy and i am good in gaming and also in coding'
freq(str)