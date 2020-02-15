from bs4 import BeautifulSoup as bs
import requests

htmlFile = requests.get("https://www.w3resource.com/python-exercises/web-scraping/index.php").text
soup = bs(htmlFile,'lxml')
print(soup.prettify())
