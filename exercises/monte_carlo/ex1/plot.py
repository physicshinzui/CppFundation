import numpy as np 
import matplotlib.pyplot as plt 

data = np.loadtxt('traj.dat')
#print(data)

fig, axes = plt.subplots(nrows=1, ncols=2)
axes[0].hist(data[:,0])
axes[1].hist(data[:,1], bins = 50)

plt.show()