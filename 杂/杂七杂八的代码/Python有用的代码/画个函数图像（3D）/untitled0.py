from matplotlib import pyplot as plt
from mpl_toolkits.mplot3d import Axes3D  #此模块并非不用，如果缺少了会引起三维坐标的创建ValueError: Unknown projection '3d
import numpy as np

fig = plt.figure()
ax1 = plt.axes(projection="3d")

x = np.arange(-5,5,0.1)
y = np.arange(-5,5,0.1)
Z = x**2+y

ax1.plot3D(x,y,Z,"gray")
plt.show()
