def upload_py(file_read):
    list1 = file_read.split(",")
    dict1 = {}
    for i in list1:
        _ = i.find(":")
        dict1[i[:_]] = i[_+1:]
    for i, t in dict1.items():
        str1 = t.strip(':')
        dict1[i] = str1
    return dict1