import numpy as np 
import matplotlib.pyplot as plt 

data = np.loadtxt('traj.dat')
#print(data)

fig, axes = plt.subplots(nrows=1, ncols=3)
axes[0].plot(data[:,0])
axes[1].hist(data[:,0], bins = 50)
axes[2].hist(data[:,1], bins = 50)

plt.tight_layout()
plt.show()