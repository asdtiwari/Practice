import requests
from bs4 import BeautifulSoup 

headers = {'User-Agent': 'Mozilla/5.0 (Macintosh; Intel Mac OS X 10_10_1) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/39.0.2171.95 Safari/537.36'}
url = "https://powermin.gov.in/"

r = requests.get(url, headers=headers)

soup = BeautifulSoup(r.text, 'html.parser')
obj = soup.get_text()

with open("mop.txt", "a", encoding="utf-8") as f:
    f.write(obj)

f = open("mop.txt", "r", encoding = "utf-8")
string = f.read()

string2 = ""
buffer = ''
tokens = string.split(" ")

for i in range(0, len(tokens), 1):
    for j in range(0, len(tokens[i]), 1):
        if (tokens[i][j] == '\n' and tokens[i][j-1] != '\n' and buffer != '\n'):
            string2 += tokens[i][j]
        elif (tokens[i][j] != '\n'):
            string2 += tokens[i][j]
    if(len(string2) != 0 and string2[len(string2)-1] == '\n'):
        buffer = '\n'
    else:
        buffer = ''
        string2 += ' '

f = open("mop1.txt", "w", encoding = "utf-8")
f.write(string2)
print(string)
print(tokens)
print(string2)


