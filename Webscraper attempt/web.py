import requests
import os
from selenium import webdriver

DRIVER_PATH = (r'C:\Users\Chase Minden\chromedriver')
driver = webdriver.Chrome(executable_path=DRIVER_PATH)
driver.get('https://www.nba.com/scores#/')


team = driver.find_element_by_xpath('')
score = driver.find_element_by_xpath('')

product_data = {
    'title' : "BOS", #team.get_attributed('content'),
    'data' : score.get_attributed('content')
}

print(product_data)
driver.quit()