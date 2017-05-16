
from matplotlib.pyplot import *
import numpy as np

import numpy  as np

def polinear(M):
    matx = np.zeros((M.shape[0], M.shape[0]))
    for i in range (0, M.shape[0]):
        for k in range(0, M.shape[0]):
            matx[i][k] = pow(M[i],M.shape[0]-(k+1))
    return matx
    


x=np.array([1250, 1000, 750])
y=np.array([25, 15, 10])

print(polinear(x))


AH = np.squeeze(np.asarray(AH))

print(AH)

def f(t, h):
    return h[0]*t**2 + h[1]*t + h[2]
    
t = np.linspace(10, 850, 310)
y = np.zeros(len(t))
for i in range(len(t)):
    y[i] = f(t[i], np.squeeze(np.asarray(AH))) 
plot(t, y)
print(AH[0]*850**2 + AH[1]*850 + AH[2])
show()
