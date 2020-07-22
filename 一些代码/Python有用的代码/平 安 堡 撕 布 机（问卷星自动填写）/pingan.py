# -*- coding: utf-8 -*-
"""
Created on Tue Jul 21 17:06:22 2020

@author: sixiaolong
"""


from selenium import webdriver

import time

# 获取问卷星地址
a = input("请输入今日问卷星网址：")

# 输出网址供确认
print("今日问卷星网址：",a)

# 打开浏览器
driver = webdriver.Edge()

# 进入网址
driver.get(a)

# 根据路径找到按钮,并模拟进行点击
driver.find_element_by_xpath('/html/body/form/div[5]/div[2]/fieldset/div[1]/div[2]').click()

# 延迟防止加载不全
time.sleep(10)

# 找到内嵌网页的iframe
iframe=driver.find_element_by_id("yz_popwinIframe")

# 切换到内嵌网页
driver.switch_to.frame(iframe)

# 根据class找到按钮,并模拟进行点击
driver.find_element_by_xpath('/html/body/div/div[4]/div[1]/a').click()

# 根据路径找到按钮,并模拟进行点击
driver.find_element_by_xpath('/html/body/form/div[5]/div[2]/fieldset/div[2]/div[2]/div[1]').click()  

# 根据路径找到按钮,并模拟进行点击
driver.find_element_by_xpath('/html/body/form/div[5]/div[2]/fieldset/div[3]/div[2]/div[2]').click()  

# 根据路径找到文本框,并模拟进行输入
driver.find_element_by_xpath('/html/body/form/div[5]/div[2]/fieldset/div[4]/div[2]/input').send_keys("36")

# 根据路径找到文本框,并模拟进行输入
driver.find_element_by_xpath('/html/body/form/div[5]/div[2]/fieldset/div[5]/div[2]/input').send_keys("司晓龙")

# 根据路径找到按钮,并模拟进行点击
driver.find_element_by_xpath('/html/body/form/div[5]/div[2]/fieldset/div[6]/div[2]/div[2]/span/a').click() 

# 根据路径找到按钮,并模拟进行点击
driver.find_element_by_xpath('/html/body/form/div[5]/div[2]/fieldset/div[7]/div[2]/div[2]/span/a').click() 

# 根据路径找到按钮,并模拟进行点击
driver.find_element_by_xpath('/html/body/form/div[5]/div[2]/fieldset/div[8]/div[2]/div[2]/span/a').click() 

# 根据路径找到按钮,并模拟进行点击
driver.find_element_by_xpath('/html/body/form/div[5]/div[6]/div[3]/div[1]/div/div').click() 

time.sleep(5)

# 关闭浏览器
driver.quit()
