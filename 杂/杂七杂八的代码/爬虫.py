# -*- coding: utf-8 -*-
"""
Created on Thu Apr 16 21:13:30 2020

@author: Xiaolong Si - PC
"""
 
import urllib.request
 
request_R = urllib.request.Request("http://www.baidu.com")
response = urllib.request.urlopen(request_R)
print (response.read())