from Class import upload
text = open('.\\data\\Data.ini', 'r', encoding='utf-8').read()
bot_main_dic = upload.upload_py(text)
bot_li = list(bot_main_dic.keys())
while True:
    n = input("Q:")
    if n == "quit":
        break
    for t in bot_li:
        if t in n:
            print(bot_main_dic[t])
input('结束... Enter quit.')