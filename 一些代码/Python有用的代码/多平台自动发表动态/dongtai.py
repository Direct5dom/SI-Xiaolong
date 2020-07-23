# -*- coding: utf-8 -*-
"""
Created on Thu Jul 23 22:00:15 2020

@author: sixiaolong
"""


from selenium import webdriver

import time

QQID=input('输入QQ号')

QQPassword=input('输入QQ密码')

# 打开浏览器
driver = webdriver.Edge()

# 进入QQ空间
driver.get('https://user.qzone.qq.com')

time.sleep(5)

# 重新获取窗口句柄
sreach_window=driver.current_window_handle

# 腾讯旗下的登陆界面全部使用iframe内置，需要切换到iframe。
# 存储网页元素
iframe = driver.find_element_by_id("login_frame")

# 切换到选择的 iframe
driver.switch_to.frame(iframe)

# 找到“账号密码登陆”
driver.find_element_by_link_text('帐号密码登录').click()

# 找到账号框，输入账号
driver.find_element_by_class_name('inputstyle').send_keys(QQID)

# 找到密码框，输入密码
driver.find_element_by_xpath('/html/body/div[1]/div[5]/div/div[1]/div[3]/form/div[2]/div[1]/input').send_keys(QQPassword)

# 点击登录
driver.find_element_by_xpath('/html/body/div[1]/div[5]/div/div[1]/div[3]/form/div[4]/a/input').click()