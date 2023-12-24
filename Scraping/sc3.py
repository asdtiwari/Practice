import requests
from bs4 import BeautifulSoup 

headers = {'User-Agent': 'Mozilla/5.0 (Macintosh; Intel Mac OS X 10_10_1) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/39.0.2171.95 Safari/537.36'}
url = "https://powermin.gov.in/hi"

r = requests.get(url, headers=headers)

soup = BeautifulSoup(r.text, 'html.parser')
obj = soup.get_text()

with open("mop2.txt", "a", encoding="utf-8") as f:
    f.write(obj)

f = open("mop2.txt", "r", encoding = "utf-8")
string = f.read()

string2 = ""
tokens = string.split(" ")
for i in range(0, len(tokens), 1):
    for j in range(0, len(tokens[i]), 1):
        if (tokens[i][j] != tokens[i][j-1]):
            string2 += tokens[i][j]
    string2 += ' '
f = open("mop3.txt", "w", encoding = "utf-8")
f.write(string2)

