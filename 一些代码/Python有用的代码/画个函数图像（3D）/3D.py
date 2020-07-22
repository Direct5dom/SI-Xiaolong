# -*- coding: utf-8 -*-
"""
Created on Thu Mar 12 15:51:01 2020

@author: Xiaolong Si - PC
"""

from matplotlib import pyplot as plt
from mpl_toolkits.mplot3d import Axes3D   #1
import numpy as np
import math


plt.figure()
ax = plt.axes(projection="3d")

a=5
b=5

x = np.arange(-5,5,0.01)
y = np.arange(-5,5,0.01)
X,Y = np.meshgrid(x,y)    # 2生成绘制3D图形所需的网络数据
#R = (X**2) * (Y)
#H = (X**2) + (Y**2)
#J = np.sqrt(H)
Z_1 = np.sqrt(X**2 + Y**2)
#Z_2 = 0*X + 1


ax.plot_surface(X,Y,Z_1,alpha=0.5,cmap="rainbow") #生成表面，alpha用于控制透明度 对Z_1
#ax.plot_surface(X,Y,Z_2,alpha=0.5,cmap="rainbow") #对Z_2
#ax.contour(X,Y,Z_1,zdir="x",offset=-1,cmap="rainbow")   #x轴投影
#ax.contour(X,Y,Z_1,zdir="y",offset=1,cmap="rainbow")    #y轴投影
#ax.contour(X,Y,Z_1,zdir="z",offset=0.,cmap="rainbow")   #z轴投影
ax.set_xlabel("X")  #设置X、Y、Z 坐标范围
ax.set_xlim(-5,5)   #设置X、Y、Z 轴
ax.set_ylabel("Y")
ax.set_ylim(-5,5)
ax.set_zlabel("Z")
#ax.set_zlim(0,4)
plt.show()