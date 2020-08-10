# -*- coding: utf-8 -*-
"""
Created on Fri Aug  7 06:19:53 2020

@author: sixiaolong
"""

from selenium import webdriver

from selenium.webdriver.support.ui import WebDriverWait

import time

# 打开浏览器
driver = webdriver.Edge()

# 进入网址
driver.get('https://store.steampowered.com/B')

# 点击登陆
driver.find_element_by_xpath("/html/body/div[1]/div[7]/div[1]/div/div[3]/div/a").click()

# 输入账号
driver.find_element_by_xpath('/html/body/div[1]/div[7]/div[4]/div[2]/div[2]/div/div/div[1]/div[1]/form/div[1]/input').send_keys('yaoyuebf')

# 输入密码
driver.find_element_by_xpath('/html/body/div[1]/div[7]/div[4]/div[2]/div[2]/div/div/div[1]/div[1]/form/div[2]/input').send_keys('yaoyueBF12356+')

# 点击登录
driver.find_element_by_xpath('/html/body/div[1]/div[7]/div[4]/div[2]/div[2]/div/div/div[1]/div[2]/div[1]/button').click()

# 获取手机令牌
a=input('请输入手机令牌：')

# 输入验证码
driver.find_element_by_xpath('/html/body/div[4]/div[3]/div/div/div/form/div[3]/div[1]/div/input').send_keys(a)

# 点击提交 
driver.find_element_by_xpath('/html/body/div[4]/div[3]/div/div/div/form/div[4]/div[1]/div[1]').click()

WebDriverWait(driver,timeout=999).until(lambda d: d.find_element_by_xpath('/html/body/div[1]/div[7]/div[4]/div[1]/div[9]/div[3]/div/div[1]/div[2]/a/div'))

# 循环探索队列n次
for x in range(11):
    # 进入探索队列
    el=driver.find_element_by_xpath('/html/body/div[1]/div[7]/div[4]/div[1]/div[9]/div[3]/div/div[1]/div[2]/a/div').click()
    
    