# -*- coding: utf-8 -*-

import numpy as np

import matplotlib.pyplot as plt #加载作图扩展包

from pylab import *#调用库

x = np.arange(-0.1, 0.1, 0.0001) #界定作图的x精度

y1=np.sin(1/x) #定义函数方程式

plt.figure(1)

plt.subplot(211)    #这两句是指定，所绘制的图形是一组图片的“子图”，如果去掉这两句话，就不再是子图。

plt.plot(x, y1)