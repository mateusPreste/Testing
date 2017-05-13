import numpy as np

def LU(A):
    U = np.zeros(A.shape)
    
    for i in range (0, A.shape[0]):
        pivot = A[i][i]
        U[i][i] = 1
        
        for j in range (i+1, A.shape[0]):
            m = A[j][i]/pivot
            U[j][i] = m
            for k in range (i, A.shape[1]):
                A[j][k] = A[j][k] - (m* A[i][k])
    
    return A,U

uu = np.array( [ [1.,6,2,4,8],
                [3,19,4,15,25],
                [1,4,8,-12,18],
                [5,33,9,3,72] ])
print(LU(uu))
