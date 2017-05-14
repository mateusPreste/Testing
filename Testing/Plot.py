from matplotlib.pyplot import *
import numpy as np

def f(t):
    return t**2*np.exp(-t**2)
t = np.linspace(0, 3, 310)
y = np.zeros(len(t))
for i in range(len(t)):
    y[i] = f(t[i]) 
plot(t, y)
show()
